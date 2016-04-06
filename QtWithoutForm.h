#ifndef QTWITHOUTFORM_H
#define QTWITHOUTFORM_H

#include <QObject>
#include <QWidget>
#include <QDialog>
#include <QFileDialog>
#include <QApplication>
#include <QString>
#include <QMessageBox>
#include <QPalette>
#include <QPushButton>
#include <QResizeEvent>

//struct Burtton : public

class QtWithoutForm : public QWidget
{
public:
    //QPushButton
    QtWithoutForm(QWidget *parent = 0);
    QPushButton *button;

    void resizeEvent(QResizeEvent *);

};

#endif // QTWITHOUTFORM_H
