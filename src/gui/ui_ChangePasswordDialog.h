/********************************************************************************
** Form generated from reading UI file 'ChangePasswordDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *oldPasswordLabel;
    QLineEdit *oldPasswordLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *newPasswordLabel;
    QLineEdit *newPasswordLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *newPasswordRepeatedLabel;
    QLineEdit *newPasswordRepeatedLineEdit;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;

    void setupUi(QDialog *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName(QStringLiteral("ChangePasswordDialog"));
        ChangePasswordDialog->resize(315, 150);
        ChangePasswordDialog->setMinimumSize(QSize(315, 150));
        ChangePasswordDialog->setMaximumSize(QSize(315, 150));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/images/explorer.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangePasswordDialog->setWindowIcon(icon);
        widget = new QWidget(ChangePasswordDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 289, 148));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        oldPasswordLabel = new QLabel(widget);
        oldPasswordLabel->setObjectName(QStringLiteral("oldPasswordLabel"));

        horizontalLayout->addWidget(oldPasswordLabel);

        oldPasswordLineEdit = new QLineEdit(widget);
        oldPasswordLineEdit->setObjectName(QStringLiteral("oldPasswordLineEdit"));

        horizontalLayout->addWidget(oldPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(19);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        newPasswordLabel = new QLabel(widget);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));

        horizontalLayout_2->addWidget(newPasswordLabel);

        newPasswordLineEdit = new QLineEdit(widget);
        newPasswordLineEdit->setObjectName(QStringLiteral("newPasswordLineEdit"));

        horizontalLayout_2->addWidget(newPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(19);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        newPasswordRepeatedLabel = new QLabel(widget);
        newPasswordRepeatedLabel->setObjectName(QStringLiteral("newPasswordRepeatedLabel"));

        horizontalLayout_3->addWidget(newPasswordRepeatedLabel);

        newPasswordRepeatedLineEdit = new QLineEdit(widget);
        newPasswordRepeatedLineEdit->setObjectName(QStringLiteral("newPasswordRepeatedLineEdit"));

        horizontalLayout_3->addWidget(newPasswordRepeatedLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cancelPushButton = new QPushButton(widget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_4->addWidget(cancelPushButton);

        okPushButton = new QPushButton(widget);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_4->addWidget(okPushButton);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        QWidget::setTabOrder(oldPasswordLineEdit, newPasswordLineEdit);
        QWidget::setTabOrder(newPasswordLineEdit, newPasswordRepeatedLineEdit);
        QWidget::setTabOrder(newPasswordRepeatedLineEdit, okPushButton);
        QWidget::setTabOrder(okPushButton, cancelPushButton);

        retranslateUi(ChangePasswordDialog);

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QApplication::translate("ChangePasswordDialog", "Zmie\305\204 has\305\202o", 0));
        oldPasswordLabel->setText(QApplication::translate("ChangePasswordDialog", "Podaj obecne has\305\202o:", 0));
        newPasswordLabel->setText(QApplication::translate("ChangePasswordDialog", "Podaj nowe has\305\202o:", 0));
        newPasswordRepeatedLabel->setText(QApplication::translate("ChangePasswordDialog", "Podaj nowe has\305\202o:", 0));
        cancelPushButton->setText(QApplication::translate("ChangePasswordDialog", "Cancel", 0));
        okPushButton->setText(QApplication::translate("ChangePasswordDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
