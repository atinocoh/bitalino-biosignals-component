#include "dialogomac.h"
#include "ui_dialogomac.h"

DialogoMac::DialogoMac(QWidget *parent) : QDialog(parent), ui(new Ui::DialogoMac)
{
    ui->setupUi(this);

    connect(this,SIGNAL(macIntroducida(QString)),parent,SLOT(introducirMac(QString)));
    connect(this->ui->buttonBox,SIGNAL(accepted()),this,SLOT(accionAceptar()));



}


void DialogoMac::accionAceptar(){
    QString mac(this->ui->mac->toPlainText());
    emit macIntroducida(mac);
}

DialogoMac::~DialogoMac()
{
    delete ui;
}
