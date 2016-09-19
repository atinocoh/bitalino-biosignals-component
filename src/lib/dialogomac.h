#ifndef DIALOGOMAC_H
#define DIALOGOMAC_H

#include <QDialog>
#include <iostream>
namespace Ui {
class DialogoMac;
}

class DialogoMac : public QDialog
{
    Q_OBJECT

public:
    explicit DialogoMac(QWidget *parent = 0);
    ~DialogoMac();

signals:
     void macIntroducida(QString);

public slots:
     void accionAceptar();

private:
    Ui::DialogoMac *ui;
};

#endif // DIALOGOMAC_H
