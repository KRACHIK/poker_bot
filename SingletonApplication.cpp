#include "SingletonApplication.h"

#include "base/base.h"

#include "server/network.h"
#include <QDebug>

SingletonApplication &SingletonApplication::GetInstance() {
    static SingletonApplication instance;
    return instance;
}

void SingletonApplication::Send()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    CServerNetwork  networkObj;
    networkObj.ClientSay(m_Actor);
    networkObj.ClientSay(m_OtherPlayers);

}

CActor &SingletonApplication::GetPlayerActor()
{
    return m_Actor;
}

void SingletonApplication::SetUserInputForm(CInput *pUserInputForm)
{
    m_pUserInputForm = pUserInputForm;
}

CInput *SingletonApplication::GetPtrUserInputForm() const
{
    return m_pUserInputForm;
}

void SingletonApplication::InsertNewPlayer(int Index, QString Name)
{
    qDebug() << "[" << __FUNCTION__ << "] : Index "  << Index << " Name  " <<  Name;

    CActor Actor (Name, Index);

    m_OtherPlayers.push_back(Actor);
}

std::vector<CActor> SingletonApplication::GetOtherPlayer()
{
    return m_OtherPlayers;
}


void SingletonApplication::Clear()
{
    GetPlayerActor().ClearPlayingCards();
}
