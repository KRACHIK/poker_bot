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

        if (  bUTG_SH == false)
        {
            ServerLogicAnswerData.SetActionFOLD_For_TAB_UTG_SH(true);
        }



        if (CFindPlayingCards::GetStatus( m_Table_BB_ISO.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_BB_ISO =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_BB_ISO =" ;
        }

        if (CFindPlayingCards::GetStatus( m_Table_MP.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_MP " ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_MP  " ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_start.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_start =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_start =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Table_CO.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_CO =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_CO =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_BU_OPEN.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_BU_OPEN =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_BU_OPEN =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_SB_OPEN.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_SB_OPEN =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_SB_OPEN =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_vs_3b_UTG_FR.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_vs_3b_UTG_FR =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_vs_3b_UTG_FR =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_3b_MP.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_3b_MP =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_3b_MP =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_3b_SB.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_3b_SB =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_3b_SB =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_UTG_FR.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_UTG_FR =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_UTG_FR =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_vs_UTG.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_UTG =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_UTG =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_vs_MP.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_MP =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_MP =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_CO.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_CO =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_CO =" ;
        }

        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_UTG17.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_UTG17 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_UTG17 =" ;
        }

        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_MP20.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_MP20 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_MP20 =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_MP20.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_MP20 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_MP20 =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_CO27.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_CO27 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_CO27 =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_BU45.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_BU45 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_BU45 =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_vs4B_UTGFR.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs4B_UTGFR =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs4B_UTGFR =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs4B_UTG.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs4B_UTG =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs4B_UTG =" ;
        }



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

bool CFindPlayingCards::GetStatus(std::vector<CTexasHoldem> Tables, CActor &Actor)
{
    bool bMath = false;
    for (size_t i = 0; i < Tables.size(); i++)
    {
        bMath = Tables[i].IsMath(Actor.GetPlayingCards());

        if (bMath)
        {
            qDebug() << "[" << __FUNCTION__ << "] : OK OK OK OK OK OK  [i][j] = " << " " << i  ;
            break;
        }
    }

    if (bMath == false)
        qDebug() << "[" << __FUNCTION__ << "] :  Find pair card in table and not find. input error or enternal error;";

    return bMath;
}
