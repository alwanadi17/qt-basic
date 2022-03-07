#include "otherform.h"

otherform::otherform()
{
    this->setupUi();
}

otherform::~otherform()
{
    delete closeButton;
}

void otherform::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->resize(scrWidth/2,scrHeight/2);
    this->move((scrWidth - this->width())/2+10,
               (scrHeight - this->height())/2+10);
    this->setWindowTitle("The New Form");
    this->setButton();

    connect(closeButton, SIGNAL(clicked()), this,
            SLOT(closeForm()));
}

void otherform::setButton()
{
    closeButton = new QPushButton();
    closeButton->setText("Close");
    closeButton->move(this->width()/6*5,
                      this->height()/6*5);
    closeButton->setParent(this);
}

void otherform::closeForm()
{
    this->close();
}

