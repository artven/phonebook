#include <iostream>

#include "Application.h"

int main(int argc, char *argv[])
{
    Application app(argc, argv);
    app.start();
    return app.exec();
}