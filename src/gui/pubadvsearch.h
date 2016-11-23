#ifndef PUBADVSEARCH_H
#define PUBADVSEARCH_H

#include <QDialog>

namespace Ui {
class pubAdvSearch;
}

class pubAdvSearch : public QDialog
{
    Q_OBJECT

public:
    explicit pubAdvSearch(QWidget *parent = 0);
    ~pubAdvSearch();
    std::string getMemberName();
    std::string getType();
    std::string getRole();
    std::string getTitle();
    std::string pubAdvArray [4] = {"","","",""};

private slots:

    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
    void on_pub_member_name_textChanged();
    void on_pub_type_textChanged();
    void on_pub_role_textChanged();
    void on_pub_title_textChanged();

private:
    Ui::pubAdvSearch *ui;
    void setMemberName();
    void setType();
    void setRole();
    void setTitle();
};

#endif // PUBADVSEARCH_H
