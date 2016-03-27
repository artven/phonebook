/********************************************************************************
** Form generated from reading UI file 'RequestsForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTSFORM_H
#define UI_REQUESTSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestsForm
{
public:
    QGroupBox *groupBox_8;
    QTableView *requestsTableView;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *accceptRequestToolButton;
    QToolButton *rejectRequestToolButton;
    QGroupBox *groupBox;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *waitingRequestsRadioButton;
    QRadioButton *acceptedRequestsRadioButton;
    QRadioButton *rejectedRequestsRadioButton;
    QRadioButton *allRequestsRadioButton;

    void setupUi(QWidget *RequestsForm)
    {
        if (RequestsForm->objectName().isEmpty())
            RequestsForm->setObjectName(QStringLiteral("RequestsForm"));
        RequestsForm->resize(720, 470);
        RequestsForm->setMinimumSize(QSize(720, 470));
        RequestsForm->setMaximumSize(QSize(720, 470));
        groupBox_8 = new QGroupBox(RequestsForm);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 700, 450));
        requestsTableView = new QTableView(groupBox_8);
        requestsTableView->setObjectName(QStringLiteral("requestsTableView"));
        requestsTableView->setGeometry(QRect(20, 100, 650, 270));
        requestsTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        requestsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        requestsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        requestsTableView->setGridStyle(Qt::DashDotLine);
        requestsTableView->setSortingEnabled(true);
        requestsTableView->horizontalHeader()->setCascadingSectionResizes(true);
        requestsTableView->horizontalHeader()->setDefaultSectionSize(150);
        requestsTableView->horizontalHeader()->setMinimumSectionSize(30);
        requestsTableView->verticalHeader()->setVisible(false);
        layoutWidget_4 = new QWidget(groupBox_8);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(170, 400, 317, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        accceptRequestToolButton = new QToolButton(layoutWidget_4);
        accceptRequestToolButton->setObjectName(QStringLiteral("accceptRequestToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/mainwindow/images/Checked-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        accceptRequestToolButton->setIcon(icon);
        accceptRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(accceptRequestToolButton);

        rejectRequestToolButton = new QToolButton(layoutWidget_4);
        rejectRequestToolButton->setObjectName(QStringLiteral("rejectRequestToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/mainwindow/images/Do Not Disturb-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        rejectRequestToolButton->setIcon(icon1);
        rejectRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(rejectRequestToolButton);

        groupBox = new QGroupBox(groupBox_8);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 20, 511, 69));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        layoutWidget_6 = new QWidget(groupBox);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(40, 20, 452, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        waitingRequestsRadioButton = new QRadioButton(layoutWidget_6);
        waitingRequestsRadioButton->setObjectName(QStringLiteral("waitingRequestsRadioButton"));

        horizontalLayout_3->addWidget(waitingRequestsRadioButton);

        acceptedRequestsRadioButton = new QRadioButton(layoutWidget_6);
        acceptedRequestsRadioButton->setObjectName(QStringLiteral("acceptedRequestsRadioButton"));
        acceptedRequestsRadioButton->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(acceptedRequestsRadioButton);

        rejectedRequestsRadioButton = new QRadioButton(layoutWidget_6);
        rejectedRequestsRadioButton->setObjectName(QStringLiteral("rejectedRequestsRadioButton"));
        rejectedRequestsRadioButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(rejectedRequestsRadioButton);

        allRequestsRadioButton = new QRadioButton(layoutWidget_6);
        allRequestsRadioButton->setObjectName(QStringLiteral("allRequestsRadioButton"));
        allRequestsRadioButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(allRequestsRadioButton);


        retranslateUi(RequestsForm);

        QMetaObject::connectSlotsByName(RequestsForm);
    } // setupUi

    void retranslateUi(QWidget *RequestsForm)
    {
        RequestsForm->setWindowTitle(QApplication::translate("RequestsForm", "Form", 0));
        groupBox_8->setTitle(QApplication::translate("RequestsForm", "Przegl\304\205daj wnioski", 0));
        accceptRequestToolButton->setText(QApplication::translate("RequestsForm", "Zakceptuj wniosek", 0));
        rejectRequestToolButton->setText(QApplication::translate("RequestsForm", "Odrzu\304\207 wniosek", 0));
        groupBox->setTitle(QApplication::translate("RequestsForm", "Status wniosku", 0));
        waitingRequestsRadioButton->setText(QApplication::translate("RequestsForm", "oczekuj\304\205cy", 0));
        acceptedRequestsRadioButton->setText(QApplication::translate("RequestsForm", "zaakceptowany", 0));
        rejectedRequestsRadioButton->setText(QApplication::translate("RequestsForm", "odrzucony", 0));
        allRequestsRadioButton->setText(QApplication::translate("RequestsForm", "wszystkie", 0));
    } // retranslateUi

};

namespace Ui {
    class RequestsForm: public Ui_RequestsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTSFORM_H
