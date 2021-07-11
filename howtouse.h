#ifndef HOWTOUSE_H
#define HOWTOUSE_H

#include <QDialog>

namespace Ui {
class HowToUse;
}

class HowToUse : public QDialog
{
    Q_OBJECT

public:
    explicit HowToUse(QWidget *parent = nullptr);
    ~HowToUse();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::HowToUse *ui;
};

#endif // HOWTOUSE_H
