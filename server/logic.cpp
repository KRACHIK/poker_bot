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

        m_TableTop20StartingHands.GetStatus(m_Actor);

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
