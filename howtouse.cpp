#include "howtouse.h"
#include "ui_howtouse.h"
#include "mainmenu.h"
#include "newbill.h"

#include <QDesktopServices>
#include <QUrl>

HowToUse::HowToUse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HowToUse)
{
    ui->setupUi(this);
}

HowToUse::~HowToUse()
{
    delete ui;
}

void HowToUse::on_pushButton_clicked()
{
    this->close();
    MainMenu Menu;
    Menu.exec();
}


void HowToUse::on_pushButton_2_clicked()
{
    this->close();
    NewBill New_Bill ;
    New_Bill.exec();
}


void HowToUse::on_pushButton_4_clicked()
{
    close();
}


void HowToUse::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Akash2006-cool/Cafe-Billing-System"));
}

