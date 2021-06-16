#ifndef CTABLECARDS_H
#define CTABLECARDS_H

#include "base/base.h"
#include <vector>


class CTable_BB_ISO
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =
    {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s")
        , TH("A7s"), TH("A6s"), TH("A5s")
        , TH("A4s"), TH("A3s"), TH("A2s"), TH("AKo"), TH("KK"), TH("KQs")
        , TH("KJs"), TH("KTs"), TH("AQo")
        , TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs")
        , TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("ATo"), TH("KTo"), TH("TT"), TH("A9o")
        , TH("99"), TH("88"), TH("77")
    };
};


class CTable_start
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =
    {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs")
        , TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs")
        , TH("QQ"), TH("QJs"), TH("QTs")
        , TH("JJ")
        , TH("TT")
        , TH("99")
        , TH("88")
        , TH("77")
        , TH("66")
    };
};


class CTable_MP
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =
    {
         TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s")
        ,TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s")
        ,TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s")
        ,TH("AJo"), TH("KJo"), TH("JJ"), TH("JTs"), TH("J9s")
        ,TH("ATo"), TH("TT"), TH("T9s")
        ,TH("99")
        ,TH("88")
        ,TH("77")
        ,TH("66")
    };
};

class CTable_CO
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =
    {
         TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s")
        ,TH("A4s"), TH("A3s"), TH("A2s")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s"), TH("K6s"), TH("K5s")
        ,TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"), TH("Q8s")
        ,TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("J9s"), TH("J8s")
        ,TH("ATo"),  TH("TT"), TH("T9s"), TH("T8")
        ,TH("99"), TH("98s")
        ,TH("88")
        ,TH("77")
        ,TH("66")
        ,TH("55")
        ,TH("44")
    };
};




class CTable_BU_OPEN
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =   {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s"), TH("K6s"), TH("K5s"), TH("K4s"), TH("K3s"), TH("K2s")
        ,TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"), TH("Q8s"), TH("Q7s"), TH("Q6s"), TH("Q5s"), TH("Q4s")
        ,TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("J9s"), TH("J8s"), TH("J7s"), TH("J6s"), TH("J5s")
        ,TH("ATo"), TH("KTo"), TH("QTo"), TH("JTo"), TH("TT"), TH("T9s"), TH("T8s")
        ,TH("A9o"), TH("K9o"), TH("Q9o"), TH("J9o"), TH("T9o"), TH("99"), TH("98s"), TH("97s")
        ,TH("A8o"), TH("K8o"), TH("88"), TH("87s"), TH("86s")
        ,TH("A7o"), TH("77"), TH("76s"), TH("75s")
        ,TH("A6o"), TH("66"), TH("65s")
        ,TH("A5o"), TH("55"), TH("54s")
        ,TH("44"), TH("43s")
        ,TH("33")
        ,TH("22")
    };
};

class CTable_SB_OPEN
{
public:

    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =   {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s"), TH("K6s"), TH("K5s"), TH("K4s"), TH("K3s"), TH("K2s")
        ,TH("AQo"), TH("KQo"),TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"), TH("Q8s"), TH("Q7s"), TH("Q6s"), TH("Q5s"), TH("Q4s")
        ,TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("J9s"), TH("J8s"), TH("J7s"), TH("J6s"), TH("J5s")
        ,TH("ATo"), TH("KTo"), TH("QTo"), TH("JTo"), TH("TT"), TH("T9s"), TH("T8s"), TH("T7s")
        ,TH("A9o"), TH("K9o"), TH("99"), TH("98s"), TH("97s")
        ,TH("A8o"), TH("88"), TH("87s"), TH("86s")
        ,TH("A7o"), TH("77"), TH("76s"), TH("75s")
        ,TH("A6o"), TH("66"), TH("65s")
        ,TH("A5o"), TH("55"), TH("54s")
        ,TH("44")
        ,TH("33")
        ,TH("22")
    };
};



class CTable_vs_3b_UTG_FR
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =   {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"),
        TH("AKo"), TH("KK"), TH("KQs"),
        TH("QQ"),
        TH("JJ"),
        TH("TT"),
        TH("99"),
    };
};

class  CTables_vs_3b_MP
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =   {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs")
        ,TH("AQo"), TH("QQ"), TH("QJs"), TH("QTs")
        ,TH("JJ")
        ,TH("TT")
        ,TH("99")
        ,TH("88")
    };
};


class  CTables_vs_3b_CO
{
public:
    std::vector<CTexasHoldem> Tables() const;
private:

    std::vector <CTexasHoldem>  m_Tables =   {
    TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")
    ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s")
    ,TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs")
    ,TH("JJ"), TH("JTs")
    ,TH("TT"), TH("T9s")
    ,TH("99")
    ,TH("88")
    ,TH("77")
    };
};




class CTables_vs_3b_BU
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s"), TH("K6s"), TH("K5s"), TH("K4s")
        ,TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s")
        ,TH("AJo"), TH("JJ"), TH("JTs"), TH("J9s")
        ,TH("ATo"), TH("TT"), TH("T9s")
        ,TH("99"), TH("98s")
        ,TH("88"), TH("87s")
        ,TH("77"), TH("76s")
        ,TH("66"), TH("65s")
        ,TH("55")
        ,TH("44")
        ,TH("33")
        ,TH("22")
    };
};

class CTables_vs_3b_SB
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
         TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s")
        ,TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s")
        ,TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs")
        ,TH("AJo"), TH("JJ"), TH("JTs")
        ,TH("ATo"), TH("TT"), TH("T9s")
        ,TH("99"), TH("98s")
        ,TH("88"), TH("87s")
        ,TH("77"), TH("76s")
        ,TH("66"), TH("65s")
        ,TH("55")
        ,TH("44")
        ,TH("33")
        ,TH("22")

    };
};


class CTables_vs_UTG_FR
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {

        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"),
        TH("QQ"), TH("QJs"), TH("QTs"),
        TH("JJ"), TH("JTs"),
        TH("TT"), TH("T9s"),
        TH("99"), TH("98s"),
        TH("88"), TH("87s"),
        TH("77"),
        TH("66"),
        TH("55"),
        TH("44"),
        TH("33"),
        TH("22")

    };
};


class CTables_vs_UTG
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A5s"), TH("А4s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"),
        TH("AQo"), TH("QQ"), TH("QJs"), TH("QTs"),
        TH("JJ"), TH("JTs"),
        TH("TT"),
        TH("99"),
        TH("88"),
        TH("77"),
    };
};




class CTables_vs_MP
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A5s"), TH("A4s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"),
        TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"),
        TH("AJo"), TH("JJ"), TH("JTs"),
        TH("TT"),
        TH("99"),
        TH("88"),
        TH("77")
    };
};


class CTables_vs_CO
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"),
        TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"),
        TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("J9s"),
        TH("ATo"), TH("TT"), TH("T9s"),
        TH("99"),
        TH("88"),
        TH("77"),
        TH("66")
    };
};

class CTables_SB_vs_UTGFR
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"),
        TH("AQo"), TH("QQ"), TH("QJs"), TH("QTs"),
        TH("JJ"), TH("JTs"),
        TH("TT"), TH("T9s"),
        TH("99"), TH("98s"),
        TH("88"), TH("87s"),
        TH("77"),
        TH("66"),
        TH("55"),
        TH("44"),
        TH("33"),
        TH("22")

    };
};


class CTables_SB_vs_UTG17
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"),
        TH("QQ"), TH("QJs"),
        TH("JJ"),
        TH("TT"),
    };
};



class CTables_SB_vs_MP20
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"),
        TH("QQ"), TH("QJs"),
        TH("JJ"),
        TH("TT"),
        TH("99"),
    };
};


class CTables_SB_vs_CO27
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A5s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"),
        TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"),
        TH("JJ"), TH("JTs"),
        TH("TT"),
        TH("99"),
        TH("88")
    };
};





class CTables_SB_vs_BU45 {
public:
   std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A5s"), TH("A4s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"),
        TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"),
        TH("AJo"), TH("KJo"), TH("QJo"), TH("JJ"), TH("JTs"), TH("J9s"),
        TH("ATo"), TH("TT"), TH("T9s"),
        TH("99"),
        TH("88"),
        TH("77"),
        TH("66"),
        TH("55")

    };
};








class CTables_vs4B_UTGFR {
public:


    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"),
        TH("AKo"), TH("KK"),
        TH("QQ")

    };
};









class CTables_vs4B_UTG
{
public:


    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"),
        TH("AKo"), TH("KK"),
        TH("QQ"),
        TH("JJ"),
    };
};






#endif // CTABLECARDS_H
