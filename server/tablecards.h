#ifndef CTABLECARDS_H
#define CTABLECARDS_H

#include "base/base.h"
#include <vector>

#include <memory>

class ITable
{
public:
    virtual std::vector <CTexasHoldem> Operation() const = 0;

    virtual std::string GetTableName() const = 0;
};


class CTable_BU_OPEN : public ITable
{
public:
    std::vector<CTexasHoldem> Tables() const;

    std::vector <CTexasHoldem> Operation() const override {
      return m_Tables;
    }

    std::string GetTableName() const override {
      return "CTable_BU_OPEN";
    }
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

class CTable_SB_OPEN : public ITable
{
public:

    std::vector<CTexasHoldem> Tables() const;

    std::vector <CTexasHoldem> Operation() const override {
      return m_Tables;
    }
    std::string GetTableName() const override {
      return "CTable_SB_OPEN";
    }


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

class CTable_MP_OPEN : public ITable
{
public:
    std::vector <CTexasHoldem> Operation() const override {
      return m_Tables;
    }

    std::string GetTableName() const override {
      return "CTable_MP_OPEN";
    }


private:
    std::vector <CTexasHoldem> m_Tables = {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"),
        TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"),
        TH("AJo"), TH("KJo"), TH("JJ"), TH("JTs"), TH("J9s"),
        TH("ATo"), TH("TT"), TH("T9s"),
        TH("99"),
        TH("88"),
        TH("77"),
        TH("66"),
    };
};

class CTable_CO_OPEN : public ITable
{
public:
    std::vector <CTexasHoldem> Operation() const override {
      return m_Tables;
    }


    std::string GetTableName() const override {
      return "CTable_CO_OPEN";
    }
private:
    std::vector <CTexasHoldem> m_Tables = {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("A6s"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"), TH("K8s"), TH("K7s"), TH("K6s"), TH("K5s"),
        TH("AQo"), TH("KQo"), TH("QQ"), TH("QJs"), TH("QTs"), TH("Q9s"), TH("Q8s"),
        TH("AJo"), TH("KJo"), TH("QJo"),TH("JJ"), TH("JTs"), TH("J9s"), TH("J8s"),
        TH("ATo"), TH("TT"), TH("T9s"), TH("T8"),
        TH("99"), TH("98s"),
        TH("88"),
        TH("77"),
        TH("66"),
        TH("55"),
        TH("44"),
    };
};

class CTable_BB_ISO : public ITable
{
public:
    std::vector<CTexasHoldem> Tables() const;

    std::vector <CTexasHoldem> Operation() const override {
      return m_Tables;
    }


    std::string GetTableName() const override {
      return "CTable_BB_ISO";
    }
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

class CTable_UTG_SH : public ITable
{
public:


    std::vector <CTexasHoldem> Operation() const override {
      return m_Tables;
    }


    std::string GetTableName() const override {
      return "CTable_UTG_SH";
    }

private:
    std::vector <CTexasHoldem>  m_Tables =
    {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"), TH("A9s"), TH("A8s"), TH("A7s"), TH("А5s"),
        TH("AKo"), TH("KK"), TH("KQs"), TH("KJs"), TH("KTs"), TH("K9s"),
        TH("AQo"), TH("QQ"), TH("QJs"), TH("QTs"),
        TH("AJo"), TH("JJ"), TH("JTs"),
        TH("TT"),
        TH("99"),
        TH("88"),
        TH("77")
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


class CTables_vs_4b_BB_vs_MP
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"),
        TH("AKo"), TH("KK"),
        TH("QQ"),
        TH("JJ")
    };
};


class CTables_4b_BB_vsCO
{
public:


    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {

        TH("AA"), TH("AKs"), TH("AQs"),
        TH("AKo"), TH("KK"),
        TH("QQ"),
        TH("JJ"),
        TH("TT")
    };
};


class CTables_vs_4B_BB_vs_BU
{
public:
    std::vector<CTexasHoldem> Tables() const;

private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("ATs"),
        TH("AKo"), TH("KK"), TH("KQs"),
        TH("AQo"), TH("QQ"),
        TH("JJ"),
        TH("TT"),
        TH("99"),
        TH("88")
    };
};


class CTables_vs4b_BB_vs_SB
{
public:


private:
    std::vector <CTexasHoldem>  m_Tables =  {
        TH("AA"), TH("AKs"), TH("AQs"), TH("AJs"), TH("A5s"), TH("A4s"), TH("A3s"), TH("A2s"),
        TH("AKo"), TH("KK"),
        TH("QQ"),
        TH("JJ"),
        TH("TT"),
        TH("99"),
        TH("88"),
        TH("77"),


    };
};






class CTableManager
{
public:
    static std::shared_ptr<ITable> GetTableByName(std::string Possition) // SB, BB ...
    {
        qDebug() << "[" << __FUNCTION__ << "] : Наша позиция=" << Possition.c_str();

        CContainerPosition ContainerPosition;

        std::shared_ptr<ITable> Result ;


       /* -> 1 ,CGamePosition{"res/SB.PNG"} */
       /* -> 2 ,CGamePosition{"res/BB.PNG"} */
       /* -> 3 ,CGamePosition{"res/EP.PNG"} UTG_SH -> EP*/
       /* -> 4 ,CGamePosition{"res/MP.PNG"} */
       /* -> 5 ,CGamePosition{"res/CO.PNG"} */

        if ( Possition  == ContainerPosition.m_Pos[0].d)
        {
            /* -> 0  CGamePosition{"res/BU.PNG"} */
            qDebug() << "[" << __FUNCTION__ << "] : для поиска будем Использовать таблицу для" << Possition.c_str();
            Result = std::make_shared<CTable_BU_OPEN> ();
        }
        else if ( Possition  == ContainerPosition.m_Pos[1].d)
        {
            //CGamePosition{"res/SB.PNG"}
            Result = std::make_shared<CTable_SB_OPEN> ();
            qDebug() << "[" << __FUNCTION__ << "] : для поиска будем Использовать таблицу 1 для" << Possition.c_str();
        }
        else if ( Possition  == ContainerPosition.m_Pos[2].d)
        {
            Result = std::make_shared<CTable_BB_ISO>();
            qDebug() << "[" << __FUNCTION__ << "] : для поиска будем Использовать таблицу 2 для" << Possition.c_str();
        }
        else if ( Possition  == ContainerPosition.m_Pos[3].d)
        {
            Result = std::make_shared<CTable_UTG_SH> ();
            qDebug() << "[" << __FUNCTION__ << "] : для поиска будем Использовать таблицу 3 для" << Possition.c_str();
        }
        else if ( Possition  == ContainerPosition.m_Pos[4].d)
        {
            Result = std::make_shared<CTable_MP_OPEN> ();
            qDebug() << "[" << __FUNCTION__ << "] : для поиска будем Использовать таблицу 4 для" << Possition.c_str();
        }
        else if ( Possition  == ContainerPosition.m_Pos[5].d)
        {
            qDebug() << "[" << __FUNCTION__ << "] : для поиска будем Использовать таблицу 5 для" << Possition.c_str();
            Result = std::make_shared<CTable_CO_OPEN> ();
        }
        else
        {
            qCritical() <<    __FUNCTION__ << "  УПАСТЬ для" << Possition.c_str();
            assert(false);
        }

        return Result;
    }

};

#endif // CTABLECARDS_H
