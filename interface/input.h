#ifndef INPUT_H
#define INPUT_H


#include <QObject>
#include <QDebug>



class CInput : public QObject
{
    Q_OBJECT

private:

public:
    explicit CInput(QObject *parent = nullptr);

signals:
    void sendToQml(int count);

public slots:
    void receiveFromQml(QString ButtonCode);
    void clear();
    void confirm();
private:
    int m_counter {0};
};



#endif // INPUT_H
