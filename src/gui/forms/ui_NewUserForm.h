/********************************************************************************
** Form generated from reading UI file 'NewUserForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERFORM_H
#define UI_NEWUSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_NewUserForm
{
public:
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *loginLineEdit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *repeatPasswordLineEdit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_20;
    QComboBox *roleComboBox;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_21;
    QToolButton *clearToolButton;
    QToolButton *addToolButton;

    void setupUi(QWidget *NewUserForm)
    {
        if (NewUserForm->objectName().isEmpty())
            NewUserForm->setObjectName(QStringLiteral("NewUserForm"));
        NewUserForm->resize(620, 300);
        NewUserForm->setMinimumSize(QSize(620, 300));
        NewUserForm->setMaximumSize(QSize(620, 300));
        groupBox_4 = new QGroupBox(NewUserForm);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 600, 280));
        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(60, 30, 481, 231));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_13 = new QLabel(layoutWidget_7);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_16->addWidget(label_13);

        horizontalSpacer_16 = new QSpacerItem(213, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);

        loginLineEdit = new QLineEdit(layoutWidget_7);
        loginLineEdit->setObjectName(QStringLiteral("loginLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginLineEdit->sizePolicy().hasHeightForWidth());
        loginLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(loginLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_14 = new QLabel(layoutWidget_7);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_17->addWidget(label_14);

        horizontalSpacer_17 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        emailLineEdit = new QLineEdit(layoutWidget_7);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(emailLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_15 = new QLabel(layoutWidget_7);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_18->addWidget(label_15);

        horizontalSpacer_18 = new QSpacerItem(216, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        passwordLineEdit = new QLineEdit(layoutWidget_7);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_18->addWidget(passwordLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_16 = new QLabel(layoutWidget_7);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_19->addWidget(label_16);

        horizontalSpacer_19 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        repeatPasswordLineEdit = new QLineEdit(layoutWidget_7);
        repeatPasswordLineEdit->setObjectName(QStringLiteral("repeatPasswordLineEdit"));
        sizePolicy.setHeightForWidth(repeatPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatPasswordLineEdit->setSizePolicy(sizePolicy);
        repeatPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_19->addWidget(repeatPasswordLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_17 = new QLabel(layoutWidget_7);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_20->addWidget(label_17);

        horizontalSpacer_20 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_20);

        roleComboBox = new QComboBox(layoutWidget_7);
        roleComboBox->setObjectName(QStringLiteral("roleComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(roleComboBox->sizePolicy().hasHeightForWidth());
        roleComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_20->addWidget(roleComboBox);


        verticalLayout_4->addLayout(horizontalLayout_20);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);

        clearToolButton = new QToolButton(layoutWidget_7);
        clearToolButton->setObjectName(QStringLiteral("clearToolButton"));
        clearToolButton->setMinimumSize(QSize(100, 0));
        clearToolButton->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        clearToolButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/mainwindow/images/Close Window-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearToolButton->setIcon(icon);
        clearToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        clearToolButton->setAutoRaise(true);

        horizontalLayout_21->addWidget(clearToolButton);

        addToolButton = new QToolButton(layoutWidget_7);
        addToolButton->setObjectName(QStringLiteral("addToolButton"));
        addToolButton->setMinimumSize(QSize(100, 0));
        addToolButton->setMaximumSize(QSize(100, 16777215));
        addToolButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/mainwindow/images/Checked-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        addToolButton->setIcon(icon1);
        addToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        addToolButton->setAutoRaise(true);
        addToolButton->setArrowType(Qt::NoArrow);

        horizontalLayout_21->addWidget(addToolButton);


        verticalLayout_5->addLayout(horizontalLayout_21);


        retranslateUi(NewUserForm);

        QMetaObject::connectSlotsByName(NewUserForm);
    } // setupUi

    void retranslateUi(QWidget *NewUserForm)
    {
        NewUserForm->setWindowTitle(QApplication::translate("NewUserForm", "Form", 0));
        groupBox_4->setTitle(QApplication::translate("NewUserForm", "Dodaj nowego u\305\274ytkownika", 0));
        label_13->setText(QApplication::translate("NewUserForm", "Login:", 0));
        label_14->setText(QApplication::translate("NewUserForm", "Email:", 0));
        label_15->setText(QApplication::translate("NewUserForm", "Has\305\202o", 0));
        label_16->setText(QApplication::translate("NewUserForm", "Powt\303\263rz has\305\202o", 0));
        label_17->setText(QApplication::translate("NewUserForm", "Poziom uprawnie\305\204", 0));
#ifndef QT_NO_TOOLTIP
        roleComboBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        clearToolButton->setText(QApplication::translate("NewUserForm", "Wyczy\305\233\304\207", 0));
        addToolButton->setText(QApplication::translate("NewUserForm", "Dodaj", 0));
    } // retranslateUi

};

namespace Ui {
    class NewUserForm: public Ui_NewUserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERFORM_H
