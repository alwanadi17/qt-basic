#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QScreen>
#include <QGridLayout>
#include "vertlayout.h"
#include "horzlayout.h"
#include "grdlayout.h"

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void setupUi();
    void connectButton();

private slots:
    void onCloseButton();
    void onVerticalLayout();
    void onHorizontalLayout();
    void onGridLayout();

private:
    QPushButton *vLayoutButton;
    QPushButton *hLayoutButton;
    QPushButton *gLayoutButton;
    QPushButton *closeButton;
    VertLayout *vLayout;
    HorzLayout *hLayout;
    GrdLayout *gLayout;

protected:
    int scrWidth;
    int scrHeight;
};
#endif // MAINFORM_H
