#include "input.h"

#include <SingletonApplication.h>
#include "base/base.h"

CInput::CInput(QObject* parent) : QObject(parent)
{
}

void CInput::receiveFromQml(QString ButtonCode)
{
    qDebug() << "[" << __FUNCTION__ << "] : "<< ButtonCode;

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
        SingletonApplication::GetInstance().GetPlayerActor().PushBack(PlayingCard);
    }


    // Увеличиваем счётчик и высылаем сигнал с его значением
    ++m_counter;
    emit sendToQml(m_counter);
}

void CInput::clearPlayingCards()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    SingletonApplication::GetInstance().Clear();

}

void CInput::confirm()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";
    SingletonApplication::GetInstance().Send();
}

void CInput::selectedIndex(int index)
{
    qDebug() << "[" << __FUNCTION__ << "] : " << index;


    //showTable();
}

void CInput::setPositions(int Index)
{
    qDebug() << "[" << __FUNCTION__ << "] : " << Index;
    SingletonApplication::GetInstance();
}

void CInput::confiirmInit(int Index, QString Name)
{
    qDebug() << "[" << __FUNCTION__ << "] : " << Index << " Name: " << Name;
    SingletonApplication::GetInstance().InsertNewPlayer(Index, Name);
}

void CInput::initEnd()
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;
    SingletonApplication::GetInstance().Send();

}

void CInput::dbg()
{
    qDebug() << "[" << __FUNCTION__ << "] : " ;
    emit addLinesToTable(
                 1
                ,1
                ,1
                , "RR"
                ," 10$"
                ," 3Sec"
                ," IMG_BB.PNG"
                ," IMG_WOOD.png"
                );

    emit addLinesToTable(
                 1
                ,1
                ,1
                ,    "NIK"
                ," 30$"
                ," 11Sec"
                ," IMG_BB.PNG"
                ," IMG_WOOD.png"
                );


}

void CInput::showTable()
{
    emit clearTable();
    for ( CActor it  :  SingletonApplication::GetInstance().GetOtherPlayer()  )
    {
        int     int_INDEX                                    = it.PlayerIndex() ;
        int     int_VISIBILITY_PUSHBUTTON_SBROW_MAPS         = 0 ;
        int     int_VISIBILITY_BUTTONS_INCREASE_BID          = 0 ;
        QString str_PLAYR_NAME                               = it.PlayerName() ;
        QString str_STAVKA                                   = "CPP_STAVKA_NOT_INIT" ;
        QString str_TIME_STEP                                ="CPP_NOT_INIT";
        QString str_ID_IMG_MARKER_1                          ="CPP_Not_INIT" ;
        QString str_ID_IMG_MARKER_2                          ="CPP_Not_INIT" ;

        emit  addLinesToTable(
                    int_INDEX
                    ,int_VISIBILITY_PUSHBUTTON_SBROW_MAPS
                    ,int_VISIBILITY_BUTTONS_INCREASE_BID
                    ,str_PLAYR_NAME
                    ,str_STAVKA
                    ,str_TIME_STEP
                    ,str_ID_IMG_MARKER_1
                    ,str_ID_IMG_MARKER_2
                    );

    }

}

void CInput::updateGUI()
{
    showTable();
}
