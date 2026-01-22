#include "mainwindow.h"
#include "./ui_mainwindow.h"
//# include <QDebug>

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

void MainWindow::on_pushButtonQuit_clicked()
{
    //qDebug("Pressed Quit");
    close();
}

void MainWindow::on_pushButtonLogin_clicked()
{
    //qDebug("Pressed Login");
    ui->comboBoxUserNames->addItem(ui->lineEditUserName->text());
}

void MainWindow::on_comboBoxUserNames_currentIndexChanged(int index)
{

}

