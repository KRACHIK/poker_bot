#ifndef LOGIC_H
#define LOGIC_H




#include <QObject>
#include <QDebug>

#include "base/base.h"
#include "table_utg_sh.h"
#include "tablecards.h"
#include "top_20_starting_hands.h"

#include <vector>



class SingletonServerLogic
{
/*
    Статический класс который имеет доступ ко всему и отовсюду
*/
  private:
    SingletonServerLogic() { }
    SingletonServerLogic( const SingletonServerLogic& );
    SingletonServerLogic& operator=( SingletonServerLogic& );

public:
    static SingletonServerLogic& GetInstance();

    void Tick();

    //CActor & GetPlayerActor();

    void SetPlayerActor(CActor Actor);
    void SetOtherPlayer(std::vector<CActor> OtherPlayers);

private:
    CActor m_Actor;
    CTableTop20StartingHands m_TableTop20StartingHands;
    //CTable_UTG_SH            m_Table_UTG_SH;
    CTable_BB_ISO            m_Table_BB_ISO;
    CTable_start             m_Table_start;
    CTable_MP                m_Table_MP;
    CTable_CO                m_Table_CO;
    CTable_BU_OPEN           m_Table_BU_OPEN;
    CTable_SB_OPEN           m_Table_SB_OPEN;
    CTable_vs_3b_UTG_FR      m_Table_vs_3b_UTG_FR;
    CTables_vs_3b_MP         m_Tables_vs_3b_MP;
    CTables_vs_3b_SB         m_Tables_vs_3b_SB;
    CTables_vs_UTG_FR        m_Tables_vs_UTG_FR;
    CTables_vs_UTG           m_Tables_vs_UTG;
    CTables_vs_MP            m_Tables_vs_MP;
    CTables_vs_CO            m_Tables_vs_CO;
    CTables_SB_vs_UTGFR      m_Tables_SB_vs_UTGFR;
    CTables_SB_vs_UTG17      m_Tables_SB_vs_UTG17;
    CTables_SB_vs_MP20       m_Tables_SB_vs_MP20;
    CTables_SB_vs_CO27       m_Tables_SB_vs_CO27;
    CTables_SB_vs_BU45       m_Tables_SB_vs_BU45;
    CTables_vs4B_UTGFR       m_Tables_vs4B_UTGFR;
    CTables_vs4B_UTG         m_Tables_vs4B_UTG;

    std::vector<CActor>      m_OtherPlayers;
};


class CFindPlayingCards
{
public:
static bool GetStatus(std::vector<std::vector <CTexasHoldem>> Tables, CActor &Actor);
static bool GetStatus(std::vector <CTexasHoldem> Tables, CActor &Actor);
};


/*
class CFirstTable {
public:
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
    s крест зеленный

    k пики черные
    h красное сердечко
};
*/


#endif // LOGIC_H
