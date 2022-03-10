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
    scrHeight= tmp.height();

    this->setWindowTitle("QVerticalBoxLayout");
    this->resize(scrWidth/2,scrHeight/2);
    this->move((scrWidth - this->width())/2,
               (scrHeight - this->height())/2);

    this->setButton();

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(closeButton);

    this->setLayout(layout);

    connect(closeButton, SIGNAL(clicked()), this,
            SLOT(onCloseButton()));
}

void MainForm::setButton()
{
    button1 = new QPushButton("Button 1");
    button2 = new QPushButton("Button 2");
    button3 = new QPushButton("Button 3");
    button4 = new QPushButton("Button 4");
    closeButton = new QPushButton("Close");
}

void MainForm::onCloseButton()
{
    this->close();
}

