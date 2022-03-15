#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent)
    : QWidget(parent)
{
    this->setupUi();
}

MainForm::~MainForm()
{
    delete button1;
    delete button2;
    delete button3;
    delete button4;
    delete closeButton;
}

void MainForm::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->setWindowTitle("Horizontal Layout");
    this->resize(scrWidth/3,scrHeight/3);
    this->move((scrWidth - this->width())/2,
               (scrHeight - this->height())/2);

    button1 = new QPushButton("Button 1");
    button2 = new QPushButton("Button 2");
    button3 = new QPushButton("Button 3");
    button4 = new QPushButton("Button 4");
    closeButton = new QPushButton("Close");

    QToolTip::setFont(QFont("SansSerif",10));
    button1->setToolTip("Void");
    button2->setToolTip("Void");
    button3->setToolTip("Void");
    button4->setToolTip("Void");
    closeButton->setToolTip("Close program");

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

void MainForm::onCloseButton()
{
    this->close();
}
