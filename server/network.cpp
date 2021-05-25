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

void CServerNetwork::ClientSay(CActor Actor)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    SingletonServerLogic::GetInstance().SetPlayerActor(Actor);
    SingletonServerLogic::GetInstance().Tick();
}
