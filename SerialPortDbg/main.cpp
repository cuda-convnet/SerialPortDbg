﻿#include "mainwidget.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);
    //qDebug()<<QStyleFactory::keys();
    /* Available styles: "windowsvista", "Windows", "Fusion" */
    app.setStyle(QStyleFactory::create("Fusion"));
    MainWidget widget;
    widget.show();
    return app.exec();
}
