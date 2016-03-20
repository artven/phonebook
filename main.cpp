#include <iostream>

#include "Application.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Application phonebookApplication(app);
    phonebookApplication.start();
    return app.exec();
}