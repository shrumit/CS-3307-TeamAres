#ifndef LOAD_H
#define LOAD_H

#include <QDialog>

namespace Ui {
class load;
}

class load : public QDialog
{
    Q_OBJECT

public:
    explicit load(QWidget *parent = 0);
    ~load();


private:
    Ui::load *ui;
    void on_buttonBox_rejected();
    void on_buttonBox_accepted();
};

#endif // LOAD_H
