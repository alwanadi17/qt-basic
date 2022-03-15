#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QToolTip>
#include <QGridLayout>
#include <QScreen>
#include <QGuiApplication>
#include <QFont>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    MainForm(QWidget *parent = nullptr);
    ~MainForm();
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
#endif // MAINFORM_H
