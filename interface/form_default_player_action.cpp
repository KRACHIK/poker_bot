#include "form_default_player_action.h"

#include <SingletonApplication.h>

#include <network/adapter.h>



void CFormDefaultPlayerAction::insertPlayer(int Index, QString Name)
{
    qDebug() << "[" << __FUNCTION__ << "] : " << Index << " Name: " << Name;
    SingletonApplication::GetInstance().InsertNewPlayer(Index, Name);
}

void CFormDefaultPlayerAction::ucazatbPositiyiStart()  {

#if 1
    qDebug() << "[" << __FUNCTION__ << "] : m_SelectedIndex=" <<  m_SelectedIndex
             << "Кликни мышью на человека, которому присвоен маркер D";
#endif
}

void CFormDefaultPlayerAction::selectedIndex(int index)
{
    qDebug() << "[" << __FUNCTION__ << "] : " << index;
    m_SelectedIndex  = index;
}


void CFormDefaultPlayerAction::ucazatbPositiyiStop()
{ // TODO MOVE

#if 1
    qDebug() << "[" << __FUNCTION__ << "] : m_SelectedIndex=" <<  m_SelectedIndex
             << "я подтверждаю что человек с индексом "
             << "m_SelectedIndex=" <<  m_SelectedIndex
             << "вледеет маркером D";



    int NewIndex_1 = (m_SelectedIndex + 1) % 6;
    int NewIndex_2 = (m_SelectedIndex + 2 ) % 6;

    qDebug() << "[" << __FUNCTION__ << "] : новпя позиция для ставки 1.0 =" <<  NewIndex_1;
    qDebug() << "[" << __FUNCTION__ << "] : новпя Следующая позиция для ставки 0.5=" <<  NewIndex_2;

    SingletonApplication::GetInstance().GetOtherPlayer(NewIndex_1).upStavka("0.5");
    SingletonApplication::GetInstance().GetOtherPlayer(NewIndex_2).upStavka("1.0");


    int gamePoleSize = SingletonApplication::GetInstance().GetOtherPlayer().size(); // = 6

    for ( int i =0, k=0; i < gamePoleSize ; i++ )
    {

        int NewPosition = (m_SelectedIndex + i) % gamePoleSize ;

        CActor & pActor = SingletonApplication::GetInstance().GetOtherPlayer(NewPosition);
        pActor.SetStrPointerToPosition(SingletonApplication::GetInstance().ContainerPosition().m_Pos[i].d.c_str());
    }

    //showTable();
#endif
}

void CFormDefaultPlayerAction::ucazatbPositiySELF()
{

    //m_SelectedIndex

    qDebug() << "[" << __FUNCTION__ << "] : m_SelectedIndex=" <<  m_SelectedIndex
             << "я подтверждаю что ВЛАДЕЮ МАРКЕРОМ с индексом "
             << "m_SelectedIndex=" <<  m_SelectedIndex;

    CActor *pActor =  &SingletonApplication::GetInstance().GetOtherPlayer(m_SelectedIndex);

    pActor->setPlayerName( "++++++++++++++" + pActor->PlayerName() + "++++++++++++");


    CActor CloneActor = SingletonApplication::GetInstance().GetCloneOtherPlayer(m_SelectedIndex);
    QString StrPointerToPosition =  SingletonApplication::GetInstance().GetOtherPlayer(m_SelectedIndex).GetStrPointerToPosition();
    SingletonApplication::GetInstance().SetPtrActor(pActor);
    SingletonApplication::GetInstance().GetPtrActor()->SetStrPointerToPosition(StrPointerToPosition );

    CClientNetwork::ClientSay(CloneActor );
    //SingletonServerLogic
}
