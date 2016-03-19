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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *loginLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *loginLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *emailLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *emailLineEdit;
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
        UserAccountDialog->resize(497, 413);
        widget = new QWidget(UserAccountDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 100, 331, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loginLabel = new QLabel(widget);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));

        horizontalLayout->addWidget(loginLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginLineEdit = new QLineEdit(widget);
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
        emailLabel = new QLabel(widget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        horizontalLayout_2->addWidget(emailLabel);

        horizontalSpacer_2 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        emailLineEdit = new QLineEdit(widget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(emailLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        roleLabel = new QLabel(widget);
        roleLabel->setObjectName(QStringLiteral("roleLabel"));

        horizontalLayout_3->addWidget(roleLabel);

        horizontalSpacer_3 = new QSpacerItem(29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        roleComboBox = new QComboBox(widget);
        roleComboBox->setObjectName(QStringLiteral("roleComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(49);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(roleComboBox->sizePolicy().hasHeightForWidth());
        roleComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(roleComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        cancelPushButton = new QPushButton(widget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_4->addWidget(cancelPushButton);

        okPushButton = new QPushButton(widget);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_4->addWidget(okPushButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(UserAccountDialog);

        QMetaObject::connectSlotsByName(UserAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *UserAccountDialog)
    {
        UserAccountDialog->setWindowTitle(QApplication::translate("UserAccountDialog", "Dialog", 0));
        loginLabel->setText(QApplication::translate("UserAccountDialog", "Nazwa u\305\274ytkownika", 0));
        emailLabel->setText(QApplication::translate("UserAccountDialog", "Email", 0));
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
