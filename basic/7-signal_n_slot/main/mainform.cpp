#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent)
    : QWidget(parent)
{
    this->setupUi();
}

MainForm::~MainForm()
{
    delete closeButton;
    delete clearButton;
    delete labelName;
    delete boxName;
    delete labelNum;
    delete boxNum;
}

void MainForm::setupUi()
{
    this->setWindowTitle("Signal and Slot");
    this->setGeometry(500,300,300,150);

    labelName = new QLabel("Name");
    boxName = new QLineEdit();

    labelNum = new QLabel("No. Telephone");
    boxNum = new QLineEdit();

    clearButton = new QPushButton("Clear");
    closeButton = new QPushButton("Close");

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(labelName,0,0);
    layout->addWidget(boxName,0,1);
    layout->addWidget(labelNum,1,0);
    layout->addWidget(boxNum,1,1);
    layout->addWidget(clearButton,2,0);
    layout->addWidget(closeButton,2,1);

    this->setLayout(layout);

    connect(clearButton,SIGNAL(clicked()),boxName,
            SLOT(clear()));
    connect(clearButton,SIGNAL(clicked()),boxNum,
            SLOT(clear()));
    connect(closeButton,SIGNAL(clicked()),this,
            SLOT(close()));
}
