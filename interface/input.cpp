#include "input.h"

#include <SingletonApplication.h>
#include "base/base.h"

#include <iostream>


CInput::CInput(QObject* parent) : QObject(parent)
{
}



void CInput::receiveFromQml(QString ButtonCode)
{
    qDebug() << "[" << __FUNCTION__ << "] : "<< ButtonCode;



    CCommonSteepByStepDBGLog::GetInstance().AppenText( TEXT_LOG_IN_CLIENT "Польззователь указал пальцем на свои карты: " + ButtonCode.toStdString());

    qDebug() << "[" << __FUNCTION__ << "] : "<< CCommonSteepByStepDBGLog::GetInstance().GetTextLog().c_str();

    {
        CPlayingCard PlayingCard; //(1,"10b");
        if(ButtonCode == "10b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::TEN);
        }
        else if(ButtonCode == "10c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA, ER::TEN);
        }
        else if(ButtonCode == "10k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::TEN);
        }
        else if(ButtonCode == "10p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::TEN);
        }
        else if(ButtonCode == "2b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::TWO);
        }
        else if(ButtonCode == "2c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA, ER::TWO);
        }
        else if(ButtonCode == "2k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::TWO);
        }
        else if(ButtonCode == "2p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::TWO);
        }
        else if(ButtonCode == "3c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA, ER::THREE);
        }
        else if(ButtonCode == "3k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::THREE);
        }
        else if(ButtonCode == "3p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::THREE);
        }
        else if(ButtonCode == "3b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::THREE);
        }
        else if(ButtonCode == "4b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::FOUR);
        }
        else if(ButtonCode == "4c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA, ER::FOUR);
        }
        else if(ButtonCode == "4k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::FOUR );
        }
        else if(ButtonCode == "4p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::FOUR);
        }
        else if(ButtonCode == "5b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::FIVE);
        }
        else if(ButtonCode == "5c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA, ER::FIVE);
        }
        else if(ButtonCode == "5k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::FIVE);
        }
        else if(ButtonCode == "5p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::FIVE);
        }
        else if(ButtonCode == "6b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::SIX);
        }
        else if(ButtonCode == "6c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA, ER::SIX);
        }
        else if(ButtonCode == "6k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::SIX);
        }
        else if(ButtonCode == "6p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::SIX);
        }
        else if(ButtonCode == "7b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::SEVEN);
        }
        else if(ButtonCode == "7c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::SEVEN );
        }
        else if(ButtonCode == "7k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA, ER::SEVEN );
        }
        else if(ButtonCode == "7p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::SEVEN );
        }
        else if(ButtonCode == "8b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA, ER::EIGHT);
        }
        else if(ButtonCode == "8c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA , ER::EIGHT);
        }
        else if(ButtonCode == "8k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA , ER::EIGHT);
        }
        else if(ButtonCode == "8p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::EIGHT);
        }
        else if(ButtonCode == "9b")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA , ER::NINE);
        }
        else if(ButtonCode == "9c")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA , ER::NINE);
        }
        else if(ButtonCode == "9k")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA , ER::NINE);
        }
        else if(ButtonCode == "9p")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::NINE);
        }
        else if(ButtonCode == "ab")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA , ER::ACE);
        }
        else if(ButtonCode == "ac")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA , ER::ACE);
        }
        else if(ButtonCode == "ak")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA , ER::ACE);
        }
        else if(ButtonCode == "ap")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::ACE);
        }
        else if(ButtonCode == "jb")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA , ER::JACK);
        }
        else if(ButtonCode == "jp")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::JACK);
        }
        else if(ButtonCode == "jc")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA , ER::JACK);
        }
        else if(ButtonCode == "jk")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA , ER::JACK);
        }
        else if(ButtonCode == "kb")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA , ER::KING);
        }
        else if(ButtonCode == "kc")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA , ER::KING);
        }
        else if(ButtonCode == "kk")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA , ER::KING);
        }
        else if(ButtonCode == "kp")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA , ER::KING);
        }
        else if(ButtonCode == "joker_black")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::TWO);
            assert(false);
        }
        else if(ButtonCode == "joker_red")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::TWO);
            assert(false);
        }
        else if(ButtonCode == "romb_blue")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::TWO);
            assert(false);
        }
        else if(ButtonCode == "qb")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_DIAMOND_BUBA , ER::QUEEN);
        }
        else if(ButtonCode == "qc")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_HEART_4IRVA , ER::QUEEN);
        }
        else if(ButtonCode == "qk")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_CLUB_KRESTA , ER::QUEEN);
        }
        else if(ButtonCode == "qp")
        {
            PlayingCard = CPlayingCard(ESuit::SUIT_SPADE_PIKA, ER::QUEEN);
        }
        else
        {
            assert(false);
        }

        std::string Path = std::string("res/") +  std::string(ButtonCode.toStdString()) + std::string(".PNG");
        PlayingCard.SetText(Path);



        SingletonApplication::GetInstance().GetPtrActor()->PushBack(PlayingCard);
    }


    //kr4 renderSelfCard();
}

#if 0




void CInput::renderSelfCard()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    std::vector<CPlayingCard> PlayingCard = SingletonApplication::GetInstance().GetPtrActor()->GetPlayingCards();

    if (PlayingCard.size() == 1)
    {
        std::string Path = PlayingCard[0].GetText();
        emit  setIndicatorFirstPlayerCard  (Path.c_str());


    }
    else if (PlayingCard.size() == 2)
    {
        std::string Path2 = PlayingCard[1].GetText();
        emit setIndicatorSecondPlayerCard (Path2.c_str());
    }
    else
    {
        emit setIndicatorFirstPlayerCard  ("");
        emit setIndicatorSecondPlayerCard ( "" );
    }
}


void CInput::setPositions(int Index)
{
    qDebug() << "[" << __FUNCTION__ << "] : " << Index;
    SingletonApplication::GetInstance();
}

void CInput::initEnd()
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;
    SingletonApplication::GetInstance().Send();

}

void CInput::dbg()
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;

}



}

void CInput::updateGUI()
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;
    showTable();
}

void CInput::clearStavkaForAllPlayer(){
    qDebug() << "[" << __FUNCTION__ << "] : m_SelectedIndex=" <<  m_SelectedIndex;

    int gamePoleSize = SingletonApplication::GetInstance().GetOtherPlayer().size(); // = 6

    for ( int i =0, k=0; i < gamePoleSize ; i++ )
    {
        SingletonApplication::GetInstance().GetOtherPlayer(i).SetFStavka(0.0);
    }

    showTable();
}

void CInput::endGame()
{

#if 0
    qDebug() << "[" << __FUNCTION__ << "] : " ;
   ucazatbPositiyiStop();
   clearStavkaForAllPlayer();
   ucazatbPositiyiStop();
#endif
}

void CInput::clearPlayingCardsForThisPlayer(int index)
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;
    SingletonApplication::GetInstance().GetOtherPlayer(index).ClearPlayingCards();
    SingletonApplication::GetInstance().GetOtherPlayer(index).eventClearPlayingCardsForOtherPlayer(/*true*/1) ;
    SingletonApplication::GetInstance().Send();
}



void CInput::setValueStavkaUpAAfterFindPlayerCardInTable(QString stavkaUpValue)
{
    SingletonApplication::GetInstance().GetPtrSetting().m_ValueStavkaUpAAfterFindPlayerCardInTable = stavkaUpValue.toStdString();
}

void CRenderInfo::dbg()
{
    std::string s = std::to_string( rand()%1000 );
    emit tara(s.c_str());
}


#endif

void CRenderInfo::updateForm(){
    showTable();
}

void CRenderInfo::showTable()
{
#if 1
    emit clearTable();
    for ( CActor it  :  SingletonApplication::GetInstance().GetOtherPlayer()  )
    {
        int     int_INDEX                                    = it.PlayerIndex() ;
        int     int_VISIBILITY_PUSHBUTTON_SBROW_MAPS         = 0 ;
        int     int_VISIBILITY_BUTTONS_INCREASE_BID          = 0 ;
        QString str_PLAYR_NAME                               = it.PlayerName() ;
        QString str_STAVKA                                   = "STAVKA: " + QString ( std::to_string(it.GetStavka()).c_str() ) ;
        float floatStavka                                    = it.GetStavka();

        QString str_text_status_STAVKA                                = "Not init";
        if (it.isEventClearPlayingCardsForOtherPlayer())
        {
            str_text_status_STAVKA = "PLAYER CARDS: FOOLD" ;
        }
        else
        {
            str_text_status_STAVKA = "Карты держит на руках";
        }

        QString str_ID_IMG_MARKER_1 = "CPP_Not_INIT"  ;
        QString str_ID_IMG_MARKER_2 =  it.GetStrPointerToPosition(); // TODO rename png



        emit addLinesToTable(
                    int_INDEX
                    ,int_VISIBILITY_PUSHBUTTON_SBROW_MAPS
                    ,int_VISIBILITY_BUTTONS_INCREASE_BID
                    ,str_PLAYR_NAME
                    ,str_STAVKA
                    ,str_text_status_STAVKA
                    ,str_ID_IMG_MARKER_1
                    ,str_ID_IMG_MARKER_2
                    , "1" //std::to_string( floatStavka ).c_str()
                    );

    }
 #endif
}
