#include "MainWindow.h"
#include "LoginDialog.h"
#include "UserAccountDialog.h"
#include "ChangePasswordDialog.h"

#include <iostream>
#include <QApplication>
#include <QStyleFactory>
#include <QString>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStyleFactory styleFactory;
    //auto styles = styleFactory.keys();
    //for(auto style: styles)
    //    std::cout << style.toStdString() << std::endl;
    a.setStyle(styleFactory.create("Fusion"));

    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53,53,53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25,25,25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53,53,53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    qApp->setPalette(darkPalette);
    qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");


    MainWindow w;
    w.show();

    /*
    LoginDialog dialog;
    dialog.setModal(true);
    dialog.show();
    */

    /*
    UserAccountDialog dlg;
    dlg.setModal(true);
    dlg.exec();
    */

 /*
  * ChangePasswordDialog dlg;
    dlg.setModal(true);
    dlg.exec();
*/

    return a.exec();
}
