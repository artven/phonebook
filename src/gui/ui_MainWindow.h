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
#include <QtWidgets/QComboBox>
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
    QWidget *NewRecordPage;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
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
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *cityLineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *phoneLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *mobileLineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *clearAddRecordPushButton;
    QPushButton *okAddRecordPushButton;
    QWidget *page_3;
    QLabel *label_3;
    QWidget *requestsPage;
    QTableView *requestsTableView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *accceptRequestToolButton;
    QToolButton *rejectRequestToolButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *newRequestsRadioButton;
    QRadioButton *acceptedRadioButton;
    QRadioButton *rejectedRequestsRadioButton;
    QRadioButton *allRequestsRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *showRequestsToolButton;
    QLabel *requestsLabel;
    QWidget *newUserPage;
    QGroupBox *groupBox_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *loginNewUserLineEdit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *emailNewUserLineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *passwordNewUserLineEdit;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *repeatPasswordLineEdit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_20;
    QComboBox *roleNewUserComboBox;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *clearNewUserPushButton;
    QPushButton *addNewUserPushButton;
    QWidget *page_6;
    QLabel *label_6;
    QWidget *changePasswordPage;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget4;
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
        stackedWidget->setGeometry(QRect(310, -40, 771, 611));
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
        NewRecordPage = new QWidget();
        NewRecordPage->setObjectName(QStringLiteral("NewRecordPage"));
        groupBox_3 = new QGroupBox(NewRecordPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 40, 461, 341));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 411, 278));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(nameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        horizontalSpacer_9 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        surnameLineEdit = new QLineEdit(layoutWidget);
        surnameLineEdit->setObjectName(QStringLiteral("surnameLineEdit"));
        sizePolicy1.setHeightForWidth(surnameLineEdit->sizePolicy().hasHeightForWidth());
        surnameLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(surnameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_10 = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        addressLineEdit = new QLineEdit(layoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        sizePolicy1.setHeightForWidth(addressLineEdit->sizePolicy().hasHeightForWidth());
        addressLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(addressLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_11->addWidget(label_10);

        horizontalSpacer_11 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        cityLineEdit = new QLineEdit(layoutWidget);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cityLineEdit->sizePolicy().hasHeightForWidth());
        cityLineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(cityLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);

        horizontalSpacer_12 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        phoneLineEdit = new QLineEdit(layoutWidget);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        sizePolicy2.setHeightForWidth(phoneLineEdit->sizePolicy().hasHeightForWidth());
        phoneLineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(phoneLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_13->addWidget(label_11);

        horizontalSpacer_13 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        mobileLineEdit = new QLineEdit(layoutWidget);
        mobileLineEdit->setObjectName(QStringLiteral("mobileLineEdit"));
        sizePolicy1.setHeightForWidth(mobileLineEdit->sizePolicy().hasHeightForWidth());
        mobileLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(mobileLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_14->addWidget(label_12);

        horizontalSpacer_14 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        emailLineEdit = new QLineEdit(layoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        sizePolicy1.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(emailLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_14);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        clearAddRecordPushButton = new QPushButton(layoutWidget);
        clearAddRecordPushButton->setObjectName(QStringLiteral("clearAddRecordPushButton"));

        horizontalLayout_15->addWidget(clearAddRecordPushButton);

        okAddRecordPushButton = new QPushButton(layoutWidget);
        okAddRecordPushButton->setObjectName(QStringLiteral("okAddRecordPushButton"));

        horizontalLayout_15->addWidget(okAddRecordPushButton);


        verticalLayout_3->addLayout(horizontalLayout_15);

        stackedWidget->addWidget(NewRecordPage);
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
        requestsTableView->setGeometry(QRect(40, 120, 700, 250));
        requestsTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        requestsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        requestsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        requestsTableView->setGridStyle(Qt::DashDotLine);
        requestsTableView->setSortingEnabled(true);
        requestsTableView->horizontalHeader()->setCascadingSectionResizes(true);
        requestsTableView->horizontalHeader()->setMinimumSectionSize(150);
        requestsTableView->verticalHeader()->setVisible(false);
        layoutWidget1 = new QWidget(requestsPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 390, 317, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        accceptRequestToolButton = new QToolButton(layoutWidget1);
        accceptRequestToolButton->setObjectName(QStringLiteral("accceptRequestToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/mainwindow/images/Checked-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        accceptRequestToolButton->setIcon(icon1);
        accceptRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(accceptRequestToolButton);

        rejectRequestToolButton = new QToolButton(layoutWidget1);
        rejectRequestToolButton->setObjectName(QStringLiteral("rejectRequestToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/mainwindow/images/Do Not Disturb-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        rejectRequestToolButton->setIcon(icon2);
        rejectRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(rejectRequestToolButton);

        layoutWidget2 = new QWidget(requestsPage);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 40, 701, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox = new QGroupBox(layoutWidget2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 20, 431, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        newRequestsRadioButton = new QRadioButton(layoutWidget3);
        newRequestsRadioButton->setObjectName(QStringLiteral("newRequestsRadioButton"));
        sizePolicy1.setHeightForWidth(newRequestsRadioButton->sizePolicy().hasHeightForWidth());
        newRequestsRadioButton->setSizePolicy(sizePolicy1);
        newRequestsRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(newRequestsRadioButton);

        acceptedRadioButton = new QRadioButton(layoutWidget3);
        acceptedRadioButton->setObjectName(QStringLiteral("acceptedRadioButton"));

        horizontalLayout_3->addWidget(acceptedRadioButton);

        rejectedRequestsRadioButton = new QRadioButton(layoutWidget3);
        rejectedRequestsRadioButton->setObjectName(QStringLiteral("rejectedRequestsRadioButton"));

        horizontalLayout_3->addWidget(rejectedRequestsRadioButton);

        allRequestsRadioButton = new QRadioButton(layoutWidget3);
        allRequestsRadioButton->setObjectName(QStringLiteral("allRequestsRadioButton"));

        horizontalLayout_3->addWidget(allRequestsRadioButton);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(83, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        showRequestsToolButton = new QToolButton(layoutWidget2);
        showRequestsToolButton->setObjectName(QStringLiteral("showRequestsToolButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/mainwindow/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        showRequestsToolButton->setIcon(icon3);
        showRequestsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(showRequestsToolButton);

        requestsLabel = new QLabel(requestsPage);
        requestsLabel->setObjectName(QStringLiteral("requestsLabel"));
        requestsLabel->setGeometry(QRect(30, 10, 143, 17));
        stackedWidget->addWidget(requestsPage);
        newUserPage = new QWidget();
        newUserPage->setObjectName(QStringLiteral("newUserPage"));
        groupBox_4 = new QGroupBox(newUserPage);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 110, 601, 291));
        widget = new QWidget(groupBox_4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 40, 481, 231));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_16->addWidget(label_13);

        horizontalSpacer_16 = new QSpacerItem(213, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);

        loginNewUserLineEdit = new QLineEdit(widget);
        loginNewUserLineEdit->setObjectName(QStringLiteral("loginNewUserLineEdit"));
        sizePolicy1.setHeightForWidth(loginNewUserLineEdit->sizePolicy().hasHeightForWidth());
        loginNewUserLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(loginNewUserLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_17->addWidget(label_14);

        horizontalSpacer_17 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        emailNewUserLineEdit = new QLineEdit(widget);
        emailNewUserLineEdit->setObjectName(QStringLiteral("emailNewUserLineEdit"));
        sizePolicy1.setHeightForWidth(emailNewUserLineEdit->sizePolicy().hasHeightForWidth());
        emailNewUserLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(emailNewUserLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_18->addWidget(label_15);

        horizontalSpacer_18 = new QSpacerItem(216, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        passwordNewUserLineEdit = new QLineEdit(widget);
        passwordNewUserLineEdit->setObjectName(QStringLiteral("passwordNewUserLineEdit"));
        sizePolicy1.setHeightForWidth(passwordNewUserLineEdit->sizePolicy().hasHeightForWidth());
        passwordNewUserLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_18->addWidget(passwordNewUserLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_19->addWidget(label_16);

        horizontalSpacer_19 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        repeatPasswordLineEdit = new QLineEdit(widget);
        repeatPasswordLineEdit->setObjectName(QStringLiteral("repeatPasswordLineEdit"));
        sizePolicy1.setHeightForWidth(repeatPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatPasswordLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_19->addWidget(repeatPasswordLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_20->addWidget(label_17);

        horizontalSpacer_20 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_20);

        roleNewUserComboBox = new QComboBox(widget);
        roleNewUserComboBox->setObjectName(QStringLiteral("roleNewUserComboBox"));
        sizePolicy2.setHeightForWidth(roleNewUserComboBox->sizePolicy().hasHeightForWidth());
        roleNewUserComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_20->addWidget(roleNewUserComboBox);


        verticalLayout_4->addLayout(horizontalLayout_20);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);

        clearNewUserPushButton = new QPushButton(widget);
        clearNewUserPushButton->setObjectName(QStringLiteral("clearNewUserPushButton"));

        horizontalLayout_21->addWidget(clearNewUserPushButton);

        addNewUserPushButton = new QPushButton(widget);
        addNewUserPushButton->setObjectName(QStringLiteral("addNewUserPushButton"));

        horizontalLayout_21->addWidget(addNewUserPushButton);


        verticalLayout_5->addLayout(horizontalLayout_21);

        stackedWidget->addWidget(newUserPage);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_6 = new QLabel(page_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 130, 201, 91));
        stackedWidget->addWidget(page_6);
        changePasswordPage = new QWidget();
        changePasswordPage->setObjectName(QStringLiteral("changePasswordPage"));
        label_7 = new QLabel(changePasswordPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 341, 121));
        groupBox_2 = new QGroupBox(changePasswordPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 90, 461, 211));
        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 40, 391, 161));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        oldPasswordLabel = new QLabel(layoutWidget4);
        oldPasswordLabel->setObjectName(QStringLiteral("oldPasswordLabel"));

        horizontalLayout_4->addWidget(oldPasswordLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        oldPasswordLineEdit = new QLineEdit(layoutWidget4);
        oldPasswordLineEdit->setObjectName(QStringLiteral("oldPasswordLineEdit"));

        horizontalLayout_4->addWidget(oldPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        newPasswordLabel = new QLabel(layoutWidget4);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));

        horizontalLayout_5->addWidget(newPasswordLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        newPasswordLineEdit = new QLineEdit(layoutWidget4);
        newPasswordLineEdit->setObjectName(QStringLiteral("newPasswordLineEdit"));

        horizontalLayout_5->addWidget(newPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        repeatPassowrLabel = new QLabel(layoutWidget4);
        repeatPassowrLabel->setObjectName(QStringLiteral("repeatPassowrLabel"));

        horizontalLayout_6->addWidget(repeatPassowrLabel);

        horizontalSpacer_6 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        repeatNewPasswordLineEdit = new QLineEdit(layoutWidget4);
        repeatNewPasswordLineEdit->setObjectName(QStringLiteral("repeatNewPasswordLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(repeatNewPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatNewPasswordLineEdit->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(repeatNewPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        okPasswordChangePushButton = new QPushButton(layoutWidget4);
        okPasswordChangePushButton->setObjectName(QStringLiteral("okPasswordChangePushButton"));

        horizontalLayout_7->addWidget(okPasswordChangePushButton);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(changePasswordPage);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1057, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ksi\304\205\305\274ka telefoniczna", 0));
        label->setText(QApplication::translate("MainWindow", "Przegl\304\205danie bazy danych", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Dodaj wpis do ksi\304\205\305\274ki telefonicznej:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Imi\304\231", 0));
#ifndef QT_NO_TOOLTIP
        nameLineEdit->setToolTip(QApplication::translate("MainWindow", "dupa 1234", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nameLineEdit->setStatusTip(QApplication::translate("MainWindow", "fasgasfasds", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        nameLineEdit->setWhatsThis(QApplication::translate("MainWindow", "asdasd", 0));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("MainWindow", "Nazwisko", 0));
        label_9->setText(QApplication::translate("MainWindow", "Adres", 0));
        label_10->setText(QApplication::translate("MainWindow", "Miasto", 0));
        label_2->setText(QApplication::translate("MainWindow", "Telefon", 0));
        label_11->setText(QApplication::translate("MainWindow", "Kom\303\263rka", 0));
        label_12->setText(QApplication::translate("MainWindow", "Email:", 0));
        clearAddRecordPushButton->setText(QApplication::translate("MainWindow", "Wyczy\305\233\304\207", 0));
        okAddRecordPushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0));
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
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Dodaj nowego u\305\274ytkownika", 0));
        label_13->setText(QApplication::translate("MainWindow", "Login:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Email:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Has\305\202o", 0));
        label_16->setText(QApplication::translate("MainWindow", "Powt\303\263rz has\305\202o", 0));
        label_17->setText(QApplication::translate("MainWindow", "Poziom uprawnie\305\204", 0));
        clearNewUserPushButton->setText(QApplication::translate("MainWindow", "Wyczy\305\233\304\207", 0));
        addNewUserPushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0));
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
