#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();

private:
    QPushButton *closeButton;
    QPushButton *clearButton;
    QLabel *labelName;
    QLineEdit *boxName;
    QLabel *labelNum;
    QLineEdit *boxNum;
};
#endif // MAINFORM_H
