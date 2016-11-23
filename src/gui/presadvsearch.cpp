#include "presadvsearch.h"
#include "ui_presadvsearch.h"

presAdvSearch::presAdvSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::presAdvSearch)
{
    ui->setupUi(this);
}

presAdvSearch::~presAdvSearch()
{
    delete ui;
}

std::string presAdvSearch::getMemberName(){
    return presAdvArray[0];
}

std::string presAdvSearch::getType(){
    return presAdvArray[1];
}

std::string presAdvSearch::getRole(){
    return presAdvArray[2];
}

std::string presAdvSearch::getTitle(){
    return presAdvArray[3];
}

void presAdvSearch::setMemberName(){
    presAdvArray[0] = ui->pres_member_name->text().toStdString();
}

void presAdvSearch::setType(){
    presAdvArray[1] = ui->pres_type->text().toStdString();
}

void presAdvSearch::setRole(){
    presAdvArray[2] = ui->pres_role->text().toStdString();
}

void presAdvSearch::setTitle(){
    presAdvArray[3] = ui->pres_title->text().toStdString();
}

void presAdvSearch::on_buttonBox_rejected() {
    done(0);
}

void presAdvSearch::on_buttonBox_accepted() {
    done(1);

}

void presAdvSearch::on_pres_member_name_textChanged(){setMemberName();}
void presAdvSearch::on_pres_type_textChanged(){setType();}
void presAdvSearch::on_pres_role_textChanged(){setRole();}
void presAdvSearch::on_pres_title_textChanged(){setTitle();}
