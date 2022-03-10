#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent)
    : QWidget(parent)
{
    this->setupUi();
    vLayout = new VertLayout();
    hLayout = new HorzLayout();
    gLayout = new GrdLayout();
}

MainForm::~MainForm()
{
    delete vLayoutButton;
    delete hLayoutButton;
    delete gLayoutButton;
    delete closeButton;
}

void MainForm::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->setGeometry((scrWidth-this->width())/2,
                      0,scrWidth/2,scrHeight/2);
    this->setWindowTitle("Qt Layouts");

    vLayoutButton = new QPushButton("Vertical Layout");
    hLayoutButton = new QPushButton("Horizontal Layout");
    gLayoutButton = new QPushButton("Grid Layout");
    closeButton = new QPushButton("Close");

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(vLayoutButton,0,0);
    layout->addWidget(hLayoutButton,1,0);
    layout->addWidget(gLayoutButton,2,0);
    layout->addWidget(closeButton,3,0);
    this->setLayout(layout);

    this->connectButton();
}

void MainForm::connectButton()
{

    connect(closeButton,SIGNAL(clicked()),this,
            SLOT(onCloseButton()));
    connect(vLayoutButton,SIGNAL(clicked()),this,
            SLOT(onVerticalLayout()));
    connect(hLayoutButton,SIGNAL(clicked()),this,
            SLOT(onHorizontalLayout()));
    connect(gLayoutButton,SIGNAL(clicked()),this,
            SLOT(onGridLayout()));
}

void MainForm::onVerticalLayout()
{
    vLayout->show();
}

void MainForm::onHorizontalLayout()
{
    hLayout->show();
}

void MainForm::onGridLayout()
{
    gLayout->show();
}

void MainForm::onCloseButton()
{
    this->close();
}

