#include "newbill.h"
#include "ui_newbill.h"
#include "mainmenu.h"
#include "howtouse.h"

#include <QDesktopServices>
#include <QUrl>

NewBill::NewBill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewBill)
{
    ui->setupUi(this);
    QString Q = "Quantity";
    QString PPP = "Per Plate Price";
    QString PGP = "Per Glass Price";
    QString PCP = "Per Cup Price";

    ui->Roll_Paratha->setPlaceholderText(Q);
    ui->RollParathaPer->setPlaceholderText(PPP);
    ui->EggRoll->setPlaceholderText(Q);
    ui->EggRollPer->setPlaceholderText(PPP);
    ui->VegRoll->setPlaceholderText(PPP);
    ui->VegRollPer->setPlaceholderText(PPP);
    ui->VegBurger->setPlaceholderText(Q);
    ui->VegBurgerPer->setPlaceholderText(PPP);
    ui->Sandwich->setPlaceholderText(Q);
    ui->SandwichPer->setPlaceholderText(PPP);

    ui->BananaMS->setPlaceholderText(Q);
    ui->BananaMSPer->setPlaceholderText(PGP);
    ui->VannilaMS->setPlaceholderText(Q);
    ui->VannilaMSPer->setPlaceholderText(PGP);
    ui->MangoMS->setPlaceholderText(Q);
    ui->MangoMSPer->setPlaceholderText(PGP);
    ui->StrawberryMS->setPlaceholderText(Q);
    ui->StrawberryMSPer->setPlaceholderText(PGP);

    ui->MangoJ->setPlaceholderText(Q);
    ui->MangoJPer->setPlaceholderText(PGP);
    ui->OrangeJ->setPlaceholderText(Q);
    ui->OrangeJPer->setPlaceholderText(PGP);
    ui->LitchiJ->setPlaceholderText(Q);
    ui->LitchiJPer->setPlaceholderText(PGP);
    ui->PineAppleJ->setPlaceholderText(Q);
    ui->PineAppleJPer->setPlaceholderText(PGP);

    ui->GingerTea->setPlaceholderText(Q);
    ui->GingerTeaPer->setPlaceholderText(PCP);
    ui->GreenTea->setPlaceholderText(Q);
    ui->GreenTeaPer->setPlaceholderText(PCP);
    ui->BlackCoffee->setPlaceholderText(Q);
    ui->BlackCoffeePer->setPlaceholderText(PCP);
    ui->MilkCoffee->setPlaceholderText(Q);
    ui->MilkCoffeePer->setPlaceholderText(PCP);
}

NewBill::~NewBill()
{
    delete ui;
}

void NewBill::on_pushButton_2_clicked()
{
    this->hide();
    MainMenu Menu  ;
    Menu.exec();
}


void NewBill::on_pushButton_clicked()
{
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Snacks  in QString Form
    QString Roll_Paratha = ui->Roll_Paratha->text();
    QString VegBurger = ui->VegBurger->text();
    QString Sandwich  =ui->Sandwich->text();
    QString VegRoll = ui->VegRoll->text();
    QString EggRoll = ui->EggRoll->text();
    QString Roll_ParathaPer = ui->RollParathaPer->text();
    QString VegBurgerPer = ui->VegBurgerPer->text();
    QString SandwichPer  =ui->SandwichPer->text();
    QString VegRollPer = ui->VegRollPer->text();
    QString EggRollPer = ui->EggRollPer->text();

    //Milk Shake in QString Form
    QString MangoMS = ui->MangoMS->text();
    QString BananaMS = ui->BananaMS->text();
    QString VanillaMS = ui->VannilaMS->text();
    QString StrawberryMS  = ui->StrawberryMS->text();
    QString MangoMSPer = ui->MangoMSPer->text();
    QString BananaMSPer = ui->BananaMSPer->text();
    QString VanillaMSPer = ui->VannilaMSPer->text();
    QString StrawberryMSPer  = ui->StrawberryMSPer->text();

    //Juices in QSrtring Form
    QString MangoJ = ui->MangoJ->text();
    QString LitchiJ = ui->LitchiJ->text();
    QString OrangeJ = ui->OrangeJ->text();
    QString PineApple = ui->PineAppleJ->text();
    QString MangoJPer = ui->MangoJPer->text();
    QString LitchiJPer = ui->LitchiJPer->text();
    QString OrangeJPer = ui->OrangeJPer->text();
    QString PineApplePer = ui->PineAppleJPer->text();

    //Hot Drinks in QString Form
    QString MilkCoffee = ui->MilkCoffee->text();
    QString GreenTea  = ui->GreenTea->text();
    QString BlackCoffee = ui->BlackCoffee->text();
    QString GingerTea = ui->GingerTea->text();
    QString MilkCoffeePer = ui->MilkCoffeePer->text();
    QString GreenTeaPer  = ui->GreenTeaPer->text();
    QString BlackCoffeePer = ui->BlackCoffeePer->text();
    QString GingerTeaPer = ui->GingerTeaPer->text();

    //Hotel Information
    QString HotelName = ui->HotelName->text();
    QString HotelOwner = ui->HotelOwner->text();
    QString HotelCity = ui->HotelCity->text();
    QString HotelAddress = ui->HotelAddress->text();
    QString HotelEMail = ui->EMail->text();
    QString HelpLineNumber = ui->HelplineNumber->text();


    //Customer Information
    QString CustomerName = ui->CustomerName->text();
    QString CustomerContactNumber = ui->ContactNumber->text();
    QString CustomerTableNumber = ui->TableNumber->text();
    QString CustomerAddress  =ui->CustomerAddress->text();
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Snacks  in float Form
    float Roll_Parathafloat = Roll_Paratha.toFloat();
    float Sandwichfloat= Sandwich.toFloat();
    float VegBurgerfloat = VegBurger.toFloat();
    float VegRollfloat = VegRoll.toFloat();
    float EggRollfloat  = EggRoll.toFloat();
    float Roll_ParathaPerfloat = Roll_ParathaPer.toFloat();
    float SanwichPerfloat= SandwichPer.toFloat();
    float VegBurgerPerfloat = VegBurgerPer.toFloat();
    float VegRollPerfloat = VegRollPer.toFloat();
    float EggRollPerfloat  = EggRollPer.toFloat();

    //Milk Shake in float Form
    float MangoMSfloat = MangoMS.toFloat();
    float BananaMSfloat = BananaMS.toFloat();
    float VanillaMSfloat = VanillaMS.toFloat();
    float StrawberryMSfloat  = StrawberryMS.toFloat();
    float MangoMSPerfloat = MangoMSPer.toFloat();
    float BananaMSPerfloat = BananaMSPer.toFloat();
    float VanillaMSPerfloat = VanillaMSPer.toFloat();
    float StrawberryMSPerfloat  = StrawberryMSPer.toFloat();

    //Juices in float Form
    float MangoJfloat = MangoJ.toFloat();
    float LitchiJfloat = LitchiJ.toFloat();
    float OrangeJfloat = OrangeJ.toFloat();
    float PineAppleJfloat = PineApple.toFloat();
    float MangoJPerfloat = MangoJPer.toFloat();
    float LitchiJPerfloat = LitchiJPer.toFloat();
    float OrangeJPerfloat = OrangeJPer.toFloat();
    float PineApplejPerfloat = PineApplePer.toFloat();

    //Hot Drinks in float Form
    float MilkCoffeefloat = MilkCoffee.toFloat();
    float GreenTeafloat  = GreenTea.toFloat();
    float BlackCoffeefloat = BlackCoffee.toFloat();
    float GingerTeafloat = GingerTea.toFloat();
    float MilkCoffeeIPerNT = MilkCoffeePer.toFloat();
    float GreenTeaPerfloat  = GreenTeaPer.toFloat();
    float BlackCoffeePerfloat = BlackCoffeePer.toFloat();
    float GingerTeaPerfloat = GingerTeaPer.toFloat();

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Receipt's changes
    ui->HotelNameReceipt->setText(HotelName);
    ui->HotelAddressReceipt->setText(HotelAddress);
    ui->HotelCityReceipt->setText(HotelCity);
    ui->HotelEmailReceipt->setText(HotelEMail);
    ui->HelplineNumberReceipt->setText(HelpLineNumber);

    //Customer's Information's Changes
    ui->CustomerNameReceipt->setText(CustomerName);
    ui->CustomerNumberReceipt->setText(CustomerContactNumber);
    ui->CustomerAddressReceipt->setText(CustomerAddress);
    ui->CustomerTableNumberReceipt->setText(CustomerTableNumber);

    Roll_Parathafloat = Roll_Parathafloat * Roll_ParathaPerfloat ;
    Sandwichfloat = Sandwichfloat * SanwichPerfloat;
    VegBurgerfloat = VegBurgerfloat * VegBurgerPerfloat;
    VegRollfloat  = VegRollfloat * VegRollPerfloat;
    EggRollfloat = EggRollfloat * EggRollPerfloat;
    MangoMSfloat = MangoMSfloat * MangoMSPerfloat;
    BananaMSfloat = BananaMSfloat *BananaMSPerfloat;
    VanillaMSfloat = VanillaMSfloat * VanillaMSPerfloat;
    StrawberryMSfloat =  StrawberryMSfloat * StrawberryMSPerfloat;
    MangoJfloat = MangoJfloat * MangoJPerfloat;
    LitchiJfloat = LitchiJfloat * LitchiJPerfloat;
    OrangeJfloat = OrangeJfloat * OrangeJPerfloat;
    PineAppleJfloat = PineAppleJfloat * PineApplejPerfloat  ;
    MilkCoffeefloat = MilkCoffeefloat * MilkCoffeeIPerNT;
    GreenTeafloat = GreenTeafloat * GreenTeaPerfloat;
    BlackCoffeefloat = BlackCoffeefloat * BlackCoffeePerfloat;
    GingerTeafloat  =GingerTeafloat * GingerTeaPerfloat;

    QString FinalRollParatha = QString::number(Roll_Parathafloat);
    QString FinalSandwich  = QString::number(Sandwichfloat);
    QString FinalVegBurger = QString::number(VegBurgerfloat);
    QString FinalVegRoll = QString::number(VegRollfloat);
    QString FinalEggRoll = QString::number(EggRollfloat);
    QString FinaMangoMS = QString::number(MangoMSfloat);
    QString FinalBananaMS = QString::number(BananaMSfloat);
    QString FinalVanillaMS = QString::number(VanillaMSfloat);
    QString FinalStrawberryMS = QString::number(StrawberryMSfloat);
    QString FinalMangoJ = QString::number(MangoJfloat);
    QString FinalLitchiJfloat = QString::number(LitchiJfloat);
    QString FinalOrangeJ = QString::number(OrangeJfloat);
    QString FinalPineAppleJ = QString::number(PineAppleJfloat);
    QString FinalMilkCoffee = QString::number(MilkCoffeefloat);
    QString FinalGreenTea = QString::number(GreenTeafloat);
    QString FinalBlackCoffee = QString::number(BlackCoffeefloat);
    QString FinalGingerTea = QString::number(GingerTeafloat);

    ui->RollParathaTP->setText(FinalRollParatha);
    ui->SandwichTP->setText(FinalSandwich);
    ui->VegBurgerTP->setText(FinalVegBurger);
    ui->VegRollTP->setText(FinalVegRoll);
    ui->EggRollTP->setText(FinalEggRoll);
    ui->MangoMSTP->setText(FinaMangoMS);
    ui->BananaMSTP->setText(FinalBananaMS);
    ui->VanillaMSTP->setText(FinalVanillaMS);
    ui->StrawberryMSTP->setText(FinalStrawberryMS);
    ui->MangoJTP->setText(FinalMangoJ);
    ui->LitchiJTP->setText(FinalLitchiJfloat);
    ui->OrangeJTP->setText(FinalOrangeJ);
    ui->PineAppleTP->setText(FinalPineAppleJ);
    ui->MilkCoffeeTP->setText(FinalMilkCoffee);
    ui->GreenTeaTP->setText(FinalGreenTea);
    ui->BlackCoffeeTP->setText(FinalBlackCoffee);
    ui->GingerTeaTP->setText(FinalGingerTea);

    float TotalPrice = Roll_Parathafloat + Sandwichfloat + VegBurgerfloat + VegRollfloat + EggRollfloat + MangoMSfloat + BananaMSfloat + VanillaMSfloat + StrawberryMSfloat + MangoJfloat
            + LitchiJfloat+ OrangeJfloat +  PineAppleJfloat + MilkCoffeefloat + GreenTeafloat + BlackCoffeefloat + GingerTeafloat;

    QString TotalCost = QString::number(TotalPrice);

    ui->TotalCost->setText(TotalCost);
}


void NewBill::on_pushButton_3_clicked()
{
    this->hide();
    NewBill New_Bill;
    New_Bill.exec();
}


void NewBill::on_pushButton_5_clicked()
{
    HowToUse How_To_Use;
    How_To_Use.exec();
}


void NewBill::on_pushButton_4_clicked()
{
    QString URL = "https://github.com/Akash2006-cool/Cafe-Billing-System";
    QDesktopServices::openUrl(QUrl(URL));
}

