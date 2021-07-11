#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "newbill.h"
#include "howtouse.h"

#include <QDesktopServices>
#include <QUrl>

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_pushButton_clicked()
{
    this->hide();
    NewBill New_Bill ;
    New_Bill.setModal(true);
    New_Bill.exec();
}


void MainMenu::on_pushButton_4_clicked()
{
    close();
}


void MainMenu::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Akash2006-cool/Cafe-Billing-System"));
}


void MainMenu::on_pushButton_6_clicked()
{
    HowToUse How ;
    How.exec();
}

