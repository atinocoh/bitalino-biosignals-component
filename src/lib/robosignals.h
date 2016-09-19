#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include "bitalino.h"
#include "dialogomac.h"
#include <qtimer.h>
#include <qwt/qwt_plot.h>
#include <qwt/qwt_plot_curve.h>
#include <qwt/qwt_point_data.h>
#include <qwt/qwt_plot_grid.h>
#include <qwt/qwt_plot_marker.h>
#include <sys/select.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <fstream>
#include "filtro.h"
namespace Ui {
class RoboSignals;
}

class RoboSignals : public QMainWindow
{
    Q_OBJECT

    BITalino *bitDevice;

    QTimer readTimer;


    int frameNumber,channel, pagina;

    bool captura;
    bool conectado;
    bool filtroActivo;
    bool media;
    bool detectarPicos;
    bool adquiriendo;
    int ventanaMedia;
    int tipoFiltro;
    bool picoDetectado;
    int contadorPicos;


    QwtPlot plotEmg;
    QwtPlot plotAccX;

    QwtPlot plot3;
    QwtPlot plot4;


    Filtro *filtro;

    QPointF ultimoPuntoEnvolvente;

    QPointF ultimoPuntoMedia;


    std::ofstream *fichero;
    std::ofstream *fichero2;
    std::ifstream *fichero_entrada;


public:
    explicit RoboSignals(QWidget *parent = 0);

    ~RoboSignals();

private:
    Ui::RoboSignals *ui;

    void limpiarPlot1();
    void limpiarPlot2();
    void limpiarPlot3();
    void limpiarPlot4();
public slots:

    void nuevaMac();
    void checkBoxEmg();
    void checkBoxAccX();
    void checkBoxAccY();
    void checkBoxAccZ();
    void introducirMac(QString mac);
    void connectToBITalino();
    void startAdquisition();
    void stopAdquisition();
    void startCapture();
    void stopCapture();

    void startButterworth();
    void stopButterworth();

    void cambioDownSample();
    void startMedia();
    void stopMedia();

    void startDeteccionPicos();
    void stopDeteccionPicos();

    void tabConnection();
    void readFrames();
};

#endif // MAINWINDOW_H
