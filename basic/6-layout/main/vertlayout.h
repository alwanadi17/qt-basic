#ifndef VERTLAYOUT_H
#define VERTLAYOUT_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QScreen>
#include <QGuiApplication>

class VertLayout : public QWidget
{
    Q_OBJECT
public:
    VertLayout();
    ~VertLayout();
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

#endif // VERTLAYOUT_H
