#ifndef TOP_20_STARTING_HANDS_H
#define TOP_20_STARTING_HANDS_H

#include "base/base.h"

#include <vector>



typedef CPlayingCard PC;
typedef CTexasHoldem TH;


class CTableTop20StartingHands
{
public:
    CTableTop20StartingHands()
    {
        CTexasHoldem tr (ER::ACE, ER::ACE, 'c');

        TH t(ER::ACE, ER::ACE, 'c');
    }

    void GetStatus( CActor &  Actor );

private:
    std::vector<std::vector <CTexasHoldem> > m_Tables =
    {
         /*             0          1         2          3          4          5          6         7           8        9           10        11          12   */
        /* 0  */ { TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")},
        /* 1  */ { TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s"), TH("K6s"), TH("K5s"), TH("K4s"), TH("K3s"), TH("K2s")},
        /* 2  */ { TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"), TH("Q8s"), TH("Q7s"), TH("Q6s"), TH("Q5s"), TH("Q4s"), TH("Q3s"), TH("Q2s")},
        /* 3  */ { TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("J9s"), TH("J8s"), TH("J7s"), TH("J6s"), TH("J5s"), TH("J4s"), TH("J3s"), TH("J2s")},
        /* 4  */ { TH("ATo"), TH("KTo"), TH("QTo"), TH("JTo"), TH("TT"), TH("T9s"), TH("T8s"), TH("T7s"), TH("T6s"), TH("T5s"), TH("T4s"), TH("T3s"), TH("T2s")},
        /* 5  */ { TH("A9o"), TH("K9o"), TH("Q9o"), TH("J9o"), TH("T9o"), TH("99"), TH("98s"), TH("97s"), TH("96s"), TH("95s"), TH("94s"), TH("93s"), TH("92s")},
        /* 6  */ { TH("A8o"), TH("K8o"), TH("Q8o"), TH("J8o"), TH("T8o"), TH("98o"), TH("88"), TH("87s"), TH("86s"), TH("85s"), TH("84s"), TH("83s"), TH("82s")},
        /* 7  */ { TH("A7o"), TH("K7o"), TH("Q7o"), TH("J7o"), TH("T7o"), TH("97o"), TH("87o"), TH("77"), TH("76s"), TH("75s"), TH("74s"), TH("73s"), TH("72s")},
        /* 8  */ { TH("A6o"), TH("K6o"), TH("Q6o"), TH("J6o"), TH("T6o"), TH("96o"), TH("86o"), TH("76o"), TH("66"), TH("65s"), TH("64s"), TH("63s"), TH("62s")},
        /* 9  */ { TH("A5o"), TH("K5o"), TH("Q5o"), TH("J5o"), TH("T5o"), TH("95o"), TH("85o"), TH("75o"), TH("65o"), TH("55"), TH("54s"), TH("53s"), TH("52s")},
        /* 10 */ { TH("A4o"), TH("K4o"), TH("Q4o"), TH("J4o"), TH("T4o"), TH("94o"), TH("84o"), TH("74o"), TH("64o"), TH("54o"), TH("44"), TH("43s"), TH("42s")},
        /* 11 */ { TH("A3o"), TH("K3o"), TH("Q3o"), TH("J3o"), TH("T3o"), TH("93o"), TH("83o"), TH("73o"), TH("63o"), TH("53o"), TH("43o"), TH("33"), TH("32s")},
        /* 12 */ { TH("A2o"), TH("K2o"), TH("Q2o"), TH("J2o"), TH("T2o"), TH("92o"), TH("82o"), TH("72o"), TH("62o"), TH("52o"), TH("42o"), TH("32o"), TH("22")}
    };
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






#endif // TOP_20_STARTING_HANDS_H
