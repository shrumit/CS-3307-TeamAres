#include "pubadvsearch.h"
#include "ui_pubadvsearch.h"

pubAdvSearch::pubAdvSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pubAdvSearch)
{
    ui->setupUi(this);
}

pubAdvSearch::~pubAdvSearch()
{
    delete ui;
}

std::string pubAdvSearch::getMemberName(){
    return pubAdvArray[0];
}

std::string pubAdvSearch::getType(){
    return pubAdvArray[1];
}

std::string pubAdvSearch::getRole(){
    return pubAdvArray[2];
}

std::string pubAdvSearch::getTitle(){
    return pubAdvArray[3];
}

void pubAdvSearch::setMemberName(){
    pubAdvArray[0] = ui->pub_member_name->text().toStdString();
}

void pubAdvSearch::setType(){
    pubAdvArray[1] = ui->pub_type->text().toStdString();
}

void pubAdvSearch::setRole(){
    pubAdvArray[2] = ui->pub_role->text().toStdString();
}

void pubAdvSearch::setTitle(){
    pubAdvArray[3] = ui->pub_title->text().toStdString();
}

void pubAdvSearch::on_buttonBox_rejected() {
    done(0);
}

void pubAdvSearch::on_buttonBox_accepted() {
    done(1);

}

void pubAdvSearch::on_pub_member_name_textChanged(){setMemberName();}
void pubAdvSearch::on_pub_type_textChanged(){setType();}
void pubAdvSearch::on_pub_role_textChanged(){setRole();}
void pubAdvSearch::on_pub_title_textChanged(){setTitle();}
