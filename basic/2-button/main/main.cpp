#include "mainform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainForm *form = new MainForm();

    form->show();

    return a.exec();
}
