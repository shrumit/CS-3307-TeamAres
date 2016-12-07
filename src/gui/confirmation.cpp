#include "confirmation.h"
#include "ui_confirmation.h"

Confirmation::Confirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Confirmation)
{
    ui->setupUi(this);
}

Confirmation::~Confirmation()
{
    delete ui;
}

void Confirmation::on_buttonBox_rejected() {
    done(0);
}

void Confirmation::on_buttonBox_accepted() {
    done(1);
}
