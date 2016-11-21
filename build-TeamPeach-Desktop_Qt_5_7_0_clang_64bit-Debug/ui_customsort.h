/********************************************************************************
** Form generated from reading UI file 'customsort.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMSORT_H
#define UI_CUSTOMSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CustomSort
{
public:
    QGridLayout *gridLayout;
    QComboBox *field_5;
    QComboBox *field_4;
    QComboBox *field_3;
    QComboBox *field_2;
    QLineEdit *sort_name;
    QLabel *sort_label;
    QLabel *label_2;
    QLabel *label;
    QComboBox *field_1;
    QDialogButtonBox *buttonBox;
    QComboBox *field_0;
    QSpacerItem *verticalSpacer;
    QComboBox *field_6;

    void setupUi(QDialog *CustomSort)
    {
        if (CustomSort->objectName().isEmpty())
            CustomSort->setObjectName(QStringLiteral("CustomSort"));
        CustomSort->resize(284, 312);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CustomSort->setWindowIcon(icon);
        gridLayout = new QGridLayout(CustomSort);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        field_5 = new QComboBox(CustomSort);
        field_5->setObjectName(QStringLiteral("field_5"));

        gridLayout->addWidget(field_5, 9, 0, 1, 2);

        field_4 = new QComboBox(CustomSort);
        field_4->setObjectName(QStringLiteral("field_4"));

        gridLayout->addWidget(field_4, 8, 0, 1, 2);

        field_3 = new QComboBox(CustomSort);
        field_3->setObjectName(QStringLiteral("field_3"));

        gridLayout->addWidget(field_3, 7, 0, 1, 2);

        field_2 = new QComboBox(CustomSort);
        field_2->setObjectName(QStringLiteral("field_2"));

        gridLayout->addWidget(field_2, 6, 0, 1, 2);

        sort_name = new QLineEdit(CustomSort);
        sort_name->setObjectName(QStringLiteral("sort_name"));

        gridLayout->addWidget(sort_name, 2, 0, 1, 2);

        sort_label = new QLabel(CustomSort);
        sort_label->setObjectName(QStringLiteral("sort_label"));
        sort_label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(sort_label, 0, 0, 1, 2);

        label_2 = new QLabel(CustomSort);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 2);

        label = new QLabel(CustomSort);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        field_1 = new QComboBox(CustomSort);
        field_1->setObjectName(QStringLiteral("field_1"));

        gridLayout->addWidget(field_1, 5, 0, 1, 2);

        buttonBox = new QDialogButtonBox(CustomSort);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 12, 1, 1, 1);

        field_0 = new QComboBox(CustomSort);
        field_0->setObjectName(QStringLiteral("field_0"));

        gridLayout->addWidget(field_0, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 1, 1, 1);

        field_6 = new QComboBox(CustomSort);
        field_6->setObjectName(QStringLiteral("field_6"));

        gridLayout->addWidget(field_6, 10, 0, 1, 2);


        retranslateUi(CustomSort);

        QMetaObject::connectSlotsByName(CustomSort);
    } // setupUi

    void retranslateUi(QDialog *CustomSort)
    {
        CustomSort->setWindowTitle(QApplication::translate("CustomSort", "Create New Sort Order", 0));
        sort_label->setText(QApplication::translate("CustomSort", "<html><head/><body><p><span style=\" font-weight:600;\">New Custom Sort Order</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("CustomSort", "Select order:", 0));
        label->setText(QApplication::translate("CustomSort", "Enter name of new custom sort:", 0));
        field_0->clear();
        field_0->insertItems(0, QStringList()
         << QString()
        );
    } // retranslateUi

};

namespace Ui {
    class CustomSort: public Ui_CustomSort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMSORT_H
