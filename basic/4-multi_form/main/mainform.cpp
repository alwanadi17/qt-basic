#include "mainform.h"
#include "ui_mainform.h"

mainform::mainform(QWidget *parent)
    : QWidget(parent)
{
    this->setupUi();
    newForm = new otherform();
}

mainform::~mainform()
{
    delete closeButton;
    delete openForm;
    delete newForm;
}


void mainform::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->resize(scrWidth/2,scrHeight/2);
    this->move((scrWidth - this->width())/2,
               (scrHeight - this->height())/2);
    this->setWindowTitle("Make new form");
    this->setButton();

    connect(closeButton, SIGNAL(clicked()), this,
            SLOT(onClose()));
    connect(openForm, SIGNAL(clicked()), this,
            SLOT(onOpenForm()));
}

void mainform::setButton()
{
    closeButton = new QPushButton();
    closeButton->setText("Close");
    closeButton->move(this->width()/6*5,
                      this->height()/6*5);
    closeButton->setParent(this);

    openForm = new QPushButton();
    openForm->setText("new form");
    openForm->move(this->width()/6,
                   this->height()/6*5);
    openForm->setParent(this);
}

void mainform::onOpenForm()
{
    newForm->show();
}

void mainform::onClose()
{
    this->close();
}
