#include "grdlayout.h"

GrdLayout::GrdLayout()
{
    this->setupUi();
}

GrdLayout::~GrdLayout()
{
    delete button1;
    delete button2;
    delete button3;
    delete button4;
    delete closeButton;
}

void GrdLayout::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->resize(scrWidth/3,scrHeight/2-75);
    this->move(scrWidth/3*2,scrHeight/2+75);
    this->setWindowTitle("Grid Layout");

    button1 = new QPushButton("Button 1");
    button2 = new QPushButton("Button 2");
    button3 = new QPushButton("Button 3");
    button4 = new QPushButton("Button 4");
    closeButton = new QPushButton("Close");

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(button1,0,0);
    layout->addWidget(button2,0,1);
    layout->addWidget(button3,1,0);
    layout->addWidget(button4,1,1);
    layout->addWidget(closeButton,2,0,1,2);

    this->setLayout(layout);

    connect(closeButton,SIGNAL(clicked()),this,
            SLOT(onCloseButton()));
}

void GrdLayout::onCloseButton()
{
    this->close();
}
