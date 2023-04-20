#include "mainwindow.h"
#include <QMediaPlayer>
#include <QDebug>
#include <QApplication>
#include <test.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QMediaPlayer *player = new QMediaPlayer;
//    player->setMedia(QUrl::fromLocalFile("C:\\Users\\23194\\Downloads\\test_.mp3"));
//    player->setVolume(50);
//    player->play();
//    qDebug()<<"test";
//    test test;
    MainWindow w;
    w.show();
    return a.exec();
}
