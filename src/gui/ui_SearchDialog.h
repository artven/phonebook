/********************************************************************************
** Form generated from reading UI file 'SearchDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_SearchDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *cancelPushButton;
    QPushButton *searchPushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *surnameLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *cityLineEdit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *phoneLineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *mobileLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *emailLineEdit;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QStringLiteral("SearchDialog"));
        SearchDialog->resize(290, 296);
        SearchDialog->setFocusPolicy(Qt::TabFocus);
        SearchDialog->setModal(true);
        widget = new QWidget(SearchDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 260, 178, 28));
        horizontalLayout_15 = new QHBoxLayout(widget);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        cancelPushButton = new QPushButton(widget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_15->addWidget(cancelPushButton);

        searchPushButton = new QPushButton(widget);
        searchPushButton->setObjectName(QStringLiteral("searchPushButton"));

        horizontalLayout_15->addWidget(searchPushButton);

        widget1 = new QWidget(SearchDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 266, 241));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(75, 0));
        label_4->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_8->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        nameLineEdit = new QLineEdit(widget1);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy1);
        nameLineEdit->setMinimumSize(QSize(125, 0));
        nameLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_8->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(75, 0));
        label_8->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_9->addWidget(label_8);

        horizontalSpacer_9 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        surnameLineEdit = new QLineEdit(widget1);
        surnameLineEdit->setObjectName(QStringLiteral("surnameLineEdit"));
        sizePolicy1.setHeightForWidth(surnameLineEdit->sizePolicy().hasHeightForWidth());
        surnameLineEdit->setSizePolicy(sizePolicy1);
        surnameLineEdit->setMinimumSize(QSize(125, 0));
        surnameLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_9->addWidget(surnameLineEdit);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(75, 0));
        label_9->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_10 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        addressLineEdit = new QLineEdit(widget1);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        sizePolicy1.setHeightForWidth(addressLineEdit->sizePolicy().hasHeightForWidth());
        addressLineEdit->setSizePolicy(sizePolicy1);
        addressLineEdit->setMinimumSize(QSize(125, 0));
        addressLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_10->addWidget(addressLineEdit);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(75, 0));
        label_5->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_16->addWidget(label_5);

        horizontalSpacer_16 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);

        cityLineEdit = new QLineEdit(widget1);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        sizePolicy1.setHeightForWidth(cityLineEdit->sizePolicy().hasHeightForWidth());
        cityLineEdit->setSizePolicy(sizePolicy1);
        cityLineEdit->setMinimumSize(QSize(125, 0));
        cityLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_16->addWidget(cityLineEdit);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_13 = new QLabel(widget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(75, 0));
        label_13->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_17->addWidget(label_13);

        horizontalSpacer_17 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        phoneLineEdit = new QLineEdit(widget1);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        sizePolicy1.setHeightForWidth(phoneLineEdit->sizePolicy().hasHeightForWidth());
        phoneLineEdit->setSizePolicy(sizePolicy1);
        phoneLineEdit->setMinimumSize(QSize(125, 0));
        phoneLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_17->addWidget(phoneLineEdit);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_14 = new QLabel(widget1);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(75, 0));
        label_14->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_18->addWidget(label_14);

        horizontalSpacer_18 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        mobileLineEdit = new QLineEdit(widget1);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        sizePolicy1.setHeightForWidth(mobileLineEdit->sizePolicy().hasHeightForWidth());
        mobileLineEdit->setSizePolicy(sizePolicy1);
        mobileLineEdit->setMinimumSize(QSize(125, 0));
        mobileLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_18->addWidget(mobileLineEdit);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_12 = new QLabel(widget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(75, 0));
        label_12->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_14->addWidget(label_12);

        horizontalSpacer_14 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        emailLineEdit = new QLineEdit(widget1);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy1.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy1);
        emailLineEdit->setMinimumSize(QSize(125, 0));
        emailLineEdit->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_14->addWidget(emailLineEdit);


        verticalLayout->addLayout(horizontalLayout_14);

        QWidget::setTabOrder(nameLineEdit, surnameLineEdit);
        QWidget::setTabOrder(surnameLineEdit, addressLineEdit);
        QWidget::setTabOrder(addressLineEdit, cityLineEdit);
        QWidget::setTabOrder(cityLineEdit, phoneLineEdit);
        QWidget::setTabOrder(phoneLineEdit, mobileLineEdit);
        QWidget::setTabOrder(mobileLineEdit, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, searchPushButton);
        QWidget::setTabOrder(searchPushButton, cancelPushButton);

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Szukaj", 0));
        cancelPushButton->setText(QApplication::translate("SearchDialog", "Anuluj", 0));
        searchPushButton->setText(QApplication::translate("SearchDialog", "Szukaj", 0));
        label_4->setText(QApplication::translate("SearchDialog", "Imi\304\231", 0));
#ifndef QT_NO_TOOLTIP
        nameLineEdit->setToolTip(QApplication::translate("SearchDialog", "dupa 1234", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nameLineEdit->setStatusTip(QApplication::translate("SearchDialog", "fasgasfasds", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        nameLineEdit->setWhatsThis(QApplication::translate("SearchDialog", "asdasd", 0));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("SearchDialog", "Nazwisko", 0));
        label_9->setText(QApplication::translate("SearchDialog", "Adres", 0));
        label_5->setText(QApplication::translate("SearchDialog", "Miasto", 0));
#ifndef QT_NO_TOOLTIP
        cityLineEdit->setToolTip(QApplication::translate("SearchDialog", "dupa 1234", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cityLineEdit->setStatusTip(QApplication::translate("SearchDialog", "fasgasfasds", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cityLineEdit->setWhatsThis(QApplication::translate("SearchDialog", "asdasd", 0));
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("SearchDialog", "Telefon", 0));
        label_14->setText(QApplication::translate("SearchDialog", "Kom\303\263rka", 0));
        label_12->setText(QApplication::translate("SearchDialog", "  Email:", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
