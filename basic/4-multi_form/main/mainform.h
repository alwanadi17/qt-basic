#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QPushButton>
#include <QScreen>
#include "otherform.h"

class mainform : public QWidget
{
    Q_OBJECT

public:
    mainform(QWidget *parent = nullptr);
    ~mainform();
    void setupUi();
    void setButton();

private slots:
    void onOpenForm();
    void onClose();

private:
    QPushButton *closeButton;
    QPushButton *openForm;
    int scrWidth;
    int scrHeight;
    otherform *newForm;
};
#endif // MAINFORM_H
