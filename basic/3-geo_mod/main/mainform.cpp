#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent)
    : QWidget(parent)
{
    this->setupUi();
}

MainForm::~MainForm()
{
    delete button;
    delete ttl;
    delete spec;
}

void MainForm::setupUi()
{
    this->setScreen();
    this->setWindowTitle("Set Center");
    this->setButton();
    this->setLabel();

    connect(button, SIGNAL(clicked()), this,
            SLOT(on_button_clicked()));
}

void MainForm::setScreen()
{
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    scrWidth = tmp.width();
    scrHeight = tmp.height();

    this->resize(scrWidth/2,scrHeight/2);
    this->move((scrWidth - this->width())/2,
               (scrHeight - this->height())/2);
}

void MainForm::setButton()
{
    button = new QPushButton();
    button->setText("Close");
    button->move(this->width()/6*5,
                 this->height()/6*5);
    button->setParent(this);
}

void MainForm::setLabel()
{
    ttl = new QLabel();
    ttl->setText("<h1>Hello <font color=cyan>"
                 "Qt</font></h1>");
    ttl->move(10,this->height()/10);
    ttl->setParent(this);

    QString tmp;
    QString str = tr("<font color=green><b>Window\n</b></font>") +
                  tr("<b>Width</b> = ");

    tmp.setNum(scrWidth);
    str.append(tmp);

    spec = new QLabel();
    spec->setText(str);
    spec->setWordWrap(true);
    spec->move(10,this->height()/10*3);
    spec->setParent(this);
}

void MainForm::on_button_clicked() {
    this->close();
}
