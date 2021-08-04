#ifndef APP_H
#define APP_H

#include <QObject>
#include <QDebug>

#include "base/base.h"
#include <vector>

#include <interface/input.h>





class SingletonApplication
{/*
     класс который имеет доступ ко всему и отовсюду
*/
private:
    SingletonApplication() {  }

    SingletonApplication( const SingletonApplication& );
    SingletonApplication& operator=( SingletonApplication& );

public:
    static SingletonApplication& GetInstance();
    void Send();
    void Clear();

     //CActor &GetPlayerActor();

    void SetUserInputForm(CInput *pUserInputForm);
    CInput *GetPtrUserInputForm() const;
    std::vector<CActor> GetOtherPlayer();


     CActor & GetOtherPlayer(int index);


     CActor GetCloneOtherPlayer(int index)
     {
         return m_OtherPlayers[index];
     }

    void InsertNewPlayer(int Index, QString Name);

    CContainerPosition ContainerPosition() const;

    CActor *GetPtrActor() const;
    void SetPtrActor(CActor *PtrActor);
    CSetting & GetPtrSetting();

    void setFormRenderInfo(CRenderInfo *pFormRenderInfo);

    CRenderInfo *GetFormRenderInfo() const;

private:
    CActor * m_PtrActor = nullptr; // Это модель которая иметирует нас
    CInput * m_pUserInputForm;
    CRenderInfo * m_pFormRenderInfo;
    std::vector<CActor> m_OtherPlayers; // Это модель которая иметирует наших соперников
    CContainerPosition m_ContainerPosition;
    CSetting m_Setting;
};




#endif // APP_H
