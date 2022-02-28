#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QScreen>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();
    void setScreen();

private slots:
    void on_button_clicked();

private:
    QPushButton *button;
};
#endif // MAINFORM_H
