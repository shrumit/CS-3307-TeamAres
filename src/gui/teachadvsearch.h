#ifndef TEACHADVSEARCH_H
#define TEACHADVSEARCH_H

#include <QDialog>
#include <string>

namespace Ui {
class teachAdvSearch;
}

class teachAdvSearch : public QDialog
{
    Q_OBJECT

public:
    explicit teachAdvSearch(QWidget *parent = 0);
    ~teachAdvSearch();
    std::string getMemberName();
    std::string getProgram();
    std::string getDivision();
    std::string teachAdvArray [3] = {"","",""};

private slots:

    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
    void on_teach_member_name_textChanged();
    void on_teach_program_textChanged();
    void on_teach_division_textChanged();

private:
    Ui::teachAdvSearch *ui; 
    void setMemberName();
    void setDivision();
    void setProgram();
};

#endif // TEACHADVSEARCH_H
