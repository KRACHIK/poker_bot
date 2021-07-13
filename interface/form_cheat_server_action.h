#ifndef FORM_CHEAT_SERVER_ACTION_H
#define FORM_CHEAT_SERVER_ACTION_H


#include <QObject>
#include <QDebug>
#include <Qstring>

class CFormCheatServerAction : public QObject
{
    Q_OBJECT
public:
    explicit CFormCheatServerAction (QObject *parent = nullptr)  : QObject(parent)
    {
    }

signals:

public slots:
    void upStavkaForThisPlayer(int index, QString stavkaValueStr);
    void clearPlayingCards();
    void confirm();
    void compute_hod();
private:
};



#endif // FORM_CHEAT_SERVER_ACTION_H
