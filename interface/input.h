#ifndef INPUT_H
#define INPUT_H


#include <QObject>
#include <QDebug>
#include <Qstring>

class CRenderInfo : public QObject
{
    Q_OBJECT


public:
    explicit CRenderInfo(QObject *parent = nullptr)  : QObject(parent)
    {
    }

signals:
    void addLinesToTable(
            int     int_INDEX
            ,int     int_VISIBILITY_PUSHBUTTON_SBROW_MAPS
            ,int     int_VISIBILITY_BUTTONS_INCREASE_BID
            ,QString str_PLAYR_NAME
            ,QString str_STAVKA
            ,QString str_text_status_STAVKA // str_text_status_STAVKA
            ,QString str_ID_IMG_MARKER_1
            ,QString str_ID_IMG_MARKER_2
            ,QString floatStavka
            );

    void clearTable();

    void setIndicatorFirstPlayerCard (QString str);
    void setIndicatorSecondPlayerCard (QString str);

    void tara(QString str);

public slots:
    void updateForm();
    void showTable();

};




class CInput : public QObject
{
    Q_OBJECT


public:
    explicit CInput(QObject *parent = nullptr);

signals:
    void sendToQml(int count);
    void eventInitStol();

    void clearTable();

    void setText_top20( QString str);

    void setText_UTG_SH(QString str);

    void serverCmd_Fold();

    void addLinesToTable(
            int     int_INDEX
            ,int     int_VISIBILITY_PUSHBUTTON_SBROW_MAPS
            ,int     int_VISIBILITY_BUTTONS_INCREASE_BID
            ,QString str_PLAYR_NAME
            ,QString str_STAVKA
            ,QString str_text_status_STAVKA // str_text_status_STAVKA
            ,QString str_ID_IMG_MARKER_1
            ,QString str_ID_IMG_MARKER_2
            ,QString floatStavka
            );

    void setIndicatorFirstPlayerCard (QString str);
    void setIndicatorSecondPlayerCard (QString str);

public slots:
    void receiveFromQml(QString ButtonCode);
#if 0
    void clearPlayingCards();
    void confirm();
    void renderSelfCard();
    void selectedIndex(int index);
    void setPositions(int Index);


    // когда мы ввсели имена всех игроков, указываем на то, что больше других игроков нету и инициализация игрового стола окончена
    void initEnd();
    void dbg();
    void showTable();
    void updateGUI();
    void clearStavkaForAllPlayer();
    void endGame();

    void clearPlayingCardsForThisPlayer(int index);
    void upStavkaForThisPlayer(int index, QString StavkaValue);

    /* После того как мы ввели наши карты, сервер попытается найти их в одной из своих таблиц, и если он их найдейт, то ставка будет увеличена на значение stavkaUpValue. по умолчанию 2.5*/
    void setValueStavkaUpAAfterFindPlayerCardInTable ( QString  stavkaUpValue );
#endif
private:
    int m_counter {0};
    int m_SelectedIndex = 0;
};



#endif // INPUT_H
