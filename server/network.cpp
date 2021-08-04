#include <SingletonApplication.h>
#include "network.h"
#include "logic.h"


CServerNetwork::CServerNetwork()
{
}

bool CServerNetwork::ServerSay( CServerLogicAnswerData  ServerLogicAnswerData)
{

    qDebug() << "[" << __FUNCTION__ << "] : ";
#if 1
    QString MsgTop20;
    if (ServerLogicAnswerData.GetStatusTop20() == EStatus::STATUS_FIND )
    {
         MsgTop20= "Твои карты найдены в таблице Top20";
    }
    else if(ServerLogicAnswerData.GetStatusTop20() == EStatus::STATUS_NOT_FIND )
    {
          MsgTop20= "Твои карты HE найдены в таблице Top20";
    }
    else if(ServerLogicAnswerData.GetStatusTop20() == EStatus::NONE )
    {
          MsgTop20= "Статуст не установлен";
    }
    else
    {
          MsgTop20= "Если ты видешь это строку, то возникла критическая ошибка";
    }



    QString MsgUTG_SH;

    if (ServerLogicAnswerData.GetStatusUTG_SH() == EStatus::STATUS_FIND )
    {
          MsgUTG_SH= "Твои карты найдены в таблице UTG_SH";
    }
    else if(ServerLogicAnswerData.GetStatusUTG_SH() == EStatus::STATUS_NOT_FIND )
    {
          MsgUTG_SH= "Твои карты HE найдены в таблице UTG_SH";
    }
    else if(ServerLogicAnswerData.GetStatusUTG_SH() == EStatus::NONE )
    {
          MsgUTG_SH= "Статуст не установлен";
    }
    else
    {
          MsgUTG_SH= "Если ты видешь это строку, то возникла критическая ошибка";
    }
#endif
    emit SingletonApplication::GetInstance().GetPtrUserInputForm()->setText_top20( MsgTop20);
    emit SingletonApplication::GetInstance().GetPtrUserInputForm()->setText_UTG_SH(MsgUTG_SH);
    
    //if (ServerLogicAnswerData.IsActionFOLD_For_TAB_UTG_SH())
    //{
    //    qDebug() << "[" << __FUNCTION__ << "] : DESIGN MAKER FOLD";
    //    emit SingletonApplication::GetInstance().GetPtrUserInputForm()->serverCmd_Fold();
    //}

    if (ServerLogicAnswerData.IsAction_FOLD())
    {
        qDebug() << "[" << __FUNCTION__ << "] : DESIGN MAKER FOLD";
        emit SingletonApplication::GetInstance().GetPtrUserInputForm()->serverCmd_Fold();
    }
    else
    {
        qDebug() << "[" << __FUNCTION__ << "] : ПОДНЯТЬ СТАВКУ";

        std::string ValueStavkaUpAAfterFindPlayerCardInTable =  SingletonApplication::GetInstance().GetPtrSetting().m_ValueStavkaUpAAfterFindPlayerCardInTable;
        SingletonApplication::GetInstance().GetPtrActor()->upStavka( ValueStavkaUpAAfterFindPlayerCardInTable.c_str() );   // Todo move in server

       // kr4 SingletonApplication::GetInstance().GetPtrUserInputForm()->showTable(); // Todo move in server
    }


    return false;
}

bool CServerNetwork::ServerSay(std::string Msg, EStatus Status)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";


    qCritical() << Msg.c_str();

    //SingletonApplication::GetInstance().Send();

    //ServerLogicAnswerData
    if(Status == EStatus::STATUS_DBG_MSG)
    {
        SingletonApplication::GetInstance().GetFormRenderInfo()->RenderDbgMsg(Msg);
    }

    SingletonApplication::GetInstance().GetPtrUserInputForm()->sendToQml(-13);
    return false;
}

bool CServerNetwork::ServerSayInitStol(std::string Msg)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    emit SingletonApplication::GetInstance().GetPtrUserInputForm()->eventInitStol();
    // kr4 SingletonApplication::GetInstance().GetPtrUserInputForm()->showTable();
    //SingletonApplication::GetInstance().GetPtrUserInputForm()->renderSelfCard();
    return true;
}

void CServerNetwork::ServerSay(const std::string &DbgMsg)
{
    SingletonApplication::GetInstance().GetFormRenderInfo()->RenderDbgMsg(DbgMsg);
}

void CServerNetwork::ClientSay(CActor Actor)
{
    //qDebug() << "[" << __FUNCTION__ << "] : ";
    //
    // kr4 SingletonServerLogic::GetInstance().SetPlayerActor(Actor);
    SingletonServerLogic::GetInstance().Tick();
}


void CServerNetwork::ClientSay(std::vector<CActor> OtherPlayers)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    SingletonServerLogic::GetInstance().SetOtherPlayer(OtherPlayers);

    CServerNetwork networkObj;
    networkObj.ServerSayInitStol( "Ok Init stol");
}

void CServerNetwork::ClientSay(std::vector<CActor> OtherPlayers, ECOMMAND Cmd)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    SingletonServerLogic::GetInstance().SetOtherPlayer(OtherPlayers);
    SingletonServerLogic::GetInstance().Execut(Cmd);


}



//void CServerNetwork::ClientSay(std::vector<CActor> OtherPlayers, ECOMMAND Cmd)
//{
//
//}
