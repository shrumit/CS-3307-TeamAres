#include "fundadvsearch.h"
#include "ui_fundadvsearch.h"

fundAdvSearch::fundAdvSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fundAdvSearch)
{
    ui->setupUi(this);
}

fundAdvSearch::~fundAdvSearch()
{
    delete ui;
}

std::string fundAdvSearch::getMemberName(){
    return fundAdvArray[0];
}

std::string fundAdvSearch::getFundingType(){
    return fundAdvArray[1];
}

std::string fundAdvSearch::getStatus(){
    return fundAdvArray[2];
}

std::string fundAdvSearch::getRole(){
    return fundAdvArray[3];
}

std::string fundAdvSearch::getTitle(){
    return fundAdvArray[4];
}

void fundAdvSearch::setMemberName(){
    fundAdvArray[0] = ui->fund_member_name->text().toStdString();
}

void fundAdvSearch::setFundingType(){
    fundAdvArray[1] = ui->fund_funding_type->text().toStdString();
}

void fundAdvSearch::setStatus(){
    fundAdvArray[2] = ui->fund_status->text().toStdString();
}

void fundAdvSearch::setRole(){
    fundAdvArray[3] = ui->fund_role->text().toStdString();
}

void fundAdvSearch::setTitle(){
    fundAdvArray[4] = ui->fund_title->text().toStdString();
}

void fundAdvSearch::on_buttonBox_rejected() {
    done(0);
}

void fundAdvSearch::on_buttonBox_accepted() {
    done(1);
}

void fundAdvSearch::on_fund_member_name_textChanged(){setMemberName();}
void fundAdvSearch::on_fund_funding_type_textChanged(){setFundingType();}
void fundAdvSearch::on_fund_status_textChanged(){setStatus();}
void fundAdvSearch::on_fund_role_textChanged(){setRole();}
void fundAdvSearch::on_fund_title_textChanged(){setTitle();}
