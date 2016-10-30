/********************************************************************************
** Form generated from reading UI file 'ErrorEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROREDITDIALOG_H
#define UI_ERROREDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ErrorEditDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;

    void setupUi(QDialog *ErrorEditDialog)
    {
        if (ErrorEditDialog->objectName().isEmpty())
            ErrorEditDialog->setObjectName(QStringLiteral("ErrorEditDialog"));
        ErrorEditDialog->resize(810, 483);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ErrorEditDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(ErrorEditDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(ErrorEditDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 4);

        cancel = new QPushButton(ErrorEditDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        save = new QPushButton(ErrorEditDialog);
        save->setObjectName(QStringLiteral("save"));
        save->setMaximumSize(QSize(798, 16777215));

        gridLayout->addWidget(save, 2, 1, 1, 1);


        retranslateUi(ErrorEditDialog);

        QMetaObject::connectSlotsByName(ErrorEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorEditDialog)
    {
        ErrorEditDialog->setWindowTitle(QApplication::translate("ErrorEditDialog", "Edit Erroneous Fields", 0));
        cancel->setText(QApplication::translate("ErrorEditDialog", "Cancel", 0));
        save->setText(QApplication::translate("ErrorEditDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class ErrorEditDialog: public Ui_ErrorEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROREDITDIALOG_H
