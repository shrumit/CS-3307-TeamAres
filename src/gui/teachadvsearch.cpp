#include "teachadvsearch.h"
#include "ui_teachadvsearch.h"

teachAdvSearch::teachAdvSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teachAdvSearch)
{
    ui->setupUi(this);
}

teachAdvSearch::~teachAdvSearch()
{
    delete ui;
}

std::string teachAdvSearch::getMemberName(){
    return teachAdvArray[0];
}

std::string teachAdvSearch::getDivision(){
    return teachAdvArray[1];
}

std::string teachAdvSearch::getProgram(){
    return teachAdvArray[2];
}

void teachAdvSearch::setMemberName(){
    teachAdvArray[0] = ui->teach_member_name->text().toStdString();
}

void teachAdvSearch::setDivision(){
    teachAdvArray[1] = ui->teach_division->text().toStdString();
}

void teachAdvSearch::setProgram(){
    teachAdvArray[2] = ui->teach_program->text().toStdString();
}

void teachAdvSearch::on_buttonBox_rejected() {
    done(0);
}

void teachAdvSearch::on_buttonBox_accepted() {
    done(1);

}

void teachAdvSearch::on_teach_member_name_textChanged(){setMemberName();}
void teachAdvSearch::on_teach_program_textChanged(){setProgram();}
void teachAdvSearch::on_teach_division_textChanged(){setDivision();}
