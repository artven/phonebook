/********************************************************************************
** Form generated from reading UI file 'PhonebookForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEBOOKFORM_H
#define UI_PHONEBOOKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhonebookForm
{
public:
    QGroupBox *groupBox_5;
    QTableView *phonesTableView;
    QFrame *browseButtonsFrame;
    QHBoxLayout *horizontalLayout_24;
    QToolButton *showAllPhonesToolButton;
    QToolButton *searchPhonesToolButton;
    QToolButton *clearPhonesToolButton;

    void setupUi(QWidget *PhonebookForm)
    {
        if (PhonebookForm->objectName().isEmpty())
            PhonebookForm->setObjectName(QStringLiteral("PhonebookForm"));
        PhonebookForm->resize(720, 520);
        PhonebookForm->setMinimumSize(QSize(720, 520));
        PhonebookForm->setMaximumSize(QSize(720, 520));
        groupBox_5 = new QGroupBox(PhonebookForm);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 700, 500));
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
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        showAllPhonesToolButton = new QToolButton(browseButtonsFrame);
        showAllPhonesToolButton->setObjectName(QStringLiteral("showAllPhonesToolButton"));
        showAllPhonesToolButton->setMinimumSize(QSize(150, 0));
        showAllPhonesToolButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_24->addWidget(showAllPhonesToolButton);

        searchPhonesToolButton = new QToolButton(browseButtonsFrame);
        searchPhonesToolButton->setObjectName(QStringLiteral("searchPhonesToolButton"));
        searchPhonesToolButton->setMinimumSize(QSize(150, 0));
        searchPhonesToolButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_24->addWidget(searchPhonesToolButton);

        clearPhonesToolButton = new QToolButton(browseButtonsFrame);
        clearPhonesToolButton->setObjectName(QStringLiteral("clearPhonesToolButton"));
        clearPhonesToolButton->setMinimumSize(QSize(150, 0));
        clearPhonesToolButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_24->addWidget(clearPhonesToolButton);


        retranslateUi(PhonebookForm);

        QMetaObject::connectSlotsByName(PhonebookForm);
    } // setupUi

    void retranslateUi(QWidget *PhonebookForm)
    {
        PhonebookForm->setWindowTitle(QApplication::translate("PhonebookForm", "Form", 0));
        groupBox_5->setTitle(QApplication::translate("PhonebookForm", "Przegl\304\205daj ksi\304\205\305\274k\304\231 telefoniczn\304\205", 0));
        showAllPhonesToolButton->setText(QApplication::translate("PhonebookForm", "Poka\305\274 wszystkie", 0));
        searchPhonesToolButton->setText(QApplication::translate("PhonebookForm", "Wyszukiwanie", 0));
        clearPhonesToolButton->setText(QApplication::translate("PhonebookForm", "Wyczy\305\233\304\207", 0));
    } // retranslateUi

};

namespace Ui {
    class PhonebookForm: public Ui_PhonebookForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOKFORM_H
