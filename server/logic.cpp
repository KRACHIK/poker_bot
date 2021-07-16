#include "logic.h"
#include "network.h"

#include <deque>

SingletonServerLogic &SingletonServerLogic::GetInstance() {
    static SingletonServerLogic instance;
    return instance;
}

void SingletonServerLogic::Tick()
{
    qDebug() << "[" << __FUNCTION__ << "] : ";

    if ( m_Actor.IsOkInput() )
    {
        qDebug() << "[" << __FUNCTION__ << "] : Ok";

        CServerLogicAnswerData ServerLogicAnswerData;

#if 0
        //bool bFindTop20 = m_TableTop20StartingHands.GetStatus(m_Actor);
        //qDebug() << "[" << __FUNCTION__ << "] : Поиск в таблице Top20 используя старый алго bFindTop20 =" << bFindTop20;

        bool bFindTop20_v2 = CFindPlayingCards::GetStatus(m_TableTop20StartingHands.GetTables(), m_Actor);
        ServerLogicAnswerData.SetStatusTable_Top20 (bFindTop20_v2);
        qDebug() << "[" << __FUNCTION__ << "] : Поиск в таблице Top20 используя обобщеный механизм bFindTop20_v2 =" << bFindTop20_v2;


        //bool bUTG_SH = CFindPlayingCards::GetStatus(m_Table_UTG_SH.GetTable() , m_Actor);
        //ServerLogicAnswerData.SetStatusTable_UTG_SH(bUTG_SH);
        //qDebug() << "[" << __FUNCTION__ << "] : Поиск в таблице m_Table_UTG_SH используя обобщеный механизм bUTG_SH =" << bUTG_SH;
        //
        //if (  bUTG_SH == false)
        //{
        //    ServerLogicAnswerData.SetActionFOLD_For_TAB_UTG_SH(true);
        //}



        if (CFindPlayingCards::GetStatus( m_Table_BB_ISO.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_BB_ISO =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_BB_ISO =" ;
        }

        if (CFindPlayingCards::GetStatus( m_Table_MP.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_MP " ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_MP  " ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_start.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_start =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_start =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Table_CO.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_CO =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_CO =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_BU_OPEN.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_BU_OPEN =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_BU_OPEN =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_SB_OPEN.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_SB_OPEN =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_SB_OPEN =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Table_vs_3b_UTG_FR.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Table_vs_3b_UTG_FR =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Table_vs_3b_UTG_FR =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_3b_MP.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_3b_MP =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_3b_MP =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_3b_SB.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_3b_SB =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_3b_SB =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_UTG_FR.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_UTG_FR =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_UTG_FR =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_vs_UTG.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_UTG =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_UTG =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_vs_MP.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_MP =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_MP =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs_CO.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs_CO =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs_CO =" ;
        }

        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_UTG17.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_UTG17 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_UTG17 =" ;
        }

        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_MP20.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_MP20 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_MP20 =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_MP20.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_MP20 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_MP20 =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_CO27.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_CO27 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_CO27 =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_SB_vs_BU45.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_SB_vs_BU45 =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_SB_vs_BU45 =" ;
        }



        if (CFindPlayingCards::GetStatus( m_Tables_vs4B_UTGFR.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs4B_UTGFR =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs4B_UTGFR =" ;
        }


        if (CFindPlayingCards::GetStatus( m_Tables_vs4B_UTG.Tables(), m_Actor))
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в m_Tables_vs4B_UTG =" ;
        }else{
            qDebug() << "[" << __FUNCTION__ << "] : НЕ найдено в m_Tables_vs4B_UTG =" ;
        }

#endif


        std::shared_ptr<ITable> pTable = CTableManager::GetTableByName(m_Actor.GetStrPointerToPosition().toStdString());
        qDebug() << "[" << __FUNCTION__ << "] : ПОЛУЧЕН ПОЛИМОРФНЫЙ ОБЪЕКТ: " << pTable->GetTableName().c_str() ;

        bool bFind = CFindPlayingCards::GetStatus( pTable->Operation(), m_Actor);
        if (bFind)
        {
            qDebug() << "[" << __FUNCTION__ << "] : найдено в ПОЛИМОРФНОМ ОБЪЕКТЕ";
            ServerLogicAnswerData.SetAction_FOLD (false);
        }
        else
        {
            qDebug() << "[" << __FUNCTION__ << "] : НЕ в ПОЛИМОРФНОМ ОБЪЕКТЕ";
            ServerLogicAnswerData.SetAction_FOLD (true);
        }

        qDebug() << "[" << __FUNCTION__ << "] : Error!";
        CServerNetwork networkObj;
        networkObj.ServerSay( ServerLogicAnswerData );

    }
    else
    {
        qDebug() << "[" << __FUNCTION__ << "] : Error!";
        CServerNetwork networkObj;
        networkObj.ServerSay( "!!!!!!", EStatus::STATUS_ERROR);
    }

}

// kr4 CActor &SingletonServerLogic::GetPlayerActor()
// kr4 {
// kr4     return m_Actor;
// kr4 }

void SingletonServerLogic::SetPlayerActor(CActor Actor)
{
    m_Actor = Actor;
}

void SingletonServerLogic::SetOtherPlayer(std::vector<CActor> OtherPlayers)
{
    qDebug() << "[" << __FUNCTION__ << "] :   ";
    m_OtherPlayers = OtherPlayers;
}

void SingletonServerLogic::Execut(ECOMMAND Cmd)
{
    qDebug() << "[" << __FUNCTION__ << "] :   ";

    qDebug() << "[" << __FUNCTION__ << "] :  Получить указатель на игрока который сделал ход передомной";
    qDebug() << "[" << __FUNCTION__ << "] :  и если он повысел ставку то";
    qDebug() << "[" << __FUNCTION__ << "] :  и если он сбросил ставку то";


    //CDisignMaker::Iskatb_seld_cards_v_zavisimosti_ot_posicii()





    CContainerPosition ContainerPosition;
    if(m_Actor.GetStrPointerToPosition().toStdString() == ContainerPosition.m_Pos[3].d )
    { // EP
        qCritical() <<  "Артем  [14.07.21 01:42] "
                      "Сброс карт или увеличение ставки начинается с игрока в позиции UTG,  "
                      "если мы находимся в позиции UTG  то сразу наш ход и мы ищем карты в таблице 1й столбик UTGsh";
        assert(false);
    }
    else if(m_Actor.GetStrPointerToPosition().toStdString() == ContainerPosition.m_Pos[4].d )
    {
        // MP
        qCritical() <<  " Дальше, если мы в позиции MP,  проверяем повышал ли ставку игрок в UTG, если да то ищем наши карты "
                        "во втором столбце в таблице vsUTG, если не повышал а сбросил карты, то ищем в первой столбце в "
                        "таблице MP";

        CActor OtherPlayersWant_MP;

        bool bFind = CActorFilter::FindPlayerByPossition( m_OtherPlayers, /*UTG=EP=3*/ContainerPosition.m_Pos[3] , OtherPlayersWant_MP);

        if (bFind)
        {
            if (OtherPlayersWant_MP.isEventClearPlayingCardsForOtherPlayer() )
            {
                qCritical() << "PlayerName=" << OtherPlayersWant_MP.PlayerName()
                            << " Stavka= " << OtherPlayersWant_MP.GetStavka()
                            << " Сбросил свои карты "
                            << "ищем в первой столбце в таблице MP";
            }
            else
            {
                qCritical() << " PlayerName=" << OtherPlayersWant_MP.PlayerName()
                            << " Stavka= " << OtherPlayersWant_MP.GetStavka()
                            << " повышал  ставку "
                            << " ищем наши карты во втором столбце в таблице vsUTG";

            }
        }
        else
        {
            qCritical() << "1игрока не существует, то есть за игровым столом не 6 человек";
        }


        assert(false);
    }
    else if(m_Actor.GetStrPointerToPosition().toStdString() == ContainerPosition.m_Pos[5].d /*CO*/ )
    {

        qCritical() << "Дальше если мы в CO проверяем ходы игроков в UTG и MP и если кто-то сделал ставку "
                       "ищем во втором столбце в таблице vsUTG или vsMp, в зависимости откуда ставка, "
                       "если сбросили, то ищем в первой колонке в таблице Co ";

        //mp=4
        //EP=UTG=3


        CActor OtherPlayersWant_MP, OtherPlayersWant_EP;
        bool bFind_MP = CActorFilter::FindPlayerByPossition( m_OtherPlayers,  ContainerPosition.m_Pos[(int)EPos::POS_MP] , OtherPlayersWant_MP);
        bool bFind_EP = CActorFilter::FindPlayerByPossition( m_OtherPlayers,  ContainerPosition.m_Pos[(int)EPos::POS_EP] , OtherPlayersWant_EP);


        if (bFind_MP && bFind_EP)
        {// Оба противника существуют

            if ( OtherPlayersWant_MP.isEventClearPlayingCardsForOtherPlayer()
                    && OtherPlayersWant_EP.isEventClearPlayingCardsForOtherPlayer()
                    )
            {
               qCritical()
                       << " PlayerName=" << OtherPlayersWant_MP.PlayerName() << " PlayerName=" << OtherPlayersWant_EP.PlayerName()
                           << " Оба игрока сбросили свои карты";
            }
            else if (
                     !OtherPlayersWant_MP.isEventClearPlayingCardsForOtherPlayer()
                  && !OtherPlayersWant_EP.isEventClearPlayingCardsForOtherPlayer()
                     )
            {
                qCritical()  << " PlayerName=" << OtherPlayersWant_MP.PlayerName() << " PlayerName=" << OtherPlayersWant_EP.PlayerName()
                            << "Оба игрока повысили свою ставку";

                if ( OtherPlayersWant_MP.GetStavka() ==  OtherPlayersWant_EP.GetStavka() )
                {
                    qCritical()  << " PlayerName=" << OtherPlayersWant_MP.PlayerName() << " PlayerName=" << OtherPlayersWant_EP.PlayerName()
                                << "Оба игрока повысили свою ставку на одинаковое значение";

                }
                else {
                    qCritical()  << " PlayerName=" << OtherPlayersWant_MP.PlayerName() << " PlayerName=" << OtherPlayersWant_EP.PlayerName()
                                << " на разное значение значение";
                }


            }
            else if (  !OtherPlayersWant_MP.isEventClearPlayingCardsForOtherPlayer())
            {
                qCritical()  << " PlayerName=" << OtherPlayersWant_MP.PlayerName()
                            << "только один игрок повысил свою ставку";
            }
            else if (  !OtherPlayersWant_EP.isEventClearPlayingCardsForOtherPlayer())
            {
                qCritical()  << " PlayerName=" << OtherPlayersWant_EP.PlayerName()
                            << "только один игрок повысил свою ставку";
            }


        }
        else if (bFind_MP)
        {

        }
        else if (bFind_EP)
        {

        }
        else
        {

        }


        if (bFind_MP)
        {
            if (OtherPlayersWant_MP.isEventClearPlayingCardsForOtherPlayer() )
            {
                qCritical() << "PlayerName=" << OtherPlayersWant_MP.PlayerName()
                            << " Stavka= " << OtherPlayersWant_MP.GetStavka()
                            << " Сбросил свои карты "
                            << "ищем в первой столбце в таблице MP";
            }
            else
            {
                qCritical() << " PlayerName=" << OtherPlayersWant_MP.PlayerName()
                            << " Stavka= " << OtherPlayersWant_MP.GetStavka()
                            << " повышал  ставку "
                            << " ищем наши карты во втором столбце в таблице vsUTG";

            }
        }
        else
        {
            qCritical() << "1игрока не существует, то есть за игровым столом не 6 человек";
        }


        assert(false);
    }




    auto GetPlayerCotoriySdelalHodPeredomnoy = [] (std::vector<CActor> OtherPlayers, size_t SelfIndex
            , CActor & OutputActor)
            -> bool
    {
        /*
         *  GetPlayerCotoriySdelalHodPeredomnoy
         *  ожидается что сервер ожидает что мы сделаем ход. на выбор
         * повысить ставку либо избавиться от своих карт
         * этот выбор мы делаем из ходя из следующего алгоритма
         * если перед нами каждый другой игрок сбросил карты то мы ищем свои карты в определеной таблице
         * если хотябы один игрок повысел ставку, то мы ищем карты в другой определной позиции
         * если хотябы несколько других игроков повысело ставку, но мы опредделяем сельнейшего из них
         * и ищем свои карты в дргой определеной таблице
        */

        if (OtherPlayers.size() <= 1)
        {
            // TOdo Error
            return false;
        }

        if (SelfIndex == 0)
        {
            OutputActor = OtherPlayers[ OtherPlayers.size() -1];
        }
        else if ( SelfIndex != -1 &&  SelfIndex < OtherPlayers.size())
        {
            OutputActor = OtherPlayers[SelfIndex -1];
        }
        return true;
    };


    auto GetAllPlayerPeredomnoy = [](std::vector<CActor> OtherPlayers, size_t SelfIndex, const CActor & PlayerACtor)
            -> std::deque <CActor>
    {
        qDebug() << "[" << __FUNCTION__ << "] : SelfIndex=" <<  SelfIndex << " ( мой индекс )" ;
        std::deque <CActor> PlayersPeredomnoy;
        int gamePoleSize = OtherPlayers.size(); // = 6
        for ( int i =0, k=0; i < gamePoleSize ; i++ )
        {
            int NewPosition = (SelfIndex + i) % gamePoleSize;
            CActor & pActor = OtherPlayers[ NewPosition ];
            if (pActor.uniquePlayerID() == PlayerACtor.uniquePlayerID() )
                continue;

            PlayersPeredomnoy.push_front (pActor);
            qDebug() << "[" << __FUNCTION__ << "] : "
                     << " PlayerIndex=" << pActor.PlayerIndex()
                     << " SelfIndex=" << SelfIndex
                     << " i=" <<  i
                     << " PlayerName=" << pActor.PlayerName()
                        ;
        }

        qDebug() << "_____________________________________________________";
        for (auto it  : PlayersPeredomnoy)
        {
            qDebug() << it.PlayerName();
        }

        //showTable();

        return PlayersPeredomnoy;
    };


    auto IsAllPlayerCardsFoold = [] (std::deque<CActor> Players) -> bool
    {
        /* Метод вернет true если все мои противники сбросили свои карты
        */

        bool bAllFold = true;

        for (CActor it : Players)
        {
            if ( it.isEventClearPlayingCardsForOtherPlayer() == false)
            {
                bAllFold = false;
                break;
            }
        }

        return bAllFold;
    };

    size_t SelfIndex = CBase::GetIndexPlayerActor( m_OtherPlayers, m_Actor);

    if (SelfIndex != -1 )
    {
        /*********************************************************************************************/
        CActor PeredomnoyActor;
        bool bOk = GetPlayerCotoriySdelalHodPeredomnoy(m_OtherPlayers, SelfIndex, PeredomnoyActor);
        if (bOk == false)
        {
            //todo error;
            return;
        }
        qDebug() << "Им игрока который сделал ход передомной" << PeredomnoyActor.PlayerName();
        /*********************************************************************************************/

        std::deque<CActor> PlayersPeredomnoy = GetAllPlayerPeredomnoy(m_OtherPlayers, SelfIndex, m_Actor);


        if (IsAllPlayerCardsFoold(PlayersPeredomnoy))
        {
            qDebug() << "Все игроки сбросили свои карты:! "  ;
        }


        /*********************************************************************************************/
    }
    //showTable();
}


bool CFindPlayingCards::GetStatus(std::vector<std::vector<CTexasHoldem> > Tables, CActor &Actor)
{
    bool bMath = false;
    for (size_t i = 0; i < Tables.size(); i++)
    {
        for (size_t j = 0; j < Tables[i].size(); j++)
        {
            bMath = Tables[i][j].IsMath(Actor.GetPlayingCards());

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

    return bMath;
}

bool CFindPlayingCards::GetStatus(std::vector<CTexasHoldem> Tables, CActor &Actor)
{
    bool bMath = false;
    for (size_t i = 0; i < Tables.size(); i++)
    {
        bMath = Tables[i].IsMath(Actor.GetPlayingCards());

        if (bMath)
        {
            qDebug() << "[" << __FUNCTION__ << "] : OK OK OK OK OK OK  [i][j] = " << " " << i  ;
            break;
        }
    }

    if (bMath == false)
        qDebug() << "[" << __FUNCTION__ << "] :  Find pair card in table and not find. input error or enternal error;";

    return bMath;
}

bool CActorFilter::FindPlayerByPossition( const std::vector<CActor> &OtherPlayers
                                          , const CGamePosition &FindPosition, CActor & OutputPlayers )
{
    for (auto it : OtherPlayers)
    {
        if(it.GetStrPointerToPosition().toStdString() == FindPosition.d )
        { // EP
            OutputPlayers = it;
            return true;
        }
    }

    return false;
}
