#include <SingletonApplication.h>
#include "network.h"
#include "logic.h"


CServerNetwork::CServerNetwork()
{
}

bool CServerNetwork::ServerSay(std::string Msg, EStatus Status)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    //SingletonApplication::GetInstance().Send();

    SingletonApplication::GetInstance().GetPtrUserInputForm()->sendToQml(-13);
    return false;
}

bool CServerNetwork::ServerSayInitStol(std::string Msg)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    emit SingletonApplication::GetInstance().GetPtrUserInputForm()->eventInitStol();
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