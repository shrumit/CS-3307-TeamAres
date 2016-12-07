#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <QDialog>

namespace Ui {
class Confirmation;
}

class Confirmation : public QDialog
{
    Q_OBJECT

public:
    explicit Confirmation(QWidget *parent = 0);
    ~Confirmation();

private:
    Ui::Confirmation *ui;
    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
};

#endif // CONFIRMATION_H
