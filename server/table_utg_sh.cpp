#include "table_utg_sh.h"
#include "logic.h"

CTable_UTG_SH::CTable_UTG_SH()
{

}

void CTable_UTG_SH::GetStatus(CActor &Actor)
{
    CFindPlayingCards::GetStatus(GetTable(), Actor);
}

std::vector<std::vector<CTexasHoldem> > CTable_UTG_SH::GetTable()
{
    return m_Tables;
}
