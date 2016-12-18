#include "bumain.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/icons/splash.PNG"));
    splash->setWindowFlags(splash->windowFlags() | Qt::WindowStaysOnTopHint);
    Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
    splash->show();
    a.processEvents();
    splash->showMessage(QObject::tr("Loading..."),topRight, Qt::white);
    BUMain w;
    w.show();
    splash->finish(&w);
    return a.exec();
}
