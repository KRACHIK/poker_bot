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
    CActor &GetPlayerActor();
    void SetUserInputForm(CInput *pUserInputForm);
    CInput *GetPtrUserInputForm() const;
    std::vector<CActor> GetOtherPlayer();


     CActor & GetOtherPlayer(int index)
     {
         return m_OtherPlayers[index];
     }


    void InsertNewPlayer(int Index, QString Name);

    CContainerPosition ContainerPosition() const;

private:
    CActor m_Actor; // Это модель которая иметирует нас
    CInput * m_pUserInputForm;
    std::vector<CActor> m_OtherPlayers; // Это модель которая иметирует наших соперников
    CContainerPosition m_ContainerPosition;
};




#endif // APP_H
