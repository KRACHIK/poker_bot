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
    \
    if (ServerLogicAnswerData.IsActionFOLD_For_TAB_UTG_SH())
    {
        qDebug() << "[" << __FUNCTION__ << "] : DESIGN MAKER FOLD";
        emit SingletonApplication::GetInstance().GetPtrUserInputForm()->serverCmd_Fold();
    }

    return false;
}

bool CServerNetwork::ServerSay(std::string Msg, EStatus Status)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    //SingletonApplication::GetInstance().Send();

    //ServerLogicAnswerData

    SingletonApplication::GetInstance().GetPtrUserInputForm()->sendToQml(-13);
    return false;
}

bool CServerNetwork::ServerSayInitStol(std::string Msg)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    emit SingletonApplication::GetInstance().GetPtrUserInputForm()->eventInitStol();
    SingletonApplication::GetInstance().GetPtrUserInputForm()->showTable();
    SingletonApplication::GetInstance().GetPtrUserInputForm()->renderSelfCard();
    return true;
}

void CServerNetwork::ClientSay(CActor Actor)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    SingletonServerLogic::GetInstance().SetPlayerActor(Actor);
    SingletonServerLogic::GetInstance().Tick();
}

void CServerNetwork::ClientSay(std::vector<CActor> OtherPlayers)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    SingletonServerLogic::GetInstance().SetOtherPlayer(OtherPlayers);

    CServerNetwork networkObj;
    networkObj.ServerSayInitStol( "Ok Init stol");
}
