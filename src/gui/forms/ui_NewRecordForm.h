/********************************************************************************
** Form generated from reading UI file 'NewRecordForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWRECORDFORM_H
#define UI_NEWRECORDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewRecordForm
{
public:
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *nameLabel;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *surnameLabel;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *surnameLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *addressLabel;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *cityLabel;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *cityLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *phoneLabel;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *phoneLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *mobileLabel;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *mobileLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *emailLabel;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *clearFieldsPushButton;
    QPushButton *addRecordPushButton;

    void setupUi(QWidget *NewRecordForm)
    {
        if (NewRecordForm->objectName().isEmpty())
            NewRecordForm->setObjectName(QStringLiteral("NewRecordForm"));
        NewRecordForm->resize(520, 370);
        groupBox_3 = new QGroupBox(NewRecordForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 500, 350));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 411, 278));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_8->addWidget(nameLabel);

        horizontalSpacer_8 = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        surnameLabel = new QLabel(layoutWidget);
        surnameLabel->setObjectName(QStringLiteral("surnameLabel"));

        horizontalLayout_9->addWidget(surnameLabel);

        horizontalSpacer_9 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        surnameLineEdit = new QLineEdit(layoutWidget);
        surnameLineEdit->setObjectName(QStringLiteral("surnameLineEdit"));
        sizePolicy.setHeightForWidth(surnameLineEdit->sizePolicy().hasHeightForWidth());
        surnameLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(surnameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        addressLabel = new QLabel(layoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        horizontalLayout_10->addWidget(addressLabel);

        horizontalSpacer_10 = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        addressLineEdit = new QLineEdit(layoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        sizePolicy.setHeightForWidth(addressLineEdit->sizePolicy().hasHeightForWidth());
        addressLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(addressLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        cityLabel = new QLabel(layoutWidget);
        cityLabel->setObjectName(QStringLiteral("cityLabel"));

        horizontalLayout_11->addWidget(cityLabel);

        horizontalSpacer_11 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        cityLineEdit = new QLineEdit(layoutWidget);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cityLineEdit->sizePolicy().hasHeightForWidth());
        cityLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(cityLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        phoneLabel = new QLabel(layoutWidget);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));

        horizontalLayout_12->addWidget(phoneLabel);

        horizontalSpacer_12 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        phoneLineEdit = new QLineEdit(layoutWidget);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        sizePolicy1.setHeightForWidth(phoneLineEdit->sizePolicy().hasHeightForWidth());
        phoneLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(phoneLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        mobileLabel = new QLabel(layoutWidget);
        mobileLabel->setObjectName(QStringLiteral("mobileLabel"));

        horizontalLayout_13->addWidget(mobileLabel);

        horizontalSpacer_13 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        mobileLineEdit = new QLineEdit(layoutWidget);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        sizePolicy.setHeightForWidth(mobileLineEdit->sizePolicy().hasHeightForWidth());
        mobileLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(mobileLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        horizontalLayout_14->addWidget(emailLabel);

        horizontalSpacer_14 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        emailLineEdit = new QLineEdit(layoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(emailLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_14);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        clearFieldsPushButton = new QPushButton(layoutWidget);
        clearFieldsPushButton->setObjectName(QStringLiteral("clearFieldsPushButton"));

        horizontalLayout_15->addWidget(clearFieldsPushButton);

        addRecordPushButton = new QPushButton(layoutWidget);
        addRecordPushButton->setObjectName(QStringLiteral("addRecordPushButton"));

        horizontalLayout_15->addWidget(addRecordPushButton);


        verticalLayout_3->addLayout(horizontalLayout_15);


        retranslateUi(NewRecordForm);

        QMetaObject::connectSlotsByName(NewRecordForm);
    } // setupUi

    void retranslateUi(QWidget *NewRecordForm)
    {
        NewRecordForm->setWindowTitle(QApplication::translate("NewRecordForm", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("NewRecordForm", "Dodaj wpis do ksi\304\205\305\274ki telefonicznej:", 0));
        nameLabel->setText(QApplication::translate("NewRecordForm", "Imi\304\231", 0));
#ifndef QT_NO_TOOLTIP
        nameLineEdit->setToolTip(QApplication::translate("NewRecordForm", "dupa 1234", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nameLineEdit->setStatusTip(QApplication::translate("NewRecordForm", "fasgasfasds", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        nameLineEdit->setWhatsThis(QApplication::translate("NewRecordForm", "asdasd", 0));
#endif // QT_NO_WHATSTHIS
        surnameLabel->setText(QApplication::translate("NewRecordForm", "Nazwisko", 0));
        addressLabel->setText(QApplication::translate("NewRecordForm", "Adres", 0));
        cityLabel->setText(QApplication::translate("NewRecordForm", "Miasto", 0));
        phoneLabel->setText(QApplication::translate("NewRecordForm", "Telefon", 0));
        mobileLabel->setText(QApplication::translate("NewRecordForm", "Kom\303\263rka", 0));
        emailLabel->setText(QApplication::translate("NewRecordForm", "Email:", 0));
        clearFieldsPushButton->setText(QApplication::translate("NewRecordForm", "Wyczy\305\233\304\207", 0));
        addRecordPushButton->setText(QApplication::translate("NewRecordForm", "Dodaj", 0));
    } // retranslateUi

};

namespace Ui {
    class NewRecordForm: public Ui_NewRecordForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWRECORDFORM_H
