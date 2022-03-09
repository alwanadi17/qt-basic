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
}

void MainForm::setupUi()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->resize(scrWidth/2,scrHeight/2);
    this->move((scrWidth - this->width())/2,
               (scrHeight - this->height())/2);
    this->setWindowTitle("ToolTip Close Button");

    this->setButton();

    this->setTooltip();

    connect(closeButton, SIGNAL(clicked()), this,
            SLOT(onCloseButton()));
}

void MainForm::setButton()
{
    closeButton = new QPushButton();
    closeButton->setText("Close");
    closeButton->move(this->width()/6*5,
                      this->height()/6*5);
    closeButton->setParent(this);
}

void MainForm::setTooltip()
{
    QToolTip::setFont(QFont("TimesNewRoman",10));
    this->setToolTip(tr("This is <b>ToolTip</b> ") +
                     tr("for <b>Form</b>"));

    closeButton->setToolTip(tr("This is Tooltip ") +
                            tr("for Close Button"));
}

void MainForm::onCloseButton()
{
    this->close();
}
