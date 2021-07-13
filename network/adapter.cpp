#include "adapter.h"

#include <server/logic.h>

void CClientNetwork::ClientSay(CActor Actor)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    SingletonServerLogic::GetInstance().SetPlayerActor(Actor);
    //SingletonServerLogic::GetInstance().Tick();
}
