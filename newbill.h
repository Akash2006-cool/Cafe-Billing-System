#ifndef NEWBILL_H
#define NEWBILL_H

#include <QDialog>

namespace Ui {
class NewBill;
}

class NewBill : public QDialog
{
    Q_OBJECT

public:
    explicit NewBill(QWidget *parent = nullptr);
    ~NewBill();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::NewBill *ui;
};

#endif // NEWBILL_H
