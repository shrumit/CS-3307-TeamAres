#include "load.h"
#include "ui_load.h"

load::load(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::load)
{
    ui->setupUi(this);
}

load::~load()
{
    delete ui;
}

void load::on_buttonBox_rejected() {
    done(0);
}

void load::on_buttonBox_accepted() {
    done(1);
}
