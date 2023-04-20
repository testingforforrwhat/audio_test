#include "test.h"

void test::test_start()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:\\Users\\23194\\Downloads\\test_.mp3"));
    player->setVolume(50);
    player->play();
    qDebug()<<"test";
}

void test::stopaudio()
{
    QMediaPlayer *player = new QMediaPlayer;
//    player->setMedia(QUrl::fromLocalFile("C:\\Users\\23194\\Downloads\\test_.mp3"));
//    player->setVolume(50);
    player->stop();
    qDebug()<<"test";
}
