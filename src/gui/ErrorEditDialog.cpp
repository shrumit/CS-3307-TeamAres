#include "ui_ErrorEditDialog.h"
#include "ErrorEditDialog.h"

#include <QTableWidgetItem>
#include <QStringList>
#include <QDebug>
#include <QBrush>
#include <QColor>
#include <QAbstractButton>
#include <QMessageBox>

QBrush error_brush(QColor(255, 0, 0, 100));
QBrush modif_brush(QColor(0, 255, 0, 100));

/*
 * Load data contained in the errors vector into a QWidgetTable
 * Fields will be marked red and editable if they are a mandatory field
 * and editable.  Otherwise all other fields will not be editable.
 * Clicking Save in the dialog will return the corrected entries to the main
 * program through the errors parameter.  If not all marked fields are edited
 * then a warning message will be displayed.  If cancel is clicked all errors
 * are discarded.
 */
ErrorEditDialog::ErrorEditDialog(QWidget *parent,
                                 std::vector<std::vector<std::string>*>& errors,
                                 std::vector<std::string>& headers,
                                 std::vector<std::string>& mandatory) :
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint),
    errorList(errors),
    headerList(headers),
    mandatoryList(mandatory),
    ui(new Ui::ErrorEditDialog)
{
    error_lock = true;
    ui->setupUi(this);
    ui->tableWidget->setRowCount((int) errors.size());
    ui->tableWidget->setColumnCount((int) headers.size());

    QStringList listHeaders;
    for (int i = 0; i < (int) headers.size(); i++) {
        listHeaders << headers[i].c_str();
    }

    ui->tableWidget->setHorizontalHeaderLabels(listHeaders);
    QTableWidgetItem* item;
    std::vector<std::vector<std::string>*>::iterator it;
    int row = 0;
    for (it = errors.begin(); it != errors.end(); it++) {
        for (int col = 0; col < (int) headers.size() && col < (int) (*it)->size(); col++) {
            item = new QTableWidgetItem();
            Qt::ItemFlags flag = item->flags();
            item->setFlags(Qt::ItemIsSelectable);
            item->setText((*it)->at(col).c_str());
            for (int i = 0; i < (int) mandatory.size(); i++) {
                if (mandatory[i].compare(headers.at(col)) == 0
                        && (*it)->at(col).compare("") == 0) {
                    item->setBackground(error_brush);
                    item->setFlags(flag);
                    error_cells.insert(std::make_tuple(row,col));
                }
            }
            ui->tableWidget->setItem(row, col, item);
        }
        row++;
    }
    qDebug() << "errors:" << errors.size() << " / error_cells:" << error_cells.size();
    error_cells_original = error_cells; // preserve a copy of the original set
    ui->errorLabel->setText(QString::number(error_cells.size()) + "  mandatory cells missing");
    error_lock = false;
}

//Clean up allocated memory for the table items
ErrorEditDialog::~ErrorEditDialog()
{
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        for (int j = 0; j < ui->tableWidget->columnCount(); j++) {
            delete ui->tableWidget->item(i,j);
        }
    }
    delete ui;
}

//Save the new data entered by the user via the error reference var
void ErrorEditDialog::saveData() {
    for (int row = 0; row < ui->tableWidget->rowCount(); row++) {
        for (int col = 0; col < ui->tableWidget->columnCount() && col < (int) errorList[row]->size(); col++) {
            std::vector<std::string>::iterator it = errorList[row]->begin()+col;
            if (errorList[row]->at(col).compare("") == 0) {
                it = errorList[row]->erase(it);
                errorList[row]->insert(it, ui->tableWidget->item(row, col)->text().toStdString());
            }
        }
    }
    accept();
}

void ErrorEditDialog::on_save_clicked()
{
    bool search = true;
    //check if mandatory fields have been filled
    for (int row = 0; row < ui->tableWidget->rowCount() && search; row++) {
        for (int j = 0; j < (int) mandatoryList.size() && search; j++) {
            std::vector<std::string>::iterator it = std::find(headerList.begin(), headerList.end(), mandatoryList[j]);
            int col = it - headerList.begin();
            QTableWidgetItem* item = ui->tableWidget->item(row, col);
            if (item->text().compare("") == 0) {
                QMessageBox::critical(this, "Error", "Mandatory fields are still empty.");
                search = false;
            }
        }
    }
    if (search) {
        saveData();
    }
}

void ErrorEditDialog::on_findNext_clicked()
{
    nextprevHandler(true);
}

void ErrorEditDialog::on_findPrev_clicked()
{
    nextprevHandler(false);
}

// Selects next or previous cell
void ErrorEditDialog::nextprevHandler(bool next)
{
    if (error_cells.size() == 0)
        return;

    // get current cell
    int row = ui->tableWidget->currentRow();
    int col = ui->tableWidget->currentColumn();
    std::set<std::tuple<int,int>>::iterator it;

    // get successsor/predecessor to current cell in error_cells
    if (row == -1) {
        it = error_cells.begin();
    }
    else {
        it = error_cells.find(std::make_tuple(row,col));

        if (next) { // if "Next" button
            if (it == error_cells.end()) { // if the current cell is no longer erroneous
                it = error_cells.lower_bound(std::make_tuple(row,col));
            }
            else { // current cell still erroneous, so increment
                it++;
                if (it == error_cells.end())
                    it = error_cells.begin(); // jump to begin
            }
        }

        else { // if "Previous" button
            if (it == error_cells.end()) { // if the current cell is no longer erroneous
                it = error_cells.upper_bound(std::make_tuple(row,col));
            }
            else { // current cell still erroneous, so decrement
                if (it == error_cells.begin())
                    it = error_cells.end(); // jump to end
                it--;
            }
        }
    }

    // set new current cell
    int nrow = std::get<0>(*it);
    int ncol = std::get<1>(*it);
    QTableWidgetItem* item = ui->tableWidget->item(nrow, ncol);
    ui->tableWidget->scrollToItem(item);
    ui->tableWidget->clearSelection();
    ui->tableWidget->setCurrentItem(item);
    item->setSelected(true);
    ui->tableWidget->editItem(item);
}

void ErrorEditDialog::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    // constructor is modfying item
    if (error_lock)
        return;

    // check whether cell used to be an error
    std::set<std::tuple<int,int>>::iterator it;
    it = error_cells_original.find(std::make_tuple(item->row(),item->column()));
    if (it == error_cells_original.end())
        return;

    if (item->text().compare("") == 0) {
        error_cells.insert(std::make_tuple(item->row(),item->column()));
        item->setBackground(error_brush);
        ui->errorLabel->setText(QString::number(error_cells.size()) + " mandatory cells missing");
    } else {
        error_cells.erase(std::make_tuple(item->row(),item->column()));
        item->setBackground(modif_brush);
        ui->errorLabel->setText(QString::number(error_cells.size()) + " mandatory cells missing");
    }

    qDebug() << item->column() << "," << item->row();
}

void ErrorEditDialog::on_cancel_clicked()
{
    reject();
}
