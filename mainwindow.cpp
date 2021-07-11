#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newbill.h"
#include "howtouse.h"

#include <QDesktopServices>
#include <QUrl>

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
    this->close();
    NewBill New_Bill;
    New_Bill.setModal(true);
    New_Bill.exec();
}


void MainWindow::on_pushButton_4_clicked()
{
    close();
}


void MainWindow::on_pushButton_3_clicked()
{
    HowToUse How ;
    How.exec();
}


void MainWindow::on_pushButton_5_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Akash2006-cool/Cafe-Billing-System"));
}

