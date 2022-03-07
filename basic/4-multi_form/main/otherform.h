#ifndef OTHERFORM_H
#define OTHERFORM_H

#include <QWidget>
#include <QPushButton>
#include <QScreen>
#include <QGuiApplication>

class otherform : public QWidget
{
    Q_OBJECT
public:
    otherform();
    ~otherform();
    void setupUi();
    void setButton();

private slots:
    void closeForm();

private:
    QPushButton *closeButton;
    int scrWidth;
    int scrHeight;

};

#endif // OTHERFORM_H
