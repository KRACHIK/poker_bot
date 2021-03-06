#include "base.h"

#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>



void CActor::upStavka(QString stavkaValueStr)
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    double fVal = std::atof(stavkaValueStr.toStdString().c_str());
    m_fStavka  += (float) fVal ;
}

void CActor::ClearPlayingCards()
{
    qDebug() << "[" << __FUNCTION__ << "] :  before clear. m_PlayingCards.size()=" << m_PlayingCards.size();
    m_PlayingCards.clear();

}

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

int CActor::PlayerIndex() const
{
    return m_PlayerIndex;
}

QString CActor::PlayerName() const
{
    return m_PlayerName;
}

float CActor::GetStavka() const
{
    return m_fStavka ;
}

void CActor::eventClearPlayingCardsForOtherPlayer(int Value)
{
    m_bEventClearPlayingCardsForOtherPlayer =  true ;
}

bool CActor::isEventClearPlayingCardsForOtherPlayer() const
{
    return  m_bEventClearPlayingCardsForOtherPlayer ;
}

QString CActor::GetStrPointerToPosition() const
{
    return str_PointerToPositio;
}

void CActor::SetStrPointerToPosition(const QString &value)
{
    str_PointerToPositio = value;
}

void CActor::SetFStavka(float fStavka)
{
    m_fStavka = fStavka;
}

std::string CActor::uniquePlayerID() const
{
    return m_uniquePlayerID;
}

void CActor::setUniquePlayerID(const std::string &uniquePlayerID)
{
    m_uniquePlayerID = uniquePlayerID;
}

void CActor::setPlayerName(const QString &PlayerName)
{
    m_PlayerName = PlayerName;
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
    ???????????? ???????????????? 2 ???????? ???????? ?????????????? ?????????????? ????????????, ?? 2???? ?????????????? ???? ?????????????????? ??????????????
    ??????????????. ?????????????????????? ???????? ?????????? ?? ?????????? ???? ?????????????? ?? ???????????? ?? ?????????????????? ?????? ?????????????? ???????? ???????????????????? ???????????? ???????????????? ???? ?????????? ????????????????
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

    char PlayingCardsTypes = 'o'; // ???????????????????????? ?????? ?????????? ???????????? ????????????
    if ( PlayingCards[0].GetSuit() == PlayingCards[1].GetSuit() )
    {
        PlayingCardsTypes = 's'; // ?????? ?????? ?????????? ??????????
    }


    if (bMath)
    {
        ER InputFirst = PlayingCards[0].GetRank();
        ER InputSecond= PlayingCards[1].GetRank();

        qDebug() << "[" << __FUNCTION__ << "] : Input [" << InputFirst <<"] [" << InputSecond << "] Math for db "
                 << "  Value ["  << GetFirst() << "," << GetSecond() << "]"
                 << " Type= " << m_Type;

    }

    return bMath;

}

void CServerLogicAnswerData::SetStatusTable_UTG_SH(bool Value)
{
    m_bUTG_SH = Value ? EStatus::STATUS_FIND : EStatus::STATUS_NOT_FIND;
}

void CServerLogicAnswerData::SetStatusTable_Top20(bool Value)
{
    m_Top20 = Value ? EStatus::STATUS_FIND : EStatus::STATUS_NOT_FIND;
}

EStatus CServerLogicAnswerData::GetStatusTop20() const
{
    return m_Top20;
}

EStatus CServerLogicAnswerData::GetStatusUTG_SH() const
{
    return m_bUTG_SH;
}

bool CServerLogicAnswerData::IsActionFOLD_For_TAB_UTG_SH() const
{
    return m_bActionFOLD_For_TAB_UTG_SH;
}

void CServerLogicAnswerData::SetActionFOLD_For_TAB_UTG_SH(bool bActionFOLD_For_TAB_UTG_SH)
{
    m_bActionFOLD_For_TAB_UTG_SH = bActionFOLD_For_TAB_UTG_SH;
}

bool CServerLogicAnswerData::IsAction_FOLD() const
{
    return m_bAction_FOLD;
}

void CServerLogicAnswerData::SetAction_FOLD(bool bAction_FOLD)
{
    m_bAction_FOLD = bAction_FOLD;
}

std::string CCommonSteepByStepDBGLog::GetTextLog() const
{
    return m_sLog;
}

size_t CBase::GetIndexPlayerActor(std::vector<CActor> OtherActor, CActor Actor)
{
    if (Actor.uniquePlayerID().empty())
    {
        //"TODO error";
assert(false);
        return -1;
    }

    for (size_t i=0; i<OtherActor.size(); i++)
    {
        if (OtherActor[i].uniquePlayerID().empty())
        {
            // TODO not init
            assert(false);
            return -1;
        }

        if (OtherActor[i].uniquePlayerID() == Actor.uniquePlayerID())
        {
            return i;
        }
    }

    assert(false);
    return -1;
}
