/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QTreeView *menuTreeView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QWidget *requestsPage;
    QTableView *requestsTableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *accceptRequestToolButton;
    QToolButton *rejectRequestToolButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *newRequestsRadioButton;
    QRadioButton *acceptedRadioButton;
    QRadioButton *rejectedRequestsRadioButton;
    QRadioButton *allRequestsRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *showRequestsToolButton;
    QLabel *requestsLabel;
    QWidget *page_5;
    QLabel *label_5;
    QWidget *page_6;
    QLabel *label_6;
    QWidget *page_7;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QWidget *widget2;
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
    QLineEdit *repeatNewPasswordLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *okPasswordChangePushButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1057, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/mainwindow/images/Contacts-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1091, 611));
        menuTreeView = new QTreeView(frame);
        menuTreeView->setObjectName(QStringLiteral("menuTreeView"));
        menuTreeView->setGeometry(QRect(10, 10, 300, 431));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuTreeView->sizePolicy().hasHeightForWidth());
        menuTreeView->setSizePolicy(sizePolicy);
        menuTreeView->setMinimumSize(QSize(300, 0));
        QFont font;
        font.setPointSize(12);
        menuTreeView->setFont(font);
        menuTreeView->setFocusPolicy(Qt::NoFocus);
        menuTreeView->setItemsExpandable(false);
        menuTreeView->header()->setVisible(false);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(320, 0, 771, 611));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setFrameShape(QFrame::Panel);
        stackedWidget->setFrameShadow(QFrame::Sunken);
        stackedWidget->setLineWidth(0);
        stackedWidget->setMidLineWidth(0);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 561, 231));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 100, 431, 131));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 90, 421, 141));
        stackedWidget->addWidget(page_3);
        requestsPage = new QWidget();
        requestsPage->setObjectName(QStringLiteral("requestsPage"));
        requestsTableView = new QTableView(requestsPage);
        requestsTableView->setObjectName(QStringLiteral("requestsTableView"));
        requestsTableView->setGeometry(QRect(10, 120, 700, 250));
        requestsTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        requestsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        requestsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        requestsTableView->setGridStyle(Qt::DashDotLine);
        requestsTableView->setSortingEnabled(true);
        requestsTableView->horizontalHeader()->setCascadingSectionResizes(true);
        requestsTableView->horizontalHeader()->setMinimumSectionSize(150);
        requestsTableView->verticalHeader()->setVisible(false);
        widget = new QWidget(requestsPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 390, 317, 34));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        accceptRequestToolButton = new QToolButton(widget);
        accceptRequestToolButton->setObjectName(QStringLiteral("accceptRequestToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/mainwindow/images/Checked-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        accceptRequestToolButton->setIcon(icon1);
        accceptRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(accceptRequestToolButton);

        rejectRequestToolButton = new QToolButton(widget);
        rejectRequestToolButton->setObjectName(QStringLiteral("rejectRequestToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/mainwindow/images/Do Not Disturb-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        rejectRequestToolButton->setIcon(icon2);
        rejectRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(rejectRequestToolButton);

        widget1 = new QWidget(requestsPage);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 40, 711, 71));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 431, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        newRequestsRadioButton = new QRadioButton(layoutWidget);
        newRequestsRadioButton->setObjectName(QStringLiteral("newRequestsRadioButton"));
        newRequestsRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(newRequestsRadioButton);

        acceptedRadioButton = new QRadioButton(layoutWidget);
        acceptedRadioButton->setObjectName(QStringLiteral("acceptedRadioButton"));

        horizontalLayout_3->addWidget(acceptedRadioButton);

        rejectedRequestsRadioButton = new QRadioButton(layoutWidget);
        rejectedRequestsRadioButton->setObjectName(QStringLiteral("rejectedRequestsRadioButton"));

        horizontalLayout_3->addWidget(rejectedRequestsRadioButton);

        allRequestsRadioButton = new QRadioButton(layoutWidget);
        allRequestsRadioButton->setObjectName(QStringLiteral("allRequestsRadioButton"));

        horizontalLayout_3->addWidget(allRequestsRadioButton);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(83, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        showRequestsToolButton = new QToolButton(widget1);
        showRequestsToolButton->setObjectName(QStringLiteral("showRequestsToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/mainwindow/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        showRequestsToolButton->setIcon(icon3);
        showRequestsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(showRequestsToolButton);

        requestsLabel = new QLabel(requestsPage);
        requestsLabel->setObjectName(QStringLiteral("requestsLabel"));
        requestsLabel->setGeometry(QRect(1, 11, 143, 17));
        stackedWidget->addWidget(requestsPage);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 110, 211, 91));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_6 = new QLabel(page_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 130, 201, 91));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_7 = new QLabel(page_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 341, 121));
        groupBox_2 = new QGroupBox(page_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 90, 461, 211));
        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 40, 391, 161));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        oldPasswordLabel = new QLabel(widget2);
        oldPasswordLabel->setObjectName(QStringLiteral("oldPasswordLabel"));

        horizontalLayout_4->addWidget(oldPasswordLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        oldPasswordLineEdit = new QLineEdit(widget2);
        oldPasswordLineEdit->setObjectName(QStringLiteral("oldPasswordLineEdit"));

        horizontalLayout_4->addWidget(oldPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        newPasswordLabel = new QLabel(widget2);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));

        horizontalLayout_5->addWidget(newPasswordLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        newPasswordLineEdit = new QLineEdit(widget2);
        newPasswordLineEdit->setObjectName(QStringLiteral("newPasswordLineEdit"));

        horizontalLayout_5->addWidget(newPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        repeatPassowrLabel = new QLabel(widget2);
        repeatPassowrLabel->setObjectName(QStringLiteral("repeatPassowrLabel"));

        horizontalLayout_6->addWidget(repeatPassowrLabel);

        horizontalSpacer_6 = new QSpacerItem(134, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        repeatNewPasswordLineEdit = new QLineEdit(widget2);
        repeatNewPasswordLineEdit->setObjectName(QStringLiteral("repeatNewPasswordLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(repeatNewPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatNewPasswordLineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(repeatNewPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        okPasswordChangePushButton = new QPushButton(widget2);
        okPasswordChangePushButton->setObjectName(QStringLiteral("okPasswordChangePushButton"));

        horizontalLayout_7->addWidget(okPasswordChangePushButton);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_7);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1057, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ksi\304\205\305\274ka telefoniczna", 0));
        label->setText(QApplication::translate("MainWindow", "Przegl\304\205danie bazy danych", 0));
        label_2->setText(QApplication::translate("MainWindow", "Dodawanie nowego wpisu do ksi\304\205\305\274ki telefonicznej", 0));
        label_3->setText(QApplication::translate("MainWindow", "Edytuj u\305\274ytkownik\303\263w", 0));
        accceptRequestToolButton->setText(QApplication::translate("MainWindow", "Zakceptuj wniosek", 0));
        rejectRequestToolButton->setText(QApplication::translate("MainWindow", "Odrzu\304\207 wniosek", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Status wniosku", 0));
        newRequestsRadioButton->setText(QApplication::translate("MainWindow", "nowy", 0));
        acceptedRadioButton->setText(QApplication::translate("MainWindow", "zaakceptowany", 0));
        rejectedRequestsRadioButton->setText(QApplication::translate("MainWindow", "odrzucony", 0));
        allRequestsRadioButton->setText(QApplication::translate("MainWindow", "wszystkie", 0));
        showRequestsToolButton->setText(QApplication::translate("MainWindow", "Poka\305\274 wnioski", 0));
        requestsLabel->setText(QApplication::translate("MainWindow", "Wnioski o nowe konta", 0));
        label_5->setText(QApplication::translate("MainWindow", "nowy operator", 0));
        label_6->setText(QApplication::translate("MainWindow", "Edycja danych", 0));
        label_7->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Zmiana has\305\202a", 0));
        oldPasswordLabel->setText(QApplication::translate("MainWindow", "Stare has\305\202o", 0));
        newPasswordLabel->setText(QApplication::translate("MainWindow", "Nowe has\305\202o", 0));
        repeatPassowrLabel->setText(QApplication::translate("MainWindow", "Powt\303\263rz has\305\202o", 0));
        okPasswordChangePushButton->setText(QApplication::translate("MainWindow", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
