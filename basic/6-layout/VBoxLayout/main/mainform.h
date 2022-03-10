#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QScreen>
#include <QGuiApplication>
#include <QVBoxLayout>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();
    void setButton();

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
