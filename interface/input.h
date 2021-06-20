#ifndef INPUT_H
#define INPUT_H


#include <QObject>
#include <QDebug>
#include <Qstring>



class CInput : public QObject
{
    Q_OBJECT

private:

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
    void ucazatbPositiySELF();
    void ucazatbPositiyiStart();
    void ucazatbPositiyiStop();
    void receiveFromQml(QString ButtonCode);
    void clearPlayingCards();
    void confirm();
    void renderSelfCard();
    void selectedIndex(int index);
    void setPositions(int Index);

    // Перед тем как начинается игра за стол садятся игроки их может быть до 6. этот метод говорит что конкретный i игрок проинициализирован (присутствует)
    void confiirmInit(int Index, QString Name );

    // когда мы ввсели имена всех игроков, указываем на то, что больше других игроков нету и инициализация игрового стола окончена
    void initEnd();
    void dbg();
    void showTable();
    void updateGUI();

    void clearPlayingCardsForThisPlayer(int index);
    void upStavkaForThisPlayer(int index, QString StavkaValue);

    /* После того как мы ввели наши карты, сервер попытается найти их в одной из своих таблиц, и если он их найдейт, то ставка будет увеличена на значение stavkaUpValue. по умолчанию 2.5*/
    void setValueStavkaUpAAfterFindPlayerCardInTable ( QString  stavkaUpValue );
private:
    int m_counter {0};
    int m_SelectedIndex = 0;
};



#endif // INPUT_H
