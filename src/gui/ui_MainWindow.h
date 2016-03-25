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
    QStackedWidget *stackedWidget;
    QWidget *browseRecords;
    QGroupBox *groupBox_5;
    QTableView *phonesTableView;
    QFrame *browseButtonsFrame;
    QHBoxLayout *horizontalLayout_24;
    QToolButton *showAllPhonesToolButton;
    QToolButton *searchPhonesValuesToolButton;
    QToolButton *clearPhonesValuesToolButton;
    QWidget *newRecordPage;
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
    QWidget *browseUsersPage;
    QGroupBox *groupBox_6;
    QToolButton *showAllUsersToolButton;
    QTableView *usersTableView;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_18;
    QLineEdit *userIdLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_22;
    QLabel *userLoginLabel;
    QLineEdit *userLoginLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_23;
    QLabel *userEmailLabel;
    QLineEdit *userEmailLineEdit;
    QToolButton *saveUserToolButton;
    QWidget *requestsPage;
    QGroupBox *groupBox_8;
    QTableView *requestsTableView;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *accceptRequestToolButton;
    QToolButton *rejectRequestToolButton;
    QGroupBox *groupBox;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *newRequestsRadioButton;
    QRadioButton *acceptedRadioButton;
    QRadioButton *rejectedRequestsRadioButton;
    QRadioButton *allRequestsRadioButton;
    QToolButton *showRequestsToolButton;
    QWidget *newUserPage;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_7;
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
    QLineEdit *repeatNewPasswordLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *okPasswordChangePushButton;
    QTreeView *menuTreeView;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 570);
        QIcon icon;
        icon.addFile(QStringLiteral(":/mainwindow/images/Contacts-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(350, 10, 750, 600));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setFrameShape(QFrame::Panel);
        stackedWidget->setFrameShadow(QFrame::Sunken);
        stackedWidget->setLineWidth(0);
        stackedWidget->setMidLineWidth(0);
        browseRecords = new QWidget();
        browseRecords->setObjectName(QStringLiteral("browseRecords"));
        groupBox_5 = new QGroupBox(browseRecords);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 20, 700, 500));
        phonesTableView = new QTableView(groupBox_5);
        phonesTableView->setObjectName(QStringLiteral("phonesTableView"));
        phonesTableView->setGeometry(QRect(50, 120, 600, 341));
        phonesTableView->setGridStyle(Qt::DashLine);
        phonesTableView->setSortingEnabled(true);
        phonesTableView->horizontalHeader()->setCascadingSectionResizes(false);
        phonesTableView->horizontalHeader()->setDefaultSectionSize(150);
        phonesTableView->horizontalHeader()->setHighlightSections(true);
        phonesTableView->verticalHeader()->setVisible(false);
        phonesTableView->verticalHeader()->setHighlightSections(false);
        browseButtonsFrame = new QFrame(groupBox_5);
        browseButtonsFrame->setObjectName(QStringLiteral("browseButtonsFrame"));
        browseButtonsFrame->setGeometry(QRect(100, 50, 481, 50));
        horizontalLayout_24 = new QHBoxLayout(browseButtonsFrame);
        horizontalLayout_24->setSpacing(10);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        showAllPhonesToolButton = new QToolButton(browseButtonsFrame);
        showAllPhonesToolButton->setObjectName(QStringLiteral("showAllPhonesToolButton"));
        showAllPhonesToolButton->setMinimumSize(QSize(150, 0));
        showAllPhonesToolButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_24->addWidget(showAllPhonesToolButton);

        searchPhonesValuesToolButton = new QToolButton(browseButtonsFrame);
        searchPhonesValuesToolButton->setObjectName(QStringLiteral("searchPhonesValuesToolButton"));
        searchPhonesValuesToolButton->setMinimumSize(QSize(150, 0));
        searchPhonesValuesToolButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_24->addWidget(searchPhonesValuesToolButton);

        clearPhonesValuesToolButton = new QToolButton(browseButtonsFrame);
        clearPhonesValuesToolButton->setObjectName(QStringLiteral("clearPhonesValuesToolButton"));
        clearPhonesValuesToolButton->setMinimumSize(QSize(150, 0));
        clearPhonesValuesToolButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_24->addWidget(clearPhonesValuesToolButton);

        stackedWidget->addWidget(browseRecords);
        newRecordPage = new QWidget();
        newRecordPage->setObjectName(QStringLiteral("newRecordPage"));
        groupBox_3 = new QGroupBox(newRecordPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(130, 60, 500, 350));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 411, 278));
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

        stackedWidget->addWidget(newRecordPage);
        browseUsersPage = new QWidget();
        browseUsersPage->setObjectName(QStringLiteral("browseUsersPage"));
        groupBox_6 = new QGroupBox(browseUsersPage);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 20, 701, 471));
        showAllUsersToolButton = new QToolButton(groupBox_6);
        showAllUsersToolButton->setObjectName(QStringLiteral("showAllUsersToolButton"));
        showAllUsersToolButton->setGeometry(QRect(50, 30, 141, 25));
        usersTableView = new QTableView(groupBox_6);
        usersTableView->setObjectName(QStringLiteral("usersTableView"));
        usersTableView->setGeometry(QRect(50, 60, 600, 251));
        usersTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        usersTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        usersTableView->horizontalHeader()->setDefaultSectionSize(150);
        usersTableView->verticalHeader()->setVisible(false);
        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 320, 651, 111));
        layoutWidget_3 = new QWidget(groupBox_7);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 30, 171, 29));
        horizontalLayout_26 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_26->addWidget(label_18);

        userIdLineEdit = new QLineEdit(layoutWidget_3);
        userIdLineEdit->setObjectName(QStringLiteral("userIdLineEdit"));
        userIdLineEdit->setEnabled(false);

        horizontalLayout_26->addWidget(userIdLineEdit);

        layoutWidget1 = new QWidget(groupBox_7);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 30, 221, 29));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        userLoginLabel = new QLabel(layoutWidget1);
        userLoginLabel->setObjectName(QStringLiteral("userLoginLabel"));
        userLoginLabel->setMinimumSize(QSize(50, 0));
        userLoginLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_22->addWidget(userLoginLabel);

        userLoginLineEdit = new QLineEdit(layoutWidget1);
        userLoginLineEdit->setObjectName(QStringLiteral("userLoginLineEdit"));
        userLoginLineEdit->setMinimumSize(QSize(150, 0));
        userLoginLineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_22->addWidget(userLoginLineEdit);

        layoutWidget2 = new QWidget(groupBox_7);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(430, 30, 211, 29));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        userEmailLabel = new QLabel(layoutWidget2);
        userEmailLabel->setObjectName(QStringLiteral("userEmailLabel"));
        userEmailLabel->setMinimumSize(QSize(50, 0));
        userEmailLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_23->addWidget(userEmailLabel);

        userEmailLineEdit = new QLineEdit(layoutWidget2);
        userEmailLineEdit->setObjectName(QStringLiteral("userEmailLineEdit"));
        userEmailLineEdit->setMinimumSize(QSize(150, 0));
        userEmailLineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_23->addWidget(userEmailLineEdit);

        saveUserToolButton = new QToolButton(groupBox_7);
        saveUserToolButton->setObjectName(QStringLiteral("saveUserToolButton"));
        saveUserToolButton->setGeometry(QRect(250, 70, 150, 26));
        saveUserToolButton->setMinimumSize(QSize(150, 0));
        saveUserToolButton->setMaximumSize(QSize(150, 16777215));
        stackedWidget->addWidget(browseUsersPage);
        requestsPage = new QWidget();
        requestsPage->setObjectName(QStringLiteral("requestsPage"));
        groupBox_8 = new QGroupBox(requestsPage);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 701, 450));
        requestsTableView = new QTableView(groupBox_8);
        requestsTableView->setObjectName(QStringLiteral("requestsTableView"));
        requestsTableView->setGeometry(QRect(30, 140, 650, 250));
        requestsTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        requestsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        requestsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        requestsTableView->setGridStyle(Qt::DashDotLine);
        requestsTableView->setSortingEnabled(true);
        requestsTableView->horizontalHeader()->setCascadingSectionResizes(true);
        requestsTableView->horizontalHeader()->setMinimumSectionSize(150);
        requestsTableView->verticalHeader()->setVisible(false);
        layoutWidget_4 = new QWidget(groupBox_8);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(210, 400, 317, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        accceptRequestToolButton = new QToolButton(layoutWidget_4);
        accceptRequestToolButton->setObjectName(QStringLiteral("accceptRequestToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/mainwindow/images/Checked-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        accceptRequestToolButton->setIcon(icon1);
        accceptRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(accceptRequestToolButton);

        rejectRequestToolButton = new QToolButton(layoutWidget_4);
        rejectRequestToolButton->setObjectName(QStringLiteral("rejectRequestToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/mainwindow/images/Do Not Disturb-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        rejectRequestToolButton->setIcon(icon2);
        rejectRequestToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(rejectRequestToolButton);

        groupBox = new QGroupBox(groupBox_8);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 50, 435, 69));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        layoutWidget_6 = new QWidget(groupBox);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(0, 20, 431, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        newRequestsRadioButton = new QRadioButton(layoutWidget_6);
        newRequestsRadioButton->setObjectName(QStringLiteral("newRequestsRadioButton"));
        sizePolicy1.setHeightForWidth(newRequestsRadioButton->sizePolicy().hasHeightForWidth());
        newRequestsRadioButton->setSizePolicy(sizePolicy1);
        newRequestsRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(newRequestsRadioButton);

        acceptedRadioButton = new QRadioButton(layoutWidget_6);
        acceptedRadioButton->setObjectName(QStringLiteral("acceptedRadioButton"));

        horizontalLayout_3->addWidget(acceptedRadioButton);

        rejectedRequestsRadioButton = new QRadioButton(layoutWidget_6);
        rejectedRequestsRadioButton->setObjectName(QStringLiteral("rejectedRequestsRadioButton"));

        horizontalLayout_3->addWidget(rejectedRequestsRadioButton);

        allRequestsRadioButton = new QRadioButton(layoutWidget_6);
        allRequestsRadioButton->setObjectName(QStringLiteral("allRequestsRadioButton"));

        horizontalLayout_3->addWidget(allRequestsRadioButton);

        showRequestsToolButton = new QToolButton(groupBox_8);
        showRequestsToolButton->setObjectName(QStringLiteral("showRequestsToolButton"));
        showRequestsToolButton->setGeometry(QRect(530, 75, 133, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/mainwindow/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        showRequestsToolButton->setIcon(icon3);
        showRequestsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        stackedWidget->addWidget(requestsPage);
        newUserPage = new QWidget();
        newUserPage->setObjectName(QStringLiteral("newUserPage"));
        groupBox_4 = new QGroupBox(newUserPage);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 110, 601, 291));
        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(60, 40, 481, 231));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
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
        label_13 = new QLabel(layoutWidget_7);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_16->addWidget(label_13);

        horizontalSpacer_16 = new QSpacerItem(213, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);

        loginNewUserLineEdit = new QLineEdit(layoutWidget_7);
        loginNewUserLineEdit->setObjectName(QStringLiteral("loginNewUserLineEdit"));
        sizePolicy1.setHeightForWidth(loginNewUserLineEdit->sizePolicy().hasHeightForWidth());
        loginNewUserLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(loginNewUserLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_14 = new QLabel(layoutWidget_7);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_17->addWidget(label_14);

        horizontalSpacer_17 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        emailNewUserLineEdit = new QLineEdit(layoutWidget_7);
        emailNewUserLineEdit->setObjectName(QStringLiteral("emailNewUserLineEdit"));
        sizePolicy1.setHeightForWidth(emailNewUserLineEdit->sizePolicy().hasHeightForWidth());
        emailNewUserLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(emailNewUserLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_15 = new QLabel(layoutWidget_7);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_18->addWidget(label_15);

        horizontalSpacer_18 = new QSpacerItem(216, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        passwordNewUserLineEdit = new QLineEdit(layoutWidget_7);
        passwordNewUserLineEdit->setObjectName(QStringLiteral("passwordNewUserLineEdit"));
        sizePolicy1.setHeightForWidth(passwordNewUserLineEdit->sizePolicy().hasHeightForWidth());
        passwordNewUserLineEdit->setSizePolicy(sizePolicy1);
        passwordNewUserLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_18->addWidget(passwordNewUserLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_16 = new QLabel(layoutWidget_7);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_19->addWidget(label_16);

        horizontalSpacer_19 = new QSpacerItem(162, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        repeatPasswordLineEdit = new QLineEdit(layoutWidget_7);
        repeatPasswordLineEdit->setObjectName(QStringLiteral("repeatPasswordLineEdit"));
        sizePolicy1.setHeightForWidth(repeatPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatPasswordLineEdit->setSizePolicy(sizePolicy1);
        repeatPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_19->addWidget(repeatPasswordLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_17 = new QLabel(layoutWidget_7);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_20->addWidget(label_17);

        horizontalSpacer_20 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_20);

        roleNewUserComboBox = new QComboBox(layoutWidget_7);
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

        clearNewUserPushButton = new QPushButton(layoutWidget_7);
        clearNewUserPushButton->setObjectName(QStringLiteral("clearNewUserPushButton"));

        horizontalLayout_21->addWidget(clearNewUserPushButton);

        addNewUserPushButton = new QPushButton(layoutWidget_7);
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
        groupBox_2 = new QGroupBox(changePasswordPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 90, 461, 211));
        layoutWidget_8 = new QWidget(groupBox_2);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 40, 391, 161));
        verticalLayout = new QVBoxLayout(layoutWidget_8);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
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
        horizontalLayout_5->setSpacing(6);
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
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        repeatPassowrLabel = new QLabel(layoutWidget_8);
        repeatPassowrLabel->setObjectName(QStringLiteral("repeatPassowrLabel"));

        horizontalLayout_6->addWidget(repeatPassowrLabel);

        horizontalSpacer_6 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        repeatNewPasswordLineEdit = new QLineEdit(layoutWidget_8);
        repeatNewPasswordLineEdit->setObjectName(QStringLiteral("repeatNewPasswordLineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(repeatNewPasswordLineEdit->sizePolicy().hasHeightForWidth());
        repeatNewPasswordLineEdit->setSizePolicy(sizePolicy4);
        repeatNewPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(repeatNewPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        okPasswordChangePushButton = new QPushButton(layoutWidget_8);
        okPasswordChangePushButton->setObjectName(QStringLiteral("okPasswordChangePushButton"));

        horizontalLayout_7->addWidget(okPasswordChangePushButton);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(changePasswordPage);
        menuTreeView = new QTreeView(centralWidget);
        menuTreeView->setObjectName(QStringLiteral("menuTreeView"));
        menuTreeView->setGeometry(QRect(20, 10, 300, 300));
        sizePolicy.setHeightForWidth(menuTreeView->sizePolicy().hasHeightForWidth());
        menuTreeView->setSizePolicy(sizePolicy);
        menuTreeView->setMinimumSize(QSize(300, 0));
        QFont font;
        font.setPointSize(12);
        menuTreeView->setFont(font);
        menuTreeView->setFocusPolicy(Qt::NoFocus);
        menuTreeView->setFrameShape(QFrame::NoFrame);
        menuTreeView->setItemsExpandable(false);
        menuTreeView->header()->setVisible(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1100, 25));
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
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Przegl\304\205daj ksi\304\205\305\274k\304\231 telefoniczn\304\205", 0));
        showAllPhonesToolButton->setText(QApplication::translate("MainWindow", "Poka\305\274 wszystkie", 0));
        searchPhonesValuesToolButton->setText(QApplication::translate("MainWindow", "Wyszukiwanie", 0));
        clearPhonesValuesToolButton->setText(QApplication::translate("MainWindow", "Wyczy\305\233\304\207", 0));
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
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Edytuj u\305\274ytkownik\303\263w", 0));
        showAllUsersToolButton->setText(QApplication::translate("MainWindow", "Poka\305\274 wszystkich", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Edytuj u\305\274ytkownika", 0));
        label_18->setText(QApplication::translate("MainWindow", "Id:", 0));
        userLoginLabel->setText(QApplication::translate("MainWindow", "Login:", 0));
        userEmailLabel->setText(QApplication::translate("MainWindow", "Email", 0));
        saveUserToolButton->setText(QApplication::translate("MainWindow", "Zapisz", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Przegl\304\205daj wnioski", 0));
        accceptRequestToolButton->setText(QApplication::translate("MainWindow", "Zakceptuj wniosek", 0));
        rejectRequestToolButton->setText(QApplication::translate("MainWindow", "Odrzu\304\207 wniosek", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Status wniosku", 0));
        newRequestsRadioButton->setText(QApplication::translate("MainWindow", "nowy", 0));
        acceptedRadioButton->setText(QApplication::translate("MainWindow", "zaakceptowany", 0));
        rejectedRequestsRadioButton->setText(QApplication::translate("MainWindow", "odrzucony", 0));
        allRequestsRadioButton->setText(QApplication::translate("MainWindow", "wszystkie", 0));
        showRequestsToolButton->setText(QApplication::translate("MainWindow", "Poka\305\274 wnioski", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Dodaj nowego u\305\274ytkownika", 0));
        label_13->setText(QApplication::translate("MainWindow", "Login:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Email:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Has\305\202o", 0));
        label_16->setText(QApplication::translate("MainWindow", "Powt\303\263rz has\305\202o", 0));
        label_17->setText(QApplication::translate("MainWindow", "Poziom uprawnie\305\204", 0));
        clearNewUserPushButton->setText(QApplication::translate("MainWindow", "Wyczy\305\233\304\207", 0));
        addNewUserPushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0));
        label_6->setText(QApplication::translate("MainWindow", "Edycja danych", 0));
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
