#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{
//    QMediaPlayer* player = new QMediaPlayer;
//    player->setMedia(QUrl::fromLocalFile("C:\\Users\\23194\\Downloads\\test_.mp3"));
//    player->setVolume(50);
//    player->play();
//    qDebug()<<"test";
//    ui->pushButton->setText("broadcasting");
    test thetest;
    thetest.test_start();
}


void MainWindow::on_pushButton_2_clicked()
{
    QMediaPlayer* player = new QMediaPlayer;
    player->stop();
}

