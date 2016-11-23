#ifndef ERROREDITDIALOG_H
#define ERROREDITDIALOG_H

#include <QDialog>
#include <QTableWidgetItem>
#include <vector>
#include <string>
#include <set>
#include <tuple>

class QAbstractButton;

namespace Ui {
    class ErrorEditDialog;
}

class ErrorEditDialog : public QDialog
{
    Q_OBJECT

public:
     ErrorEditDialog(QWidget *parent,
                     std::vector<std::vector<std::string>*>& errors,
                     std::vector<std::string>& headers,
                     std::vector<std::string>& mandatory);
    ~ErrorEditDialog();

private slots:
     void on_save_clicked();
     void on_cancel_clicked();
     void on_findNext_clicked();
     void on_findPrev_clicked();
     void on_tableWidget_itemChanged(QTableWidgetItem *item);

private:
    std::vector<std::vector<std::string>*> errorList;
    std::vector<std::string> headerList;
    std::vector<std::string> mandatoryList;
    std::set<std::tuple<int,int>> error_cells;
    std::set<std::tuple<int,int>> error_cells_original;
    Ui::ErrorEditDialog *ui;
    bool error_lock = false;

    void saveData();
    void nextprevHandler(bool next);
};

#endif // ERROREDITDIALOG_H
