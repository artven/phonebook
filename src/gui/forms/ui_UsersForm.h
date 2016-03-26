/********************************************************************************
** Form generated from reading UI file 'UsersForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSFORM_H
#define UI_USERSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsersForm
{
public:
    QGroupBox *groupBox_6;
    QToolButton *showAllUsersToolButton;
    QTableView *usersTableView;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_18;
    QLineEdit *userIdLineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_22;
    QLabel *userLoginLabel;
    QLineEdit *userLoginLineEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_23;
    QLabel *userEmailLabel;
    QLineEdit *userEmailLineEdit;
    QToolButton *saveUserToolButton;

    void setupUi(QWidget *UsersForm)
    {
        if (UsersForm->objectName().isEmpty())
            UsersForm->setObjectName(QStringLiteral("UsersForm"));
        UsersForm->resize(730, 470);
        groupBox_6 = new QGroupBox(UsersForm);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 700, 450));
        showAllUsersToolButton = new QToolButton(groupBox_6);
        showAllUsersToolButton->setObjectName(QStringLiteral("showAllUsersToolButton"));
        showAllUsersToolButton->setGeometry(QRect(50, 30, 141, 25));
        usersTableView = new QTableView(groupBox_6);
        usersTableView->setObjectName(QStringLiteral("usersTableView"));
        usersTableView->setGeometry(QRect(50, 60, 600, 251));
        usersTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        usersTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        usersTableView->horizontalHeader()->setDefaultSectionSize(150);
        usersTableView->verticalHeader()->setVisible(false);
        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 320, 651, 111));
        layoutWidget_3 = new QWidget(groupBox_7);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 30, 171, 29));
        horizontalLayout_26 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_26->addWidget(label_18);

        userIdLineEdit = new QLineEdit(layoutWidget_3);
        userIdLineEdit->setObjectName(QStringLiteral("userIdLineEdit"));
        userIdLineEdit->setEnabled(false);

        horizontalLayout_26->addWidget(userIdLineEdit);

        layoutWidget = new QWidget(groupBox_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 30, 221, 29));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        userLoginLabel = new QLabel(layoutWidget);
        userLoginLabel->setObjectName(QStringLiteral("userLoginLabel"));
        userLoginLabel->setMinimumSize(QSize(50, 0));
        userLoginLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_22->addWidget(userLoginLabel);

        userLoginLineEdit = new QLineEdit(layoutWidget);
        userLoginLineEdit->setObjectName(QStringLiteral("userLoginLineEdit"));
        userLoginLineEdit->setMinimumSize(QSize(150, 0));
        userLoginLineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_22->addWidget(userLoginLineEdit);

        layoutWidget_2 = new QWidget(groupBox_7);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(430, 30, 211, 29));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        userEmailLabel = new QLabel(layoutWidget_2);
        userEmailLabel->setObjectName(QStringLiteral("userEmailLabel"));
        userEmailLabel->setMinimumSize(QSize(50, 0));
        userEmailLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_23->addWidget(userEmailLabel);

        userEmailLineEdit = new QLineEdit(layoutWidget_2);
        userEmailLineEdit->setObjectName(QStringLiteral("userEmailLineEdit"));
        userEmailLineEdit->setMinimumSize(QSize(150, 0));
        userEmailLineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_23->addWidget(userEmailLineEdit);

        saveUserToolButton = new QToolButton(groupBox_7);
        saveUserToolButton->setObjectName(QStringLiteral("saveUserToolButton"));
        saveUserToolButton->setGeometry(QRect(250, 70, 150, 26));
        saveUserToolButton->setMinimumSize(QSize(150, 0));
        saveUserToolButton->setMaximumSize(QSize(150, 16777215));

        retranslateUi(UsersForm);

        QMetaObject::connectSlotsByName(UsersForm);
    } // setupUi

    void retranslateUi(QWidget *UsersForm)
    {
        UsersForm->setWindowTitle(QApplication::translate("UsersForm", "Form", 0));
        groupBox_6->setTitle(QApplication::translate("UsersForm", "Edytuj u\305\274ytkownik\303\263w", 0));
        showAllUsersToolButton->setText(QApplication::translate("UsersForm", "Poka\305\274 wszystkich", 0));
        groupBox_7->setTitle(QApplication::translate("UsersForm", "Edytuj u\305\274ytkownika", 0));
        label_18->setText(QApplication::translate("UsersForm", "Id:", 0));
        userLoginLabel->setText(QApplication::translate("UsersForm", "Login:", 0));
        userEmailLabel->setText(QApplication::translate("UsersForm", "Email", 0));
        saveUserToolButton->setText(QApplication::translate("UsersForm", "Zapisz", 0));
    } // retranslateUi

};

namespace Ui {
    class UsersForm: public Ui_UsersForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSFORM_H
