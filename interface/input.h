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
            ,QString str_TIME_STEP
            ,QString str_ID_IMG_MARKER_1
            ,QString str_ID_IMG_MARKER_2
            ,QString floatStavka
            );
        /*
            ТЕКСТ_ИМЯ_ИГРОКА
            ТЕКСТ_СТАВКА_ИГРОКА
            ТЕКСТ_ВРЕМЯ_ХОДА
            ИД_КАРТИНКИ_МАРКЕР1 BB
            ИД_КАРТИНКИ_МАРКЕР2 ВТРОЙ
            ВИДИМОСТЬ_КНОПКИ_СБРОС_КАРТ
            ВИДИМОСТЬ_КНОПКИ_ПОВЫСИТЬ_СТАВКУ
        */



    void setIndicatorFirstPlayerCard (QString str);
    void setIndicatorSecondPlayerCard (QString str);




public slots:


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

private:
    int m_counter {0};
    int m_SelectedIndex = 0;
};



#endif // INPUT_H
