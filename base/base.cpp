#include "base.h"

#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>



bool CActor::IsOkInput()
{
    if ( GetPlayingCards().size() == TEXAS_HOLDEM_PLAYING_CARD  )
    {
        qDebug() << "[" << __FUNCTION__ << "] : Ok";
        return true;
    }

    return false;
}

void CActor::PushBack(const CPlayingCard &PlayingCard)
{
    m_PlayingCards.push_back(PlayingCard);
}

std::vector<CPlayingCard> CActor::GetPlayingCards()
{
    return m_PlayingCards;
}

CPlayingCard::CPlayingCard(ESuit Suit, ER Rank)
    : m_Number ( 0)
    , m_Text  ( "")
    , m_Suit (Suit)
    , m_Rank (Rank)
{

}

CPlayingCard::CPlayingCard(int Number, std::string Text)
    : m_Number (Number), m_Text(Text )
{
    assert(false); // todo init other dim
}

ER CPlayingCard::GetRank()
{
    return m_Rank;
}

ESuit CPlayingCard::GetSuit()
{
    return m_Suit;
}

CTexasHoldem::CTexasHoldem(std::string StrTexasHoldem)
{

    if (StrTexasHoldem.size() == 2)
    {
        m_First = Parse(StrTexasHoldem[0]);
        m_Second = Parse(StrTexasHoldem[1]);
        m_Type = '0';
    }
    else if (StrTexasHoldem.size() == 3)
    {
        m_First = Parse(StrTexasHoldem[0]);
        m_Second = Parse(StrTexasHoldem[1]);
        m_Type = StrTexasHoldem[2];
    }
    else
    {
        m_First = ER::COUNT;
        m_Second = ER::COUNT;
        m_Type = 0;
    }

}

CTexasHoldem::CTexasHoldem(ER First, ER Second, char Type)
    : m_First(First)
    , m_Second(Second)
    , m_Type(Type)
{

}

bool CTexasHoldem::IsMath(std::vector<CPlayingCard> PlayingCards)
{
/*
    Задача сравнить 2 пары карт которые раздали игроку, с 2мя картами из эталонной таблицы
    Решение. записавывем свои карты и карты из таблицы в вектор и сортируем оба вектора зате сравниваем попаро элементы из обоих векторов
*/

    if (PlayingCards.size() != TEXAS_HOLDEM_PLAYING_CARD)
    {
        qDebug() << "[" << __FUNCTION__ << "] : Critical Error.";
        assert(false);
        return false;
    }


    std::vector<CPlayingCard> TableEtalonCards = { CPlayingCard (  ESuit::SUIT_HEART_4IRVA,  GetFirst()  ),
                                                   CPlayingCard (  ESuit::SUIT_HEART_4IRVA,  GetSecond() ),
                                                 };


    std::sort(PlayingCards.begin(), PlayingCards.end(),
        []( CPlayingCard   a,  CPlayingCard  b) -> bool
    {
        return a.GetRank() < b.GetRank();
    });


    std::sort(TableEtalonCards.begin(), TableEtalonCards.end(),
        []( CPlayingCard   a,  CPlayingCard  b) -> bool
    {
        return a.GetRank() < b.GetRank();
    });


    bool bMath = true;
    for(size_t i = 0; i < PlayingCards.size(); i++ )
    {

        if (PlayingCards[i].GetRank() == TableEtalonCards[i].GetRank() )
        {
            // noting
        }
        else
        {
            bMath = false;
            break;
            // Ahtung
        }

    }

    char PlayingCardsTypes = 'o'; // предпалагаем что карты разных мастей
    if ( PlayingCards[0].GetSuit() == PlayingCards[1].GetSuit() )
    {
        PlayingCardsTypes = 's'; // нет они одной масти
    }

    ER InputFirst = PlayingCards[0].GetRank();
    ER InputSecond= PlayingCards[1].GetRank();

    if (bMath)
    {

        if (PlayingCardsTypes == m_Type)
        {
            qDebug() << "[" << __FUNCTION__ << "] : Input [" << InputFirst <<"] [" << InputSecond << "] Math for db "
                     << "  Value ["  << GetFirst() << "," << GetSecond() << "]"
                     << " Type= " << m_Type;
        }
        else
        {
            bMath = false;
        }
    }

    return bMath;

}
