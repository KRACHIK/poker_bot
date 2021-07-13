#include "form_cheat_server_action.h"

#include <SingletonApplication.h>
#include "network/adapter.h"
#include <server/network.h>

void CFormCheatServerAction::upStavkaForThisPlayer(int index, QString stavkaValueStr)
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;
    SingletonApplication::GetInstance().GetOtherPlayer(index).upStavka(stavkaValueStr);

    SingletonApplication::GetInstance().Send();
}

void CFormCheatServerAction::confirm()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    SingletonApplication::GetInstance().Send();




}

void CFormCheatServerAction::compute_hod()
{
     qDebug() << "[" << __FUNCTION__ << "] : ";

     CServerNetwork  networkObj;

     networkObj.ClientSay(SingletonApplication::GetInstance().GetOtherPlayer(), ECOMMAND::CLIENT_REQ_COMPUTE_HOD);

}
void CFormCheatServerAction::clearPlayingCards()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    SingletonApplication::GetInstance().Clear();
    // kr4 renderSelfCard();
}
