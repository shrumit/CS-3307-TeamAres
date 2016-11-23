#ifndef PRESADVSEARCH_H
#define PRESADVSEARCH_H

#include <QDialog>

namespace Ui {
class presAdvSearch;
}

class presAdvSearch : public QDialog
{
    Q_OBJECT

public:
    explicit presAdvSearch(QWidget *parent = 0);
    ~presAdvSearch();
    std::string getMemberName();
    std::string getType();
    std::string getRole();
    std::string getTitle();
    std::string presAdvArray [4] = {"","","",""};

private slots:

    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
    void on_pres_member_name_textChanged();
    void on_pres_type_textChanged();
    void on_pres_role_textChanged();
    void on_pres_title_textChanged();

private:
    Ui::presAdvSearch *ui;
    void setMemberName();
    void setType();
    void setRole();
    void setTitle();
};

#endif // PRESADVSEARCH_H
