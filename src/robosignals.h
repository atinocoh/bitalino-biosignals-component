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

#include <genericworker.h>

namespace Ui {
class RoboSignals;
}


class Mensaje{
    int velocidad;
    float angulo;
  public:
    Mensaje(){}
    Mensaje(int _velocidad, float _angulo){
        velocidad=_velocidad;
        angulo=_angulo;
    }
    int getVelocidad(){
        return velocidad;
    }
    float getAngulo(){
        return angulo;
    }
    ~Mensaje(){}
};

class ThreadDifferentialProxy : public QThread {
    DifferentialRobotPrx *differentialrobot_proxy;
    std::list<Mensaje> listaMensajes;
    QSemaphore *sem;
   public:
    ThreadDifferentialProxy(DifferentialRobotPrx *_differentialrobot_proxy){
           differentialrobot_proxy=_differentialrobot_proxy;
           sem = new QSemaphore(0);
    }
    ~ThreadDifferentialProxy(){
           delete sem;
    }
    void nuevoMensaje(Mensaje m){
        listaMensajes.push_back(m);
        sem->release();
    }
   protected:
        void run() {
                /* your thread implementation goes here */
            //(*differentialrobot_proxy)->setSpeedBase(velocidad,angulo);
          //  (*differentialrobot_proxy)->begin_setSpeedBase(velocidad, angulo);
            while(true){
                sem->acquire();
                Mensaje men=listaMensajes.front();
                listaMensajes.pop_front();
                (*differentialrobot_proxy)->setSpeedBase(men.getVelocidad(),men.getAngulo());
            }
        }
};


class RoboSignals : public QMainWindow
{
    Q_OBJECT
    //Puntero a la API bitalino para adquirir datos
    BITalino *bitDevice;
    //Temporizador para lanzar las lecturas al dispositivo a intervalos regulares
    QTimer readTimer;
    QTimer relojBpm;
    QTimer relojCalibracion;
    QTimer relojAcc;

DialogoMac *dialogo;




DifferentialRobotPrx *differentialrobot_proxy;

    int frameNumber,channel, pagina;
    //Bandera de volcado de datos a fichero
    bool captura;
    //Bandera de conexión
    bool conectado;
    //Bandera de filtro paso bajo en el sensor EMG
    bool filtroActivo;
    bool filtroActivoAcc;

    bool filtroActivoEcg;
    //Bandera de media móvil en el sensor EMG
    bool media;
    bool mediaAcc;
    bool mediaEcg;
    //Bandera de procesado y deteccion de picos en el sensor EMG
    bool detectarPicos;
    bool calibracionEmg;
    int segundosCalibracionEmg;
    float picoMaxCalibracion;
    bool detectarAcc;
    bool detectarEcg;
    //Bandera de adquisición de datos
    bool adquiriendo;
    //Tamaño de la ventana de media móvil
    int ventanaMedia;
    int ventanaMediaAcc;
    int ventanaMediaEcg;
    //Tipo de filtro paso bajo seleccionado: butterworth PB con diferentes FCS
    int tipoFiltro;
    int tipoFiltroAcc;
    int tipoFiltroEcg;
    //Bandera que informa de la detección de un pico durante el procesado EMG
    bool picoDetectado;
    bool picoDetectadoEcg;


    bool subidaDetectadaAcc[3];

float ultimoAngulo, ultimaVelocidad;


    //Informa del nº de picos detectados por el sensor EMG
    int contadorPicos;
    int estadoEmg;

    //Informa del nº de picos detectados por el sensor ECG
    int contadorPicosEcg;
    float bpm;
    //Informa del nº de canales abiertos, sirve como bandera para saber si se debe iniciar las lecturas del dispositivo
    int canalesAbiertos;

    float escalaEmg;


    //Constantes asociadas al sensor ACC. Valores maximos y minimos que ofrece el sensor
    // deben obtenerse en una fase de calibración. Ver documentación.
    float cmax;
    float cmin;


    float valorEjeX;
    float valorEjeY;
    float valorEjeZ;


	QwtPlotGrid *grid;
	QwtPlotGrid *grid2;
	QwtPlotGrid *grid3;
	QwtPlotGrid *grid4;
	QwtPlotGrid *gridAccY;
	QwtPlotGrid *gridAccZ;
	QwtPlotGrid *gridEcgPpal;
	QwtPlotGrid *gridEcgProcesado;
	QwtPlotGrid *gridEcgPicos;
	QwtPlotGrid *gridAccXProcesado;
	QwtPlotGrid *gridAccYProcesado;
	QwtPlotGrid *gridAccZProcesado;


    QwtPlot plotEmgPpal;
    QwtPlot plotAccXPpal;
    QwtPlot plotAccYPpal;
    QwtPlot plotAccZPpal;
    QwtPlot plotEcgPpal;

    QwtPlot plotAccXProcesado;
    QwtPlot plotAccYProcesado;
    QwtPlot plotAccZProcesado;
    QwtPlot plotEcgProcesado;


    QwtPlot plotEmgProcesado;
    QwtPlot plotEmgPicos;
    QwtPlot plotEcgPicos;

QwtPlotCurve *curvaEmg;
QwtPlotCurve *curvaEmgProcesada;
QwtPlotCurve *curvaEmgPicos;
QwtPlotCurve *curvaEcg;
QwtPlotCurve *curvaEcgProcesada;
QwtPlotCurve *curvaEcgPicos;
QwtPlotCurve *curvaAccX;
QwtPlotCurve *curvaAccY;
QwtPlotCurve *curvaAccZ;
QwtPlotCurve *curvaAccXProcesada;
QwtPlotCurve *curvaAccYProcesada;
QwtPlotCurve *curvaAccZProcesada;



    QwtPlotMarker *markerEmg;
    QwtPlotMarker *markerAccX;
    QwtPlotMarker *markerAccY;
    QwtPlotMarker *markerAccZ;
    QwtPlotMarker *markerEcg;


    Filtro *filtro;
    Filtro *filtroAccX;
    Filtro *filtroAccY;
    Filtro *filtroAccZ;
    Filtro *filtroEcg;


    QPointF ultimoPuntoFiltrada;


    QPointF ultimoPuntoFiltradaAccX;
    QPointF ultimoPuntoFiltradaAccY;
    QPointF ultimoPuntoFiltradaAccZ;

    QPointF ultimoPuntoFiltradaEcg;

    QPointF ultimoPuntoEnvolvente;
    QPointF ultimoPuntoEnvolventeEcg;

    QPointF ultimoPuntoMedia;
    QPointF ultimoPuntoMediaAccX;
    QPointF ultimoPuntoMediaAccY;
    QPointF ultimoPuntoMediaAccZ;

    QPointF ultimoPuntoMediaEcg;


ThreadDifferentialProxy *t;

    std::ofstream *fichero;

public:
    explicit RoboSignals(QWidget *parent = 0);
	void setDifferentialProxy(DifferentialRobotPrx *_differentialrobot_proxy);
    ~RoboSignals();

private:
    Ui::RoboSignals *ui;

    void limpiarPlotEmgPpal();
    void limpiarPlotEcgPpal();
    void limpiarPlotAccXPpal();
    void limpiarPlotAccYPpal();
    void limpiarPlotAccZPpal();

    void limpiarPlotAccXProcesado();
    void limpiarPlotAccYProcesado();
    void limpiarPlotAccZProcesado();

    void limpiarPlotEmgProcesado();
    void limpiarPlotEcgProcesado();
    void limpiarPlotEmgPicos();
    void limpiarPlotEcgPicos();

    void procesarEmg(float senal[]);
    void procesarEcg(float senal[]);
    void procesarAcc(float senal[], int eje);

    void pintarEmgPpal(QPolygonF puntosSenalEmg);
    void pintarAccX(QPolygonF puntosSenalAccX);
    void pintarAccY(QPolygonF puntosSenalAccY);
    void pintarAccZ(QPolygonF puntosSenalAccZ);
    void pintarEcgPpal(QPolygonF puntosSenalEmg);

    void pintarAccXProcesado(QPolygonF puntosSenalAccX);
    void pintarAccYProcesado(QPolygonF puntosSenalAccY);
    void pintarAccZProcesado(QPolygonF puntosSenalAccZ);


    void pintarEcgProcesado(QPolygonF puntosEcgProcesado);

    void pintarEmgProcesado(QPolygonF puntosEmgProcesado);
    void pintarEmgPicos(QPolygonF puntosEmgPicos);
    void pintarEcgPicos(QPolygonF puntosEcgPicos);

    void accionEmg();
    void accionEmg2();
    void accionAccX();
    void accionAccY();
    void accionAccZ();
    void accionAccX2();
    void accionAccY2();
    void accionAccZ2();

    void ordenRobot(int velocidad, float angulo);

    void calibrarEmg(QPolygonF puntosEmgPicos);

public slots:


    void decrementarRelojCalibracion();
    void lecturaAcc();

    void startCalibracionEmg();
    void nuevaMac();

    void checkBoxEmg();
    void checkBoxAccX();
    void checkBoxAccY();
    void checkBoxAccZ();
    void checkBoxEcg();

    void checkBoxFilterAccX();
    void checkBoxFilterAccY();
    void checkBoxFilterAccZ();

    void startDebug();
    void stopDebug();

    void seleccionarCaptura();

    void introducirMac(QString mac);
    void connectToBITalino();
    void startAdquisition();
    void stopAdquisition();
    void startCapture();
    void stopCapture();


    void pintarThresholdEmg();
    void pintarThresholdAccX();
    void pintarThresholdAccY();
    void pintarThresholdAccZ();
    void pintarThresholdEcg();

    void startButterworth();
    void stopButterworth();

    void startButterworthAcc();
    void stopButterworthAcc();

    void startButterworthEcg();
    void stopButterworthEcg();
    void startMediaEcg();
    void stopMediaEcg();
    void startDeteccionEcg();
    void stopDeteccionEcg();
    void cambioDownSampleEcg();


    void cambioDownSample();

    void cambioDownSampleAcc();
    void startMedia();
    void stopMedia();
    void startMediaAcc();
    void stopMediaAcc();





    void masEscalaEmg();
    void menosEscalaEmg();

    void startDeteccionPicos();
    void stopDeteccionPicos();

    void startDeteccionAcc();
    void stopDeteccionAcc();

    void tabConnection();
    void readFrames();
    void timeoutEcg();
};

#endif // MAINWINDOW_H
