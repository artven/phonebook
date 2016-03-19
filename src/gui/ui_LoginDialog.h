/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *loginLabel;
    QLabel *passwordLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *loginLineEdit;
    QLineEdit *passwordLineEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *accountPushButton;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(500, 190);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDialog->sizePolicy().hasHeightForWidth());
        LoginDialog->setSizePolicy(sizePolicy);
        LoginDialog->setMinimumSize(QSize(500, 190));
        LoginDialog->setMaximumSize(QSize(500, 190));
        LoginDialog->setFocusPolicy(Qt::TabFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/explorer.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        LoginDialog->setModal(false);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 11, 380, 160));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 371, 92));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        loginLabel = new QLabel(layoutWidget);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));

        verticalLayout_4->addWidget(loginLabel);

        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(passwordLabel);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        loginLineEdit = new QLineEdit(layoutWidget);
        loginLineEdit->setObjectName(QStringLiteral("loginLineEdit"));
        loginLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(loginLineEdit);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        verticalLayout_2->addWidget(passwordLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 120, 287, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        accountPushButton = new QPushButton(layoutWidget_2);
        accountPushButton->setObjectName(QStringLiteral("accountPushButton"));

        horizontalLayout_2->addWidget(accountPushButton);

        cancelPushButton = new QPushButton(layoutWidget_2);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_2->addWidget(cancelPushButton);

        okPushButton = new QPushButton(layoutWidget_2);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_2->addWidget(okPushButton);

        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 61, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logindialog/images/key.png")));
        label->setScaledContents(true);
        QWidget::setTabOrder(loginLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, okPushButton);
        QWidget::setTabOrder(okPushButton, cancelPushButton);
        QWidget::setTabOrder(cancelPushButton, accountPushButton);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Logowanie", 0));
        groupBox->setTitle(QApplication::translate("LoginDialog", "  Podaj nazw\304\231 u\305\274ytkownika i has\305\202o:", 0));
        loginLabel->setText(QApplication::translate("LoginDialog", "Nazwa u\305\274tykownika:", 0));
        passwordLabel->setText(QApplication::translate("LoginDialog", "Has\305\202o:", 0));
        accountPushButton->setText(QApplication::translate("LoginDialog", "Nowe konto", 0));
        cancelPushButton->setText(QApplication::translate("LoginDialog", "Anuluj", 0));
        okPushButton->setText(QApplication::translate("LoginDialog", "Ok", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
