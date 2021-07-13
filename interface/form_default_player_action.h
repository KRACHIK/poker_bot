#ifndef FORM_DEFAULT_PLAYER_ACTION_H
#define FORM_DEFAULT_PLAYER_ACTION_H


#include <QObject>
#include <QDebug>
#include <Qstring>


class CFormDefaultPlayerAction : public QObject
{
    Q_OBJECT
public:
    explicit CFormDefaultPlayerAction (QObject *parent = nullptr)  : QObject(parent)
    {
    }

signals:

public slots:
    void ucazatbPositiySELF();
    void ucazatbPositiyiStart();
    void ucazatbPositiyiStop();

     /*insertPlayer
      *Перед тем как начинается игра за стол садятся игроки их может быть до 6. этот метод говорит что конкретный i игрок проинициализирован (присутствует) **/
    void insertPlayer(int Index, QString Name );

    /*selectedIndex
     * когда человек кликает мышью по одному из других "игроков".  в форме <> **/
    void selectedIndex(int index);

private:
    int m_SelectedIndex =0;
};


#endif // FORM_DEFAULT_PLAYER_ACTION_H
