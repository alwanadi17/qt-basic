#include "mainform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainform *form = new mainform();
    form->show();
    return a.exec();
}
