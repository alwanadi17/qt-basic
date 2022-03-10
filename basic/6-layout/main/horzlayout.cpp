#include "horzlayout.h"

HorzLayout::HorzLayout()
{
    this->setupUi();
}

HorzLayout::~HorzLayout()
{
    delete button1;
    delete button2;
    delete button3;
    delete button4;
    delete closeButton;
}

void HorzLayout::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->resize(scrWidth/3,scrHeight/2-75);
    this->move(scrWidth/3,scrHeight/2+75);
    this->setWindowTitle("Horizontal Layout");

    button1 = new QPushButton("Button 1");
    button2 = new QPushButton("Button 2");
    button3 = new QPushButton("Button 3");
    button4 = new QPushButton("Button 4");
    closeButton = new QPushButton("Close");

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(closeButton);

    this->setLayout(layout);

    connect(closeButton,SIGNAL(clicked()),this,
            SLOT(onCloseButton()));
}

void HorzLayout::onCloseButton()
{
    this->close();
}
