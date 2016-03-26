/********************************************************************************
** Form generated from reading UI file 'ChangePasswordForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDFORM_H
#define UI_CHANGEPASSWORDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordForm
{
public:
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *oldPasswordLabel;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *oldPasswordLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *newPasswordLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *newPasswordLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *repeatPassowrLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *repeatPasswordLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *okToolButton;

    void setupUi(QWidget *ChangePasswordForm)
    {
        if (ChangePasswordForm->objectName().isEmpty())
            ChangePasswordForm->setObjectName(QStringLiteral("ChangePasswordForm"));
        ChangePasswordForm->resize(470, 220);
        ChangePasswordForm->setMinimumSize(QSize(470, 220));
        ChangePasswordForm->setMaximumSize(QSize(470, 220));
        groupBox_2 = new QGroupBox(ChangePasswordForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 450, 200));
        layoutWidget_8 = new QWidget(groupBox_2);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(30, 30, 391, 161));
        verticalLayout = new QVBoxLayout(layoutWidget_8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        oldPasswordLabel = new QLabel(layoutWidget_8);
        oldPasswordLabel->setObjectName(QStringLiteral("oldPasswordLabel"));

        horizontalLayout_4->addWidget(oldPasswordLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        oldPasswordLineEdit = new QLineEdit(layoutWidget_8);
        oldPasswordLineEdit->setObjectName(QStringLiteral("oldPasswordLineEdit"));
        oldPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(oldPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        newPasswordLabel = new QLabel(layoutWidget_8);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));

        horizontalLayout_5->addWidget(newPasswordLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        newPasswordLineEdit = new QLineEdit(layoutWidget_8);
        newPasswordLineEdit->setObjectName(QStringLiteral("newPasswordLineEdit"));
        newPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(newPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        repeatPassowrLabel = new QLabel(layoutWidget_8);
        repeatPassowrLabel->setObjectName(QStringLiteral("repeatPassowrLabel"));

        horizontalLayout_6->addWidget(repeatPassowrLabel);

        horizontalSpacer_6 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        repeatPasswordLineEdit = new QLineEdit(layoutWidget_8);
        repeatPasswordLineEdit->setObjectName(QStringLiteral("repeatPasswordLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(repeatPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatPasswordLineEdit->setSizePolicy(sizePolicy);
        repeatPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(repeatPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        okToolButton = new QToolButton(layoutWidget_8);
        okToolButton->setObjectName(QStringLiteral("okToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/mainwindow/images/Checked-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        okToolButton->setIcon(icon);

        horizontalLayout_7->addWidget(okToolButton);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(ChangePasswordForm);

        QMetaObject::connectSlotsByName(ChangePasswordForm);
    } // setupUi

    void retranslateUi(QWidget *ChangePasswordForm)
    {
        ChangePasswordForm->setWindowTitle(QApplication::translate("ChangePasswordForm", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("ChangePasswordForm", "Zmiana has\305\202a", 0));
        oldPasswordLabel->setText(QApplication::translate("ChangePasswordForm", "Stare has\305\202o", 0));
        newPasswordLabel->setText(QApplication::translate("ChangePasswordForm", "Nowe has\305\202o", 0));
        repeatPassowrLabel->setText(QApplication::translate("ChangePasswordForm", "Powt\303\263rz has\305\202o", 0));
        okToolButton->setText(QApplication::translate("ChangePasswordForm", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordForm: public Ui_ChangePasswordForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDFORM_H
