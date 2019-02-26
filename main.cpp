#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>


#include <connected.h>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlComponent compo(&engine, QUrl("qrc:/main.qml"));
    Connected connect;

    QObject* pobj = compo.create();
    QObject* connBtn = pobj->findChild<QObject*>("connectionButton");

    if (connBtn)
    {
        QObject::connect(connBtn, SIGNAL(connectToIP(QString)), &connect, SLOT(ConnectionToIP(QString)));
    }





    return app.exec();
}
