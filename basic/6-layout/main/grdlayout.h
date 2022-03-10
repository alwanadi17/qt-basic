#ifndef GRDLAYOUT_H
#define GRDLAYOUT_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QScreen>
#include <QGuiApplication>

class GrdLayout : public QWidget
{
    Q_OBJECT
public:
    GrdLayout();
    ~GrdLayout();
    void setupUi();

private slots:
    void onCloseButton();

private:
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *closeButton;
    int scrWidth;
    int scrHeight;
};

#endif // GRDLAYOUT_H
