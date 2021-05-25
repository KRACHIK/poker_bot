#include "top_20_starting_hands.h"


void CTableTop20StartingHands::GetStatus(CActor &Actor)
{
    bool bMath = false;
    for (size_t i = 0; i < m_Tables.size(); i++)
    {
        for (size_t j = 0; j < m_Tables[i].size(); j++)
        {
             bMath = m_Tables[i][j].IsMath(Actor.GetPlayingCards());

            if (bMath)
            {
                qDebug() << "[" << __FUNCTION__ << "] : OK OK OK OK OK OK  [i][j] = " << " " << i << " " << j;
                break;
            }

        }
        if (bMath)
        {
            break;
        }
    }
    if (bMath == false)
        qDebug() << "[" << __FUNCTION__ << "] :  Find pair card in table and not find. input error or enternal error;";

    int dfgdfgdfgdfg345=43534543;
    //Actor.Is
}
