#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "cancommunication.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /* Object holding CAN communication */
    CANCommunication canCom;

    QQmlApplicationEngine engine;

    /* Enable CANCommunication canCom object on qml */
    engine.rootContext()->setContextProperty("CANCommunication", &canCom);

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));

    return a.exec();
}
