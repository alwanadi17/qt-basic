#ifndef HORZLAYOUT_H
#define HORZLAYOUT_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QScreen>
#include <QGuiApplication>

class HorzLayout : public QWidget
{
    Q_OBJECT
public:
    HorzLayout();
    ~HorzLayout();
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


#endif // HORZLAYOUT_H
