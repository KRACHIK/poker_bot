#include "logic.h"
#include "network.h"

SingletonServerLogic &SingletonServerLogic::GetInstance() {
    static SingletonServerLogic instance;
    return instance;
}

void SingletonServerLogic::Tick()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    if ( m_Actor.IsOkInput() )
    {
        qDebug() << "[" << __FUNCTION__ << "] : Ok";

        CServerLogicAnswerData ServerLogicAnswerData;

        //bool bFindTop20 = m_TableTop20StartingHands.GetStatus(m_Actor);
        //qDebug() << "[" << __FUNCTION__ << "] : Поиск в таблице Top20 используя старый алго bFindTop20 =" << bFindTop20;

        bool bFindTop20_v2 = CFindPlayingCards::GetStatus(m_TableTop20StartingHands.GetTables(), m_Actor);
        ServerLogicAnswerData.SetStatusTable_Top20 (bFindTop20_v2);
        qDebug() << "[" << __FUNCTION__ << "] : Поиск в таблице Top20 используя обобщеный механизм bFindTop20_v2 =" << bFindTop20_v2;


        bool bUTG_SH = CFindPlayingCards::GetStatus(m_Table_UTG_SH.GetTable() , m_Actor);
        ServerLogicAnswerData.SetStatusTable_UTG_SH(bUTG_SH);
        qDebug() << "[" << __FUNCTION__ << "] : Поиск в таблице m_Table_UTG_SH используя обобщеный механизм bUTG_SH =" << bUTG_SH;


        qDebug() << "[" << __FUNCTION__ << "] : Error!";
        CServerNetwork networkObj;
        networkObj.ServerSay( ServerLogicAnswerData );

    }
    else
    {
        qDebug() << "[" << __FUNCTION__ << "] : Error!";
        CServerNetwork networkObj;
        networkObj.ServerSay( "!!!!!!", EStatus::STATUS_ERROR);
    }

}

CActor &SingletonServerLogic::GetPlayerActor()
{
    return m_Actor;
}

void SingletonServerLogic::SetPlayerActor(CActor Actor)
{
    m_Actor = Actor;
}

void SingletonServerLogic::SetOtherPlayer(std::vector<CActor> OtherPlayers)
{
    qDebug() << "[" << __FUNCTION__ << "] :   ";
    m_OtherPlayers = OtherPlayers;
}


bool CFindPlayingCards::GetStatus(std::vector<std::vector<CTexasHoldem> > Tables, CActor &Actor)
{
    bool bMath = false;
    for (size_t i = 0; i < Tables.size(); i++)
    {
        for (size_t j = 0; j < Tables[i].size(); j++)
        {
            bMath = Tables[i][j].IsMath(Actor.GetPlayingCards());

            if (bMath)
            {
                qDebug() << "[" << __FUNCTION__ << "] : OK OK OK OK OK OK  [i][j] = " << " " << i << " " << j;
                break;
            }

        }
        if (bMath)
        {
            break;
        }
    }
    if (bMath == false)
        qDebug() << "[" << __FUNCTION__ << "] :  Find pair card in table and not find. input error or enternal error;";

    return bMath;
}
