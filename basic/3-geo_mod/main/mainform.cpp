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
}

void MainForm::setupUi() {
    this->resize(350,100);
    this->setScreen();
    this->setWindowTitle("Set Center");

    button = new QPushButton();
    button->setText("Close");
    button->move(this->width()/4 + this->width()/8,
                 this->height()/2 + this->height()/20);
    button->setParent(this);

    connect(button, SIGNAL(clicked()), this,
            SLOT(on_button_clicked()));
}

void MainForm::setScreen() {
    QScreen *scr = QGuiApplication::primaryScreen();
    QRect tmp = scr->geometry();
    int scrWidth = tmp.width();
    int scrHeight = tmp.height();

    this->move((scrWidth - this->width())/2,
               (scrHeight - this->height())/2);
}

void MainForm::on_button_clicked() {
    this->close();
}
