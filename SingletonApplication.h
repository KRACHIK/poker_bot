#ifndef APP_H
#define APP_H

#include <QObject>
#include <QDebug>

#include "base/base.h"
#include <vector>

#include <interface/input.h>





class SingletonApplication
{
/*
    Статический класс который имеет доступ ко всему и отовсюду
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

    //bool Recov(std::string Msg, EStatus Status);



    void SetUserInputForm(CInput *pUserInputForm);

    CInput *GetPtrUserInputForm() const;



private:
    CActor m_Actor;
    CInput * m_pUserInputForm;

};




#endif // APP_H
