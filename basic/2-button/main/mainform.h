#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();


private slots:
    void on_button_clicked();

private:
    QPushButton *button;
};
#endif // MAINFORM_H
