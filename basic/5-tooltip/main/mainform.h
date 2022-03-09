#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QToolTip>
#include <QFont>
#include <QScreen>
#include <QGuiApplication>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();
    void setButton();
    void setTooltip();

private slots:
    void onCloseButton();

private:
    QPushButton *closeButton;
    int scrWidth;
    int scrHeight;
};
#endif // MAINFORM_H
