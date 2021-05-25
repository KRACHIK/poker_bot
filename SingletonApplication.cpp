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


void SingletonApplication::Clear()
{
    GetPlayerActor().ClearPlayingCards();
}
