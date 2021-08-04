#ifndef BASE_H
#define BASE_H

#include <string>
#include <vector>
#include <assert.h>
#include <qDebug>


#define TEXAS_HOLDEM_PLAYING_CARD 2
#define TEXT_LOG_IN_CLIENT "[На клиенте] : "


enum class ECOMMAND : int
{
    CLIENT_REQ_COMPUTE_HOD  = 1,
};





enum EStatus
{
    NONE,
    STATUS_OK,
    STATUS_ERROR,
    STATUS_FIND,
    STATUS_NOT_FIND,
    STATUS_DBG_MSG,
    STATUS_COUNT
};



enum ER // Rank
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    COUNT
};


enum ESuit
{
    SUIT_HEART_4IRVA,
    SUIT_CLUB_KRESTA,
    SUIT_DIAMOND_BUBA,
    SUIT_SPADE_PIKA,
    SUIT_COUNT
};


class CPlayingCard
{
    /*
        Этот класс эмитирует игровую карту7
    */
public:
    CPlayingCard(){}

    CPlayingCard(ESuit Suit, ER Rank);


    CPlayingCard(int Number, std::string Text);

    ER GetRank();
    ESuit GetSuit ();

    void SetText(std::string Text)
    {
         m_Text = Text;
    }

    std::string GetText( ) const
    {
        return m_Text;
    }

private:
    int m_Number = 0;
    std::string m_Text = "";

    ESuit m_Suit;
    ER m_Rank;
};




 /*
    char chartTable = [
    ["AA", "AKs", "AQs", "AJs", "ATs", "A9s", "A8s", "A7s", "A6s", "A5s", "A4s", "A3s", "A2s"],
    ["AKo", "KK", "KQs", "KJs", "KTs", "K9s", "K8s", "K7s", "K6s", "K5s", "K4s", "K3s", "K2s"],
    ["AQo", "KQo", "QQ", "QJs", "QTs", "Q9s", "Q8s", "Q7s", "Q6s", "Q5s", "Q4s", "Q3s", "Q2s"],
    ["AJo", "KJo", "QJo", "JJ", "JTs", "J9s", "J8s", "J7s", "J6s", "J5s", "J4s", "J3s", "J2s"],
    ["ATo", "KTo", "QTo", "JTo", "TT", "T9s", "T8s", "T7s", "T6s", "T5s", "T4s", "T3s", "T2s"],
    ["A9o", "K9o", "Q9o", "J9o", "T9o", "99", "98s", "97s", "96s", "95s", "94s", "93s", "92s"],
    ["A8o", "K8o", "Q8o", "J8o", "T8o", "98o", "88", "87s", "86s", "85s", "84s", "83s", "82s"],
    ["A7o", "K7o", "Q7o", "J7o", "T7o", "97o", "87o", "77", "76s", "75s", "74s", "73s", "72s"],
    ["A6o", "K6o", "Q6o", "J6o", "T6o", "96o", "86o", "76o", "66", "65s", "64s", "63s", "62s"],
    ["A5o", "K5o", "Q5o", "J5o", "T5o", "95o", "85o", "75o", "65o", "55", "54s", "53s", "52s"],
    ["A4o", "K4o", "Q4o", "J4o", "T4o", "94o", "84o", "74o", "64o", "54o", "44", "43s", "42s"],
    ["A3o", "K3o", "Q3o", "J3o", "T3o", "93o", "83o", "73o", "63o", "53o", "43o", "33", "32s"],
    ["A2o", "K2o", "Q2o", "J2o", "T2o", "92o", "82o", "72o", "62o", "52o", "42o", "32o", "22"]
    ]
    d ромб синий
*/

class CTexasHoldem
{
private:

    ER Parse(char Str)
    {

        if (Str == 'A' )
        {

            return ER::ACE;
        }
        else if  (Str == 'K' )
        {

            return ER::KING;
        }
        else if  (Str == 'Q' )
        {

            return ER::QUEEN;
        }
        else if  (Str == 'J' )
        {

            return ER::JACK;
        }
        else if  (Str == 'T' )
        {

            return ER::TEN;
        }
        else if  (Str == '9' )
        {

            return ER::NINE;
        }
        else if  (Str == '8' )
        {

            return ER::EIGHT;
        }
        else if  (Str == '7' )
        {

            return ER::SEVEN;
        }
        else if  (Str == '6' )
        {

            return ER::SIX;
        }
        else if  (Str == '5' )
        {

            return ER::FIVE;
        }
        else if  (Str == '4' )
        {

            return ER::FOUR;
        }
        else if  (Str == '3' )
        {
            return ER::THREE;
        }
        else if  (Str == '2' )
        {
            return ER::TWO;
        }

    }

public:
    CTexasHoldem( ) {}

    CTexasHoldem(std::string StrTexasHoldem );


    CTexasHoldem(ER First, ER Second, char Type);

    bool IsMath( std::vector<CPlayingCard> PlayingCards);


    ER GetFirst() {
        return m_First;
    }

    ER GetSecond() {
        return m_Second;
    }

public:
    ER m_First  = ER::COUNT;
    ER m_Second = ER::COUNT;
    char m_Type;
};


typedef CPlayingCard PC;
typedef CTexasHoldem TH;


class CActor
{
/* Этот класс Эмитирует человека который нажимает на кноаки в комьютерной игре., и
владеет игровыми объектами
*/
public:
    CActor() {}

    CActor(QString PlayerName, int PlayerIndex)
        : m_PlayerName(PlayerName)
        , m_PlayerIndex(PlayerIndex)
    {

    }

    void upStavka(QString stavkaValueStr);

    void ClearPlayingCards();

    bool IsOkInput();

    void PushBack(const CPlayingCard & PlayingCard);

    std::vector<CPlayingCard> GetPlayingCards();

    int PlayerIndex() const;

    QString PlayerName() const;

   float GetStavka() const;

   void eventClearPlayingCardsForOtherPlayer(int Value);

   bool isEventClearPlayingCardsForOtherPlayer() const;

   QString GetStrPointerToPosition() const;
   void SetStrPointerToPosition(const QString &value);

   void SetFStavka(float fStavka);

   std::string uniquePlayerID() const;
   void setUniquePlayerID(const std::string &uniquePlayerID);

   void setPlayerName(const QString &PlayerName);

private:
   QString m_PlayerName = "";
   int m_PlayerIndex = 0;
   std::vector<CPlayingCard> m_PlayingCards;
    float m_fStavka = 0.0f;
    bool m_bEventClearPlayingCardsForOtherPlayer = false;
    QString  str_PointerToPositio = "cpp_not_init";
       // BB SB..

    std::string m_uniquePlayerID = "";

};



class CBase{
public:
    static size_t GetIndexPlayerActor(std::vector<CActor> OtherActor, CActor Actor);
};


class CServerLogicAnswerData
{
public:

    void SetStatusTable_UTG_SH(bool Value);

    void SetStatusTable_Top20(bool Value);

    EStatus GetStatusTop20() const;
    EStatus GetStatusUTG_SH() const;


    bool IsActionFOLD_For_TAB_UTG_SH() const;
    void SetActionFOLD_For_TAB_UTG_SH(bool bActionFOLD_For_TAB_UTG_SH);

    bool IsAction_FOLD() const;
    void SetAction_FOLD(bool bAction_FOLD);

private:
    EStatus m_Top20 = EStatus::NONE;
    EStatus m_bUTG_SH = EStatus::NONE;
    bool m_bActionFOLD_For_TAB_UTG_SH = false;
    bool m_bAction_FOLD = false;

};

class CGamePosition{
public:
    std::string d;
};



enum class EPos: int
{
    POS_BU = 0
    ,POS_SB // 1
    ,POS_BB // 2
    ,POS_EP // 3
    ,POS_MP // 4
    ,POS_CO //5
};


class CContainerPosition
{
public:
    std::vector <CGamePosition> m_Pos= {
         CGamePosition{"res/BU.PNG"} /* 0 */
        ,CGamePosition{"res/SB.PNG"} /* 1 */
        ,CGamePosition{"res/BB.PNG"} /* 2 */
        ,CGamePosition{"res/EP.PNG"} /* 3 */
        ,CGamePosition{"res/MP.PNG"} /* 4 */
        ,CGamePosition{"res/CO.PNG"} /* 5 */
    };
};

class CSetting{
public:
    std::string  m_ValueStavkaUpAAfterFindPlayerCardInTable = "2.5"; //(QString stavkaUpValue)
};


class CCommonSteepByStepDBGLog{

private:
  CCommonSteepByStepDBGLog() { }
  CCommonSteepByStepDBGLog( const CCommonSteepByStepDBGLog& );
  CCommonSteepByStepDBGLog& operator=( CCommonSteepByStepDBGLog& );

public:
  static CCommonSteepByStepDBGLog& GetInstance()
  {
      static CCommonSteepByStepDBGLog m_STeepByStepDBGLog;
      return m_STeepByStepDBGLog;
  }


    void AppenText(const std::string & Log)
    {
        m_sLog += Log + "\n";
    }


    std::string GetTextLog() const;

private:
    std::string m_sLog;
};

#endif // BASE_H
