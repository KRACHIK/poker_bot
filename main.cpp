#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "interface/form_default_player_action.h"
#include "interface/form_cheat_server_action.h"
#include "SingletonApplication.h"
#include "interface/input.h"

#include<iostream>
#include<map>
#include<algorithm>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QCoreApplication::setQuitLockEnabled(false);
    //QApplication::setQuitOnLastWindowClosed(false);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //-----------------------------------------------------------------------------------------
    QQmlContext *context = engine.rootContext();

     CInput UserInputForm; //= SingletonApplication::GetForm();
     CRenderInfo FormRenderInfo;
     CFormDefaultPlayerAction FormDefaultPlayerAction;
     CFormCheatServerAction FormCheatServerAction;

     SingletonApplication::GetInstance().SetUserInputForm(&UserInputForm);
     SingletonApplication::GetInstance().setFormRenderInfo(&FormRenderInfo);

     context->setContextProperty("FormDefaultPlayerAction", &FormDefaultPlayerAction);
     context->setContextProperty("FormRenderInfo", &FormRenderInfo);
     context->setContextProperty("FormUserInput", &UserInputForm);
     context->setContextProperty("FormCheatServerAction", &FormCheatServerAction);


    //-----------------------------------------------------------------------------------------

    const QUrl url(QStringLiteral("qrc:/res/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}





