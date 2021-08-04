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

    //CServerNetwork  networkObj;
    //networkObj.ClientSay(m_OtherPlayers);
    //
    //if (m_PtrActor != nullptr)
    //{
    //    CActor tmp = *m_PtrActor;
    //    networkObj.ClientSay(tmp );
    //}


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

    srand(time(0));
    std::string UniquePlayerID = std::string(Name.toStdString()) + (std::to_string(Index)) +(std::to_string(rand()%9999999));
    Actor.setUniquePlayerID( UniquePlayerID );

    m_OtherPlayers.push_back(Actor);
    if (m_OtherPlayers.size() >= 6)
    {
        Send();
    }

}

CContainerPosition SingletonApplication::ContainerPosition() const
{
    return m_ContainerPosition;
}

CActor *SingletonApplication::GetPtrActor() const
{
    return m_PtrActor;
}

void SingletonApplication::SetPtrActor(CActor *PtrActor)
{
    m_PtrActor = PtrActor;
}

CSetting & SingletonApplication::GetPtrSetting()
{
    return m_Setting;
}

void SingletonApplication::setFormRenderInfo(CRenderInfo *pFormRenderInfo)
{
    m_pFormRenderInfo = pFormRenderInfo;
}

CRenderInfo *SingletonApplication::GetFormRenderInfo() const
{
    return m_pFormRenderInfo;
}

std::vector<CActor> SingletonApplication::GetOtherPlayer()
{
    return m_OtherPlayers;
}

CActor &SingletonApplication::GetOtherPlayer(int index)
{
    return m_OtherPlayers[index];
}


void SingletonApplication::Clear()
{
    GetPtrActor()->ClearPlayingCards();
}
