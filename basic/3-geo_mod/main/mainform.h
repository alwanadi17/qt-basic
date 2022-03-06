#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QScreen>
#include <QLabel>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();
    void setScreen();
    void setButton();
    void setLabel();

private slots:
    void on_button_clicked();

private:
    QPushButton *button;
    QLabel *ttl;
    QLabel *spec;

    int scrWidth;
    int scrHeight;
};
#endif // MAINFORM_H
