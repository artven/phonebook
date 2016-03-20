/********************************************************************************
** Form generated from reading UI file 'UserAccountDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNTDIALOG_H
#define UI_USERACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserAccountDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *loginLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *loginLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *emailLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *passwordLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *repeatPasswordLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *repeatPasswordLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *roleLabel;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *roleComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;

    void setupUi(QDialog *UserAccountDialog)
    {
        if (UserAccountDialog->objectName().isEmpty())
            UserAccountDialog->setObjectName(QStringLiteral("UserAccountDialog"));
        UserAccountDialog->setWindowModality(Qt::WindowModal);
        UserAccountDialog->resize(394, 353);
        UserAccountDialog->setFocusPolicy(Qt::TabFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/mainwindow/images/Contacts-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserAccountDialog->setWindowIcon(icon);
        UserAccountDialog->setModal(true);
        layoutWidget = new QWidget(UserAccountDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loginLabel = new QLabel(layoutWidget);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));

        horizontalLayout->addWidget(loginLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginLineEdit = new QLineEdit(layoutWidget);
        loginLineEdit->setObjectName(QStringLiteral("loginLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginLineEdit->sizePolicy().hasHeightForWidth());
        loginLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(loginLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        horizontalLayout_2->addWidget(emailLabel);

        horizontalSpacer_2 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        emailLineEdit = new QLineEdit(layoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(emailLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        horizontalLayout_5->addWidget(passwordLabel);

        horizontalSpacer_5 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        repeatPasswordLabel = new QLabel(layoutWidget);
        repeatPasswordLabel->setObjectName(QStringLiteral("repeatPasswordLabel"));

        horizontalLayout_6->addWidget(repeatPasswordLabel);

        horizontalSpacer_6 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        repeatPasswordLineEdit = new QLineEdit(layoutWidget);
        repeatPasswordLineEdit->setObjectName(QStringLiteral("repeatPasswordLineEdit"));
        sizePolicy.setHeightForWidth(repeatPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatPasswordLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(repeatPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        roleLabel = new QLabel(layoutWidget);
        roleLabel->setObjectName(QStringLiteral("roleLabel"));

        horizontalLayout_3->addWidget(roleLabel);

        horizontalSpacer_3 = new QSpacerItem(29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        roleComboBox = new QComboBox(layoutWidget);
        roleComboBox->setObjectName(QStringLiteral("roleComboBox"));
        roleComboBox->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(49);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(roleComboBox->sizePolicy().hasHeightForWidth());
        roleComboBox->setSizePolicy(sizePolicy1);
        roleComboBox->setEditable(false);

        horizontalLayout_3->addWidget(roleComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        cancelPushButton = new QPushButton(layoutWidget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_4->addWidget(cancelPushButton);

        okPushButton = new QPushButton(layoutWidget);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_4->addWidget(okPushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(loginLineEdit, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, repeatPasswordLineEdit);
        QWidget::setTabOrder(repeatPasswordLineEdit, roleComboBox);
        QWidget::setTabOrder(roleComboBox, okPushButton);
        QWidget::setTabOrder(okPushButton, cancelPushButton);

        retranslateUi(UserAccountDialog);

        QMetaObject::connectSlotsByName(UserAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *UserAccountDialog)
    {
        UserAccountDialog->setWindowTitle(QApplication::translate("UserAccountDialog", "Dialog", 0));
        loginLabel->setText(QApplication::translate("UserAccountDialog", "Nazwa u\305\274ytkownika", 0));
        emailLabel->setText(QApplication::translate("UserAccountDialog", "Email", 0));
        passwordLabel->setText(QApplication::translate("UserAccountDialog", "Has\305\202o", 0));
        repeatPasswordLabel->setText(QApplication::translate("UserAccountDialog", "Powt\303\263rz has\305\202o", 0));
        roleLabel->setText(QApplication::translate("UserAccountDialog", "Poziom uprawnie\305\204", 0));
        cancelPushButton->setText(QApplication::translate("UserAccountDialog", "Anuluj", 0));
        okPushButton->setText(QApplication::translate("UserAccountDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class UserAccountDialog: public Ui_UserAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNTDIALOG_H
