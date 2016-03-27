#include <QStandardItem>
#include <vector>

#include <QMessageBox>
#include <iostream>

#include "ui_MainWindow.h"
#include "MainWindow.h"
#include "SearchDialog.h"
#include "UserMenu.h"

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::logout() {
    this->close();
    this->start();
}

void MainWindow::showMainWindow() {
    this->show();
}

MainWindow::MainWindow(QApplication& app,QWidget *parent):
QMainWindow{parent}, Application{app}, ui{new Ui::MainWindow} {
    ui->setupUi(this);

    this->getWindowElements();
    this->initializeMenu();
    this->initalizeMainWidget();
    this->connectSignals();
}

void MainWindow::getWindowElements() {
    this->menu = ui->menuTreeView;
    this->mainWidget = ui->stackedWidget;
}

void MainWindow::initializeMenu() {
    this->menuModel = new QStandardItemModel(1, 1, this);
    this->menuModel->setHeaderData(0, Qt::Horizontal, "Menu");
    this->menu->setModel(this->menuModel);

    auto pal = this->menu->palette();
    pal.setColor(QPalette::Base, QColor(53,53,53));
    this->menu->setPalette(pal);
}

void MainWindow::initalizeMainWidget() {
    this->mainWidget->addWidget(&this->phonebookPage);
    this->mainWidget->addWidget(&this->newRecordPage);
    this->mainWidget->addWidget(&this->requestsPage);
    this->mainWidget->addWidget(&this->usersPage);
    this->mainWidget->addWidget(&this->newUserPage);
    this->mainWidget->addWidget(&this->passwordPage);
}

void MainWindow::connectSignals() {
    QObject::connect(this->menu, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(onMenuDoubleClicked(QModelIndex)));
    QObject::connect(this->menu, SIGNAL(collapsed(QModelIndex)), this, SLOT(onMenuCollapsed()));
    QObject::connect(this->menu, SIGNAL(expanded(QModelIndex)), this, SLOT(onMenuExpanded()));
    QObject::connect(&this->phonebookPage, SIGNAL(showAllPhones()), this, SLOT(onShowAllPhonesClicked()));
}

void MainWindow::chooseWindowMode(UserRecord *user) {
    if (user->isAdministrator())
        this->addAdministratorMenu();
    else if (user->isOperator())
        this->addOperatorMenu();
    else
        this->addUserMenu();
    this->loadWidget(0);
}

void MainWindow::addAdministratorMenu() {
    this->menuModel->clear();
    this->loadAdministratorWidgets();
    QStandardItem* administratorRootItem = UserMenu::createAdministratorMenu();
    this->menuModel->setItem(0, 0, administratorRootItem);
    this->menu->expandAll();
}

void MainWindow::loadAdministratorWidgets() {
    this->menuPages.clear();
    this->menuPages.push_back(&this->phonebookPage);
    this->menuPages.push_back(&this->newRecordPage);
    this->menuPages.push_back(&this->requestsPage);
    this->menuPages.push_back(&this->usersPage);
    this->menuPages.push_back(&this->newUserPage);
    this->menuPages.push_back(&this->passwordPage);
}

void MainWindow::addOperatorMenu() {
    this->menuModel->clear();
    this->loadOperatorWidgets();
    QStandardItem* operatorRootItem = UserMenu::createOperatorMenu();
    this->menuModel->setItem(0, 0, operatorRootItem);
    this->menu->expandAll();
}

void MainWindow::loadOperatorWidgets() {
    this->menuPages.clear();
    this->menuPages.push_back(&this->phonebookPage);
    this->menuPages.push_back(&this->newRecordPage);
    this->menuPages.push_back(&this->usersPage);
    this->menuPages.push_back(&this->requestsPage);
    this->menuPages.push_back(&this->passwordPage);
}

void MainWindow::addUserMenu() {
    this->menuModel->clear();
    this->loadUserWidgets();
    QStandardItem* userMenuRootItem = UserMenu::createUserMenu();
    this->menuModel->setItem(0, 0, userMenuRootItem);
    this->menu->expandAll();
}

void MainWindow::loadUserWidgets() {
    this->menuPages.clear();
    this->menuPages.push_back(&this->phonebookPage);
    this->menuPages.push_back(&this->newRecordPage);
    this->menuPages.push_back(&this->passwordPage);
}

void MainWindow::onMenuDoubleClicked(QModelIndex idx) {
    if (idx.parent() != QModelIndex()) {
        if(idx.row() < this->menuPages.size()) {
            this->loadWidget(idx.row());
        } else if (idx.row() == this->menuPages.size()) {
            this->logout();
        } else {
            this->close();
        }
    }
}

void MainWindow::loadWidget(int widgetIndex) {
    auto widget = this->menuPages[widgetIndex];
    this->mainWidget->setCurrentWidget(widget);
    this->adaptWindowToWidget(widget);
}

void MainWindow::adaptWindowToWidget(QWidget *widget) {
    auto menuWidth = 350;
    auto widgetWidht = widget->size().width();
    auto widgetHeight = widget->size().height();

    auto width = menuWidth + widgetWidht + 20;
    auto height = widgetHeight + 40;
    this->mainWidget->setGeometry(350, 20, widgetWidht, widgetHeight);
    this->setWindowSize(width, height);
}

void MainWindow::setWindowSize(int width, int height) {
    this->setMinimumSize(width, height);
    this->setMaximumSize(width, height);
    this->setFixedSize(width, height);
}

void MainWindow::onMenuCollapsed() {
    auto size = this->mainWidget->currentWidget()->size();
    this->mainWidget->setGeometry(10, 20, size.width(), size.height());
    this->setWindowSize(size.width()+20, size.height()+40);
    this->menu->setFixedHeight(20);
}

void MainWindow::onMenuExpanded() {
    this->menu->setFixedHeight(200);
    auto size = this->mainWidget->currentWidget()->size();
    this->mainWidget->setGeometry(350, 20, size.width(), size.height());
    this->setWindowSize(size.width()+20+350, size.height()+40);
}

void MainWindow::onShowAllPhonesClicked() {
    std::cout << "dupa" << std::endl;
    auto newPhonesModel = this->Application::getAllPhones();
    if (newPhonesModel != nullptr)
        this->phonebookPage.setModel(newPhonesModel);
    else
        QMessageBox::warning(this, "Błąd!", "Brak rekordów w bazie!");
}


