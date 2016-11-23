#ifndef FUNDADVSEARCH_H
#define FUNDADVSEARCH_H

#include <QDialog>

namespace Ui {
class fundAdvSearch;
}

class fundAdvSearch : public QDialog
{
    Q_OBJECT

public:
    explicit fundAdvSearch(QWidget *parent = 0);
    ~fundAdvSearch();
    std::string getMemberName();
    std::string getFundingType();
    std::string getStatus();
    std::string getRole();
    std::string getTitle();
    std::vector<std::string> fundAdvArray = {"","","","",""};

private slots:

    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
    void on_fund_member_name_textChanged();
    void on_fund_funding_type_textChanged();
    void on_fund_status_textChanged();
    void on_fund_role_textChanged();
    void on_fund_title_textChanged();

private:
    Ui::fundAdvSearch *ui;
    void setMemberName();
    void setFundingType();
    void setStatus();
    void setRole();
    void setTitle();
};

#endif // FUNDADVSEARCH_H
