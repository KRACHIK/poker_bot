#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QQmlContext>
#include "SingletonApplication.h"

#include "interface/input.h"



int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;


    //-----------------------------------------------------------------------------------------
    QQmlContext *context = engine.rootContext();

     CInput UserInputForm; //= SingletonApplication::GetForm();

     SingletonApplication::GetInstance().SetUserInputForm(&UserInputForm);

     context->setContextProperty("FormUserInput", &UserInputForm);

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





