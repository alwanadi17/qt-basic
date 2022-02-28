#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) : QWidget(parent)
{
    this->setupUi();
}

MainForm::~MainForm()
{
    delete button;
}

void MainForm::setupUi() {
    this->move(200,200);
    this->resize(225,100);
    this->setWindowTitle("Close Button");

    button = new QPushButton();
    button->setText("Close");
    button->move(75,50);
    button->setParent(this);

    connect(button, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
}

void MainForm::on_button_clicked() {
    this->close();
}
