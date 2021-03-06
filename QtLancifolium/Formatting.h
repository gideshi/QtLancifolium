#ifndef FORMATTING_H
#define FORMATTING_H

#include <QDialog>
#include <QFileDialog>
#include <QApplication>
#include <QString>
#include <QMessageBox>
#include <QDialogButtonBox>
#include <QPalette>
#include <QPushButton>
#include <QResizeEvent>
#include "Lancifolium/FunLancifolium.h"

struct Formatting : public QDialog {
    Q_OBJECT

public:
    explicit Formatting(QWidget *parent = 0);
	~Formatting();

private slots:
    void on_formopenfile_released();
    void on_formsavefile_released();
    void resizeEvent(QResizeEvent * resize);

private:
    QString infilename; /* insert filename */
    QString oufilename; /* output filename */

    QPushButton *formopenfile;
    QPushButton *formsavefile;
	QDialogButtonBox *buttonBox;
};

#endif // FORMATTING_H
