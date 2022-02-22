#include "widget.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget *w = new Widget();

    w->resize(200,100);
    w->move(300,300);
    w->setWindowTitle("GUI Minimal");

    QLabel *l = new QLabel("Hello Qt");
    l->move(55,40);
    l->setParent(w);

    w->show();
    return a.exec();
}
