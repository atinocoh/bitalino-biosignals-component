#include "robosignals.h"
#include "bitalino.h"
#include "ui_mainwindow.h"
#include <stdlib.h>



bool keypressed(void)
{
    fd_set   readfds;
    FD_ZERO(&readfds);
    FD_SET(0, &readfds);

    timeval  readtimeout;
    readtimeout.tv_sec = 0;

    readtimeout.tv_usec = 0;

    return (select(FD_SETSIZE, &readfds, NULL, NULL, &readtimeout) == 1);
}


RoboSignals::RoboSignals(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RoboSignals)
{
    ui->setupUi(this);
    bitDevice = NULL;
    pagina = 0;
    canalesAbiertos=0;
    conectado=false;
    adquiriendo=false;
    filtroActivo=false;
    filtroActivoAcc=false;
    filtroActivoEcg=false;
    detectarPicos=false;
    calibracionEmg=false;
    segundosCalibracionEmg=0;
    picoMaxCalibracion=0;
    detectarAcc=false;
    tipoFiltro=0;
    tipoFiltroAcc=0;
    tipoFiltroEcg=0;
    picoDetectado=false;
    contadorPicos=0;
    estadoEmg=0;
    contadorPicosEcg=0;
    bpm=0;
    escalaEmg=3.3;
    media=false;
    mediaAcc=false;
    mediaEcg=false;
    filtro = NULL;
    filtroAccX=NULL;
    filtroAccY=NULL;
    filtroAccZ=NULL;
    filtroEcg=NULL;
    ultimoAngulo=0;
    ultimaVelocidad=0;
    dialogo=NULL;


    cmin=208;
    cmax=312;

    plotEmgPpal.setAxisScale(QwtPlot::yLeft,-3.3,3.3,1.65);
    plotEmgPpal.setAxisScale(QwtPlot::xBottom,0,5999,500);

    plotAccXPpal.setAxisScale(QwtPlot::yLeft,-3,3,1);
    plotAccXPpal.setAxisScale(QwtPlot::xBottom,0,99,30);

    plotAccYPpal.setAxisScale(QwtPlot::yLeft,-3,3,1);
    plotAccYPpal.setAxisScale(QwtPlot::xBottom,0,99,30);

    plotAccZPpal.setAxisScale(QwtPlot::yLeft,-3,3,1);
    plotAccZPpal.setAxisScale(QwtPlot::xBottom,0,99,30);

    plotEcgPpal.setAxisScale(QwtPlot::yLeft,-1.5,1.5,0.75);
    plotEcgPpal.setAxisScale(QwtPlot::xBottom,0,5999,500);


    plotAccXProcesado.setAxisScale(QwtPlot::yLeft,-3,3,1);
    plotAccXProcesado.setAxisScale(QwtPlot::xBottom,0,5999,500);

    plotAccYProcesado.setAxisScale(QwtPlot::yLeft,-3,3,1);
    plotAccYProcesado.setAxisScale(QwtPlot::xBottom,0,5999,500);

    plotAccZProcesado.setAxisScale(QwtPlot::yLeft,-3,3,1);
    plotAccZProcesado.setAxisScale(QwtPlot::xBottom,0,5999,500);




    plotEmgProcesado.setAxisScale(QwtPlot::yLeft,-3.3,3.3,0.66);
    plotEmgProcesado.setAxisScale(QwtPlot::xBottom,0,5999,500);



    double ejex =ui->maxValue->value() + (0.3*ui->maxValue->value());
    plotEmgPicos.setAxisScale(QwtPlot::yLeft,0,ejex,ejex/5);
    plotEmgPicos.setAxisScale(QwtPlot::xBottom,0,5999,500);


    plotEcgProcesado.setAxisScale(QwtPlot::yLeft,-1.5,1.5,0.75);
    plotEcgProcesado.setAxisScale(QwtPlot::xBottom,0,5999,500);


    double ejexEcg =ui->maxValueEcg->value() + (0.3*ui->maxValueEcg->value());
    plotEcgPicos.setAxisScale(QwtPlot::yLeft,0,ejexEcg,ejexEcg/5);
    plotEcgPicos.setAxisScale(QwtPlot::xBottom,0,5999,500);



    ui->plotEmgPpal->addWidget(&plotEmgPpal);
    plotEmgPpal.setLineWidth(2);
    plotEmgPpal.setMidLineWidth(3);

    ui->plotAccXPpal->addWidget(&plotAccXPpal);
    plotAccXPpal.setLineWidth(2);
    plotAccXPpal.setMidLineWidth(3);

    ui->plotAccYPpal->addWidget(&plotAccYPpal);
    plotAccYPpal.setLineWidth(2);
    plotAccYPpal.setMidLineWidth(3);

    ui->plotAccZPpal->addWidget(&plotAccZPpal);
    plotAccZPpal.setLineWidth(2);
    plotAccZPpal.setMidLineWidth(3);


    ui->plotEcgPpal->addWidget(&plotEcgPpal);
    plotEcgPpal.setLineWidth(2);
    plotEcgPpal.setMidLineWidth(3);


    ui->plotAccXProcesado->addWidget(&plotAccXProcesado);
    plotAccXProcesado.setLineWidth(2);
    plotAccXProcesado.setMidLineWidth(3);

    ui->plotAccYProcesado->addWidget(&plotAccYProcesado);
    plotAccYProcesado.setLineWidth(2);
    plotAccYProcesado.setMidLineWidth(3);

    ui->plotAccZProcesado->addWidget(&plotAccZProcesado);
    plotAccZProcesado.setLineWidth(2);
    plotAccZProcesado.setMidLineWidth(3);

    ui->plotEcgProcesado->addWidget(&plotEcgProcesado);
    plotEcgProcesado.setLineWidth(2);
    plotEcgProcesado.setMidLineWidth(3);

    ui->plotEmgProcesado->addWidget(&plotEmgProcesado);
    plotEmgProcesado.setLineWidth(2);
    plotEmgProcesado.setMidLineWidth(3);

    ui->plotEmgPicos->addWidget(&plotEmgPicos);
    plotEmgPicos.setLineWidth(2);
    plotEmgPicos.setMidLineWidth(3);


    ui->plotEcgPicos->addWidget(&plotEcgPicos);
    plotEcgPicos.setLineWidth(2);
    plotEcgPicos.setMidLineWidth(3);



    plotEmgPpal.setCanvasBackground( Qt::white );
    grid = new QwtPlotGrid();
    grid->attach( &plotEmgPpal );

    plotAccXPpal.setCanvasBackground( Qt::white );
    grid2 = new QwtPlotGrid();
    grid2->attach( &plotAccXPpal );

    plotAccYPpal.setCanvasBackground( Qt::white );
    gridAccY = new QwtPlotGrid();
    gridAccY->attach( &plotAccYPpal );

    plotAccZPpal.setCanvasBackground( Qt::white );
    gridAccZ = new QwtPlotGrid();
    gridAccZ->attach( &plotAccZPpal );

    plotEcgPpal.setCanvasBackground( Qt::white );
    gridEcgPpal = new QwtPlotGrid();
    gridEcgPpal->attach( &plotEcgPpal );


    plotAccXProcesado.setCanvasBackground( Qt::white );
    gridAccXProcesado = new QwtPlotGrid();
    gridAccXProcesado->attach( &plotAccXProcesado );

    plotAccYProcesado.setCanvasBackground( Qt::white );
    gridAccYProcesado = new QwtPlotGrid();
    gridAccYProcesado->attach( &plotAccYProcesado );

    plotAccZProcesado.setCanvasBackground( Qt::white );
    gridAccZProcesado = new QwtPlotGrid();
    gridAccZProcesado->attach( &plotAccZProcesado );

    plotEcgProcesado.setCanvasBackground( Qt::white );
    gridEcgProcesado = new QwtPlotGrid();
    gridEcgProcesado->attach( &plotEcgProcesado );

    plotEmgProcesado.setCanvasBackground( Qt::white );
    grid3 = new QwtPlotGrid();
    grid3->attach( &plotEmgProcesado );

    plotEmgPicos.setCanvasBackground( Qt::white );
    grid4 = new QwtPlotGrid();
    grid4->attach( &plotEmgPicos );

    plotEcgPicos.setCanvasBackground( Qt::white );
    gridEcgPicos = new QwtPlotGrid();
    gridEcgPicos->attach( &plotEcgPicos );

    markerEmg = new QwtPlotMarker("treshold");
    markerEmg->setLinePen(Qt::green,1);
    markerEmg->setYValue(this->ui->threshold->value());
    markerEmg->setLineStyle(QwtPlotMarker::HLine);
    markerEmg->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    markerEmg->attach(&plotEmgPicos);


    markerAccX = new QwtPlotMarker("tresholdAccX");
    markerAccX->setLinePen(Qt::green,1);
    markerAccX->setYValue(this->ui->thresholdValueX->value());
    markerAccX->setLineStyle(QwtPlotMarker::HLine);
    markerAccX->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    markerAccX->attach(&plotAccXProcesado);



    markerAccY = new QwtPlotMarker("tresholdAccY");
    markerAccY->setLinePen(Qt::green,1);
    markerAccY->setYValue(this->ui->thresholdValueY->value());
    markerAccY->setLineStyle(QwtPlotMarker::HLine);
    markerAccY->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    markerAccY->attach(&plotAccYProcesado);




    markerAccZ = new QwtPlotMarker("tresholdAccZ");
    markerAccZ->setLinePen(Qt::green,1);
    markerAccZ->setYValue(this->ui->thresholdValueZ->value());
    markerAccZ->setLineStyle(QwtPlotMarker::HLine);
    markerAccZ->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    markerAccZ->attach(&plotAccZProcesado);


    markerEcg = new QwtPlotMarker("tresholdEcg");
    markerEcg->setLinePen(Qt::green,1);
    markerEcg->setYValue(this->ui->thresholdEcg->value());
    markerEcg->setLineStyle(QwtPlotMarker::HLine);
    markerEcg->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    markerEcg->attach(&plotEcgPicos);


    curvaEmg=NULL;
    curvaEmgProcesada=NULL;
    curvaEmgPicos=NULL;
    curvaEcg=NULL;
    curvaEcgProcesada=NULL;
    curvaEcgPicos=NULL;
    curvaAccX = NULL;
    curvaAccY=NULL;
    curvaAccZ=NULL;
    curvaAccXProcesada=NULL;
    curvaAccYProcesada=NULL;
    curvaAccZProcesada=NULL;






    connect(ui->nuevaMac,SIGNAL(clicked(bool)),this,SLOT(nuevaMac()));

    connect(ui->checkBoxEmg,SIGNAL(clicked(bool)),this,SLOT(checkBoxEmg()));
    connect(ui->checkBoxAccX,SIGNAL(clicked(bool)),this,SLOT(checkBoxAccX()));
    connect(ui->checkBoxAccY,SIGNAL(clicked(bool)),this,SLOT(checkBoxAccY()));
    connect(ui->checkBoxAccZ,SIGNAL(clicked(bool)),this,SLOT(checkBoxAccZ()));
    connect(ui->checkBoxEcg,SIGNAL(clicked(bool)),this,SLOT(checkBoxEcg()));

    connect(ui->checkBoxFilterAccX,SIGNAL(clicked(bool)),this,SLOT(checkBoxFilterAccX()));
    connect(ui->checkBoxFilterAccY,SIGNAL(clicked(bool)),this,SLOT(checkBoxFilterAccY()));
    connect(ui->checkBoxFilterAccZ,SIGNAL(clicked(bool)),this,SLOT(checkBoxFilterAccZ()));



    connect(ui->connectionButton,SIGNAL(clicked(bool)),this,SLOT(connectToBITalino()));

    connect(ui->startButton,SIGNAL(clicked(bool)),this,SLOT(startAdquisition()));
    connect(ui->stopButton,SIGNAL(clicked(bool)),this,SLOT(stopAdquisition()));

    connect(ui->startDebug,SIGNAL(clicked(bool)),this,SLOT(startDebug()));
    connect(ui->stopDebug,SIGNAL(clicked(bool)),this,SLOT(stopDebug()));

    connect(ui->startCapture,SIGNAL(clicked(bool)),this,SLOT(startCapture()));
    connect(ui->stopCapture,SIGNAL(clicked(bool)),this,SLOT(stopCapture()));

    connect(ui->startButterworth,SIGNAL(clicked(bool)),this,SLOT(startButterworth()));
    connect(ui->stopButterworth,SIGNAL(clicked(bool)),this,SLOT(stopButterworth()));

    connect(ui->calibrationButtonEmg,SIGNAL(clicked(bool)),this,SLOT(startCalibracionEmg()));

    connect(ui->threshold, SIGNAL(valueChanged(double)),this,SLOT(pintarThresholdEmg()));
    connect(ui->thresholdValueX, SIGNAL(valueChanged(double)),this,SLOT(pintarThresholdAccX()));
    connect(ui->thresholdValueY, SIGNAL(valueChanged(double)),this,SLOT(pintarThresholdAccY()));
    connect(ui->thresholdValueZ, SIGNAL(valueChanged(double)),this,SLOT(pintarThresholdAccZ()));
    connect(ui->thresholdEcg, SIGNAL(valueChanged(double)),this,SLOT(pintarThresholdEcg()));

    connect(ui->startButterworthAcc,SIGNAL(clicked(bool)),this,SLOT(startButterworthAcc()));
    connect(ui->stopButterworthAcc,SIGNAL(clicked(bool)),this,SLOT(stopButterworthAcc()));

    connect(ui->startButterworthEcg,SIGNAL(clicked(bool)),this,SLOT(startButterworthEcg()));
    connect(ui->stopButterworthEcg,SIGNAL(clicked(bool)),this,SLOT(stopButterworthEcg()));


    connect(ui->activateDownsample,SIGNAL(stateChanged(int)),this,SLOT(cambioDownSample()));
    connect(ui->startAverage,SIGNAL(clicked(bool)),this,SLOT(startMedia()));
    connect(ui->stopAverage,SIGNAL(clicked(bool)),this,SLOT(stopMedia()));

    connect(ui->activateDownsampleAcc,SIGNAL(stateChanged(int)),this,SLOT(cambioDownSampleAcc()));
    connect(ui->startAverageAcc,SIGNAL(clicked(bool)),this,SLOT(startMediaAcc()));
    connect(ui->stopAverageAcc,SIGNAL(clicked(bool)),this,SLOT(stopMediaAcc()));

    connect(ui->activateDownsampleEcg,SIGNAL(stateChanged(int)),this,SLOT(cambioDownSampleEcg()));
    connect(ui->startAverageEcg,SIGNAL(clicked(bool)),this,SLOT(startMediaEcg()));
    connect(ui->stopAverageEcg,SIGNAL(clicked(bool)),this,SLOT(stopMediaEcg()));


    connect(ui->startDetection,SIGNAL(clicked(bool)),this,SLOT(startDeteccionPicos()));
    connect(ui->stopDetection,SIGNAL(clicked(bool)),this,SLOT(stopDeteccionPicos()));

    connect(ui->startDetectionAcc,SIGNAL(clicked(bool)),this,SLOT(startDeteccionAcc()));
    connect(ui->stopDetectionAcc,SIGNAL(clicked(bool)),this,SLOT(stopDeteccionAcc()));

    connect(ui->startDetectionEcg,SIGNAL(clicked(bool)),this,SLOT(startDeteccionEcg()));
    connect(ui->stopDetectionEcg,SIGNAL(clicked(bool)),this,SLOT(stopDeteccionEcg()));

    connect(ui->tabWidget,SIGNAL(currentChanged(int)),this,SLOT(tabConnection()));

    connect(ui->masEscalaEmgPpal,SIGNAL(clicked(bool)),this,SLOT(masEscalaEmg()));
    connect(ui->menosEscalaEmgPpal,SIGNAL(clicked(bool)),this,SLOT(menosEscalaEmg()));

    connect(ui->masEscalaEmgProcesado,SIGNAL(clicked(bool)),this,SLOT(masEscalaEmg()));
    connect(ui->menosEscalaEmgProcesado,SIGNAL(clicked(bool)),this,SLOT(menosEscalaEmg()));

    connect(ui->channelListCapture,SIGNAL(activated(int)),this,SLOT(seleccionarCaptura()));


    connect(&readTimer,SIGNAL(timeout()),this,SLOT(readFrames()));
    connect(&relojBpm,SIGNAL(timeout()),this,SLOT(timeoutEcg()));
    connect(&relojCalibracion,SIGNAL(timeout()),this,SLOT(decrementarRelojCalibracion()));

    connect(&relojAcc,SIGNAL(timeout()),this,SLOT(lecturaAcc()));



    captura=false;
    readTimer.stop();
    relojBpm.stop();
    relojCalibracion.stop();
    relojAcc.stop();

    t=NULL;
    fichero=NULL;


}

void RoboSignals::setDifferentialProxy(DifferentialRobotPrx *_differentialrobot_proxy){
	differentialrobot_proxy=_differentialrobot_proxy;
        t = new ThreadDifferentialProxy(this->differentialrobot_proxy);
       t->start();

}

void RoboSignals::lecturaAcc(){
    relojAcc.stop();
    if (estadoEmg==1){
        int velocidad;
        float angulo;
        velocidad = (valorEjeY+1)*600;
        angulo = (-valorEjeX)*3.1416;
//        if (angulo>0.8||angulo<-0.8)
//            ordenRobot(800,angulo);
//        else
            ordenRobot(velocidad,angulo);
        relojAcc.start(250);
    }

}


void RoboSignals::masEscalaEmg(){

    escalaEmg-=escalaEmg*0.2;
    //float inc=escalaEmg/5;

    // plotEmgPpal.setAxisScale(QwtPlot::yLeft,-escalaEmg,escalaEmg,inc);
    //plotEmgProcesado.setAxisScale(QwtPlot::yLeft,-escalaEmg,escalaEmg,inc);
}

void RoboSignals::menosEscalaEmg(){

    escalaEmg+=escalaEmg*0.2;
    float inc=escalaEmg/5;
    this->plotEmgPpal.setAxisScale(QwtPlot::yLeft,-escalaEmg,escalaEmg,inc);
    this->plotEmgProcesado.setAxisScale(QwtPlot::yLeft,-escalaEmg,escalaEmg,inc);
}



RoboSignals::~RoboSignals()
{
    qDebug()<<"Entra en el destructor\n";
    if (filtro!= NULL)
        delete filtro;
    if (filtroAccX!= NULL)
        delete filtroAccX;
    if (filtroAccZ!= NULL)
        delete filtroAccZ;
    if (filtroAccY!= NULL)
        delete filtroAccY;
    if (filtroEcg!= NULL)
        delete filtroEcg;


    if(bitDevice != NULL)
        delete bitDevice;
    delete ui;
    if (fichero != NULL){
        fichero->close();
        delete fichero;
    }
    if (markerAccX != NULL){
        delete markerAccX;
    }
    if (markerAccY != NULL){
        delete markerAccY;
    }
    if (markerAccZ != NULL){
        delete markerAccZ;
    }
    delete markerEmg;
    delete markerEcg;

    delete filtro;
    delete dialogo;
    //Liberación de los QwtPlotGrid
    delete grid;
    delete grid2;
    delete grid3;
    delete grid4;
    delete gridAccY;
    delete gridAccZ;
    delete gridEcgPpal;
    delete gridEcgProcesado;
    delete gridEcgPicos;
    delete gridAccXProcesado;
    delete gridAccYProcesado;
    delete gridAccZProcesado;



        if (curvaEmg!=NULL)
            delete curvaEmg;




    if (curvaEmgProcesada!=NULL)
        delete curvaEmgProcesada;
    if (curvaEmgPicos!=NULL)
        delete curvaEmgPicos;
    if (curvaEcg!=NULL)
        delete curvaEcg;
    if (curvaEcgProcesada!=NULL)
        delete curvaEcgProcesada;
    if (curvaEcgPicos!=NULL)
        delete curvaEcgPicos;
    if (curvaAccX!=NULL)
        delete curvaAccX;
    if (curvaAccY!=NULL)
        delete curvaAccY;
    if (curvaAccZ!=NULL)
        delete curvaAccZ;
    if (curvaAccXProcesada!=NULL)
        delete curvaAccXProcesada;
    if (curvaAccYProcesada!=NULL)
        delete curvaAccYProcesada;
    if (curvaAccZProcesada!=NULL)
        delete curvaAccZProcesada;

    if (t!=NULL)
        delete t;

    qDebug()<<"Sale del destructor\n";
}
void RoboSignals::nuevaMac()
{
    if (dialogo!=NULL)
     delete dialogo;
    dialogo = new DialogoMac(this);
    dialogo->show();
}




void RoboSignals::decrementarRelojCalibracion(){
    segundosCalibracionEmg--;
    if (this->segundosCalibracionEmg==0){
        this->calibracionEmg=false;
        this->ui->resultEmgProcessor->setText("EMG Calibration finished.");
        relojCalibracion.stop();

    }else{
        QString mensaje=QString("EMG Calibration...  %1 seconds remaining...").arg(segundosCalibracionEmg);
        this->ui->resultEmgProcessor->setText(mensaje);
        relojCalibracion.start(1000);
    }
}

void RoboSignals::timeoutEcg(){
       float bpm = (float) this->contadorPicosEcg / (float)ui->intervaloEcg->value();
       bpm = bpm*60;
       ui->lcdBpm->display(bpm);
       relojBpm.start(ui->intervaloEcg->value()*1000);
       this->contadorPicosEcg=0;

}


void RoboSignals::startCalibracionEmg(){
    this->calibracionEmg=true;
    this->picoMaxCalibracion=0;
    this->segundosCalibracionEmg=ui->calibrationTime->value();
    QString mensaje=QString("EMG Calibration...  %1 seconds remaining...").arg(segundosCalibracionEmg);
    this->ui->resultEmgProcessor->setText(mensaje);
    relojCalibracion.start(1000);
}


void RoboSignals::checkBoxEmg(){
    if (ui->checkBoxEmg->isChecked()){
        ui->startButton->setEnabled(true);
        ui->channelListEmg->setEnabled(true);
        canalesAbiertos++;
    }
    else{
        ui->channelListEmg->setEnabled(false);
        canalesAbiertos--;
        if (canalesAbiertos==0)
            ui->startButton->setEnabled(false);
    }

}

void RoboSignals::checkBoxEcg(){
        if (ui->checkBoxEcg->isChecked()){
            ui->startButton->setEnabled(true);
            ui->channelListEcg->setEnabled(true);
            canalesAbiertos++;
        }
        else{
            ui->channelListEcg->setEnabled(false);
            canalesAbiertos--;
            if (canalesAbiertos==0)
                ui->startButton->setEnabled(false);
        }

    }

void RoboSignals::checkBoxAccX(){
    if (ui->checkBoxAccX->isChecked()){
        ui->channelListAccX->setEnabled(true);
        ui->startButton->setEnabled(true);
        canalesAbiertos++;
    }
    else{
        ui->channelListAccX->setEnabled(false);
        canalesAbiertos--;
        if (canalesAbiertos==0)
            ui->startButton->setEnabled(false);
    }
}

void RoboSignals::checkBoxAccY(){
    if (ui->checkBoxAccY->isChecked()){
        ui->channelListAccY->setEnabled(true);
        ui->startButton->setEnabled(true);
        canalesAbiertos++;
    }
    else{
        ui->channelListAccY->setEnabled(false);
        canalesAbiertos--;
        if (canalesAbiertos==0)
            ui->startButton->setEnabled(false);
    }
}

void RoboSignals::checkBoxAccZ(){
    if (ui->checkBoxAccZ->isChecked()){
        ui->channelListAccZ->setEnabled(true);
        ui->startButton->setEnabled(true);
        canalesAbiertos++;
    }
    else{
        ui->channelListAccZ->setEnabled(false);
        canalesAbiertos--;
        if (canalesAbiertos==0)
            ui->startButton->setEnabled(false);
    }
}


void RoboSignals::checkBoxFilterAccX(){


    if (ui->checkBoxFilterAccX->isChecked()||ui->checkBoxFilterAccY->isChecked()||ui->checkBoxFilterAccZ->isChecked()){
        ui->startAverageAcc->setEnabled(true);
        ui->startButterworthAcc->setEnabled(true);
        // ui->startDetection->setEnabled(true);
    }
    else{
        ui->startAverageAcc->setEnabled(false);
        ui->startButterworthAcc->setEnabled(false);
    }
}

void RoboSignals::checkBoxFilterAccY(){
    if (ui->checkBoxFilterAccX->isChecked()||ui->checkBoxFilterAccY->isChecked()||ui->checkBoxFilterAccZ->isChecked()){
        ui->startAverageAcc->setEnabled(true);
        ui->startButterworthAcc->setEnabled(true);
        // ui->startDetection->setEnabled(true);
    }
    else{
        ui->startAverageAcc->setEnabled(false);
        ui->startButterworthAcc->setEnabled(false);
    }
}

void RoboSignals::checkBoxFilterAccZ(){
    if (ui->checkBoxFilterAccX->isChecked()||ui->checkBoxFilterAccY->isChecked()||ui->checkBoxFilterAccZ->isChecked()){
        ui->startAverageAcc->setEnabled(true);
        ui->startButterworthAcc->setEnabled(true);
        // ui->startDetection->setEnabled(true);
    }
    else{
        ui->startAverageAcc->setEnabled(false);
        ui->startButterworthAcc->setEnabled(false);
    }
}



void RoboSignals::introducirMac(QString mac){

    //std::cout<<"Numero: "<<mac.toStdString().c_str()<<std::endl;
    this->ui->macList->addItem(mac);
}

void RoboSignals::startDebug(){
this->estadoEmg=1;
   accionEmg();
   if (detectarAcc==true){
       relojAcc.start(250);
   }
}

void RoboSignals::stopDebug(){
    this->estadoEmg=0;
    relojAcc.stop();
    accionEmg2();
}





void RoboSignals::connectToBITalino()
{
    QString mac = ui->macList->currentText();
    if(bitDevice != NULL){
        delete bitDevice;
        bitDevice = NULL;
    }
    try{
        bitDevice = new BITalino(mac.toStdString().c_str());

        ui->connectionLabel->setText("Connection stablished");
        ui->connectionIconLabel->setPixmap(QPixmap("./icons/ok-icon.png"));
        ui->connectionIconLabel->adjustSize();
        ui->checkBoxAccX->setEnabled(true);
        ui->checkBoxAccY->setEnabled(true);
        ui->checkBoxAccZ->setEnabled(true);
        ui->checkBoxEmg->setEnabled(true);
        ui->checkBoxEcg->setEnabled(true);

    }
    catch(BITalino::Exception &be)
    {

        ui->result->setText(be.getDescription());
        ui->connectionLabel->setText("Connection failed");
        ui->connectionIconLabel->setPixmap(QPixmap("./icons/error-icon.png"));
        ui->connectionIconLabel->adjustSize();
    }

}
void RoboSignals::startButterworthEcg(){
    this->filtroActivoEcg=true;
    ui->stopButterworthEcg->setEnabled(true);
    ui->startButterworthEcg->setEnabled(false);
    ui->startDetectionEcg->setEnabled(true);
    this->tipoFiltroEcg=ui->filterListEcg->currentIndex();
}
void RoboSignals::stopButterworthEcg(){
    this->filtroActivoEcg=false;
    ui->stopButterworthEcg->setEnabled(false);
    if (this->adquiriendo&&this->ui->checkBoxEcg->isEnabled())
        ui->startButterworthEcg->setEnabled(true);
}
void RoboSignals::startMediaEcg(){
    this->mediaEcg=true;
    ui->stopAverageEcg->setEnabled(true);
    ui->startAverageEcg->setEnabled(false);
    this->filtroEcg = new Filtro(ui->windowSizeEcg->value());
}
void RoboSignals::stopMediaEcg(){
    this->mediaEcg=false;
    ui->stopAverageEcg->setEnabled(false);
    ui->startAverageEcg->setEnabled(true);
    delete this->filtroEcg;
}



void RoboSignals::startDeteccionEcg(){
    this->filtroEcg->setTamVentanaEnvolvente(this->ui->envelopeWindowEcg->value());
    this->detectarEcg=true;
    ui->stopDetectionEcg->setEnabled(true);
    ui->startDetectionEcg->setEnabled(false);
    relojBpm.start(ui->intervaloEcg->value()*1000);
}
void RoboSignals::stopDeteccionEcg(){
    this->detectarEcg=false;
    ui->stopDetectionEcg->setEnabled(false);
    ui->startDetectionEcg->setEnabled(true);
    this->relojBpm.stop();
    this->contadorPicosEcg=0;

}


void RoboSignals::cambioDownSampleEcg(){
    if (ui->activateDownsampleEcg->isChecked()){
        ui->downsampleWindowEcg->setEnabled(true);
    }
    else{
        ui->downsampleWindowEcg->setEnabled(false);
    }
}

void RoboSignals::startAdquisition()
{
    ui->startButton->setEnabled(false);
    ui->stopButton->setEnabled(true);

    BITalino::Vint channelBit;
    channelBit.clear();
    //  channel = ui->channelList->currentIndex();
    //channelBit.push_back(channel);

    try{

        bitDevice->start(1000,channelBit,false);
        ui->result->setText("");
        frameNumber = 0;
        readTimer.start(100);
        ui->startCapture->setEnabled(true);
        ui->channelListCapture->setEnabled(true);
        if (ui->checkBoxEmg->isChecked()){
            ui->startAverage->setEnabled(true);
            ui->startButterworth->setEnabled(true);
            ui->startDetection->setEnabled(true);
            ui->masEscalaEmgPpal->setEnabled(true);
            ui->menosEscalaEmgPpal->setEnabled(true);
            ui->masEscalaEmgProcesado->setEnabled(true);
            ui->menosEscalaEmgProcesado->setEnabled(true);

        }
        if (ui->checkBoxEcg->isChecked()){
            ui->startAverageEcg->setEnabled(true);
            ui->startButterworthEcg->setEnabled(true);
            ui->startDetectionEcg->setEnabled(true);

        }
        if (ui->checkBoxAccX->isEnabled()||ui->checkBoxAccY->isEnabled()||ui->checkBoxAccZ->isEnabled()){
            ui->checkBoxFilterAccX->setEnabled(true);
            ui->checkBoxFilterAccX->setEnabled(true);
            ui->checkBoxFilterAccX->setEnabled(true);
            if (ui->checkBoxFilterAccX->isChecked()||ui->checkBoxFilterAccY->isChecked()||ui->checkBoxFilterAccZ->isChecked()){
                ui->startAverageAcc->setEnabled(true);
                ui->startButterworthAcc->setEnabled(true);
                ui->startDetectionAcc->setEnabled(true);
                // ui->startDetection->setEnabled(true);
            }

        }

        adquiriendo=true;
        this->ui->channelListCapture->setEnabled(true);
        this->seleccionarCaptura();
    }
    catch(BITalino::Exception &be)
    {
        ui->startButton->setEnabled(true);
        ui->stopButton->setEnabled(false);
        ui->result->setText(be.getDescription());
    }
}


void RoboSignals::seleccionarCaptura(){
    // ui->result->setText("Se ha pulsado el canal: " );
    //std::cout<<"Pulsado canal: "<< ui->channelListCapture->currentIndex()<<std::endl;
    switch(ui->channelListCapture->currentIndex()){
    case 0:
        if (ui->checkBoxEmg->isChecked()){
            ui->startCapture->setEnabled(true);
        }
        else{
            ui->startCapture->setEnabled(false);
        }
        break;
    case 1:
        if (ui->checkBoxAccX->isChecked()){
            ui->startCapture->setEnabled(true);
        }
        else{
            ui->startCapture->setEnabled(false);
        }
        break;
    case 2:
        if (ui->checkBoxAccY->isChecked()){
            ui->startCapture->setEnabled(true);
        }
        else{
            ui->startCapture->setEnabled(false);
        }
        break;
    case 3:
        if (ui->checkBoxAccZ->isChecked()){
            ui->startCapture->setEnabled(true);
        }
        else{
            ui->startCapture->setEnabled(false);
        }
        break;
    case 4:
        if (ui->checkBoxEcg->isChecked()){
            ui->startCapture->setEnabled(true);
        }
        else{
            ui->startCapture->setEnabled(false);
        }
        break;

    default:
        ui->startCapture->setEnabled(false);
    }

}

void RoboSignals::limpiarPlotEmgPpal(){
    plotEmgPpal.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotEmgPpal.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotEmgPpal.replot();
    plotEmgPpal.update();

}

void RoboSignals::limpiarPlotEcgPpal(){
    plotEcgPpal.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotEcgPpal.replot();
    plotEcgPpal.update();
}


void RoboSignals::limpiarPlotAccXPpal(){
    plotAccXPpal.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotAccXPpal.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccXPpal.replot();
    plotAccXPpal.update();
}

void RoboSignals::limpiarPlotAccYPpal(){
    plotAccYPpal.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotAccYPpal.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccYPpal.replot();
    plotAccYPpal.update();
}

void RoboSignals::limpiarPlotAccZPpal(){
    plotAccZPpal.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotAccZPpal.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccZPpal.replot();
    plotAccZPpal.update();
}

void RoboSignals::limpiarPlotAccXProcesado(){
    plotAccXProcesado.detachItems( QwtPlotItem::Rtti_PlotCurve );
   // plotAccXProcesado.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccXProcesado.replot();
    plotAccXProcesado.update();
}

void RoboSignals::limpiarPlotAccYProcesado(){
    plotAccYProcesado.detachItems( QwtPlotItem::Rtti_PlotCurve );
   // plotAccYProcesado.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccYProcesado.replot();
    plotAccYProcesado.update();
}

void RoboSignals::limpiarPlotAccZProcesado(){
    plotAccZProcesado.detachItems( QwtPlotItem::Rtti_PlotCurve );
    //plotAccZProcesado.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccZProcesado.replot();
    plotAccZProcesado.update();
}


void RoboSignals::limpiarPlotEmgProcesado(){
    plotEmgProcesado.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotEmgProcesado.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotEmgProcesado.replot();
    plotEmgProcesado.update();
}

void RoboSignals::limpiarPlotEcgProcesado(){
    plotEcgProcesado.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotEcgProcesado.replot();
    plotEcgProcesado.update();
}


void RoboSignals::limpiarPlotEmgPicos(){
    plotEmgPicos.detachItems( QwtPlotItem::Rtti_PlotCurve );
    //plotEmgPicos.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotEmgPicos.replot();
    plotEmgPicos.update();
}


void RoboSignals::limpiarPlotEcgPicos(){
    plotEcgPicos.detachItems( QwtPlotItem::Rtti_PlotCurve );
    //plotEmgPicos.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotEcgPicos.replot();
    plotEcgPicos.update();
}

void RoboSignals::stopAdquisition()
{
    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(true);
    ui->startCapture->setEnabled(false);
    ui->channelListCapture->setEnabled(false);
    ui->stopCapture->setEnabled(false);
    adquiriendo=false;

    bitDevice->stop();
    readTimer.stop();
    frameNumber = 0;
    ui->result->setText("");

    stopButterworth();
    limpiarPlotEmgPpal();
    limpiarPlotAccXPpal();
    limpiarPlotAccYPpal();
    limpiarPlotAccZPpal();
    limpiarPlotEcgPpal();
    // limpiarPlotEmgProcesado();
    // limpiarPlotEmgPicos();
    if (this->filtroActivo)
        stopButterworth();
    if (this->filtroActivoAcc)
        stopButterworthAcc();
    if (this->filtroActivoEcg)
        stopButterworthEcg();
    if (this->captura)
        stopCapture();
    if (this->media)
        stopMedia();
    if (this->mediaAcc)
        stopMediaAcc();
    if (this->mediaEcg)
        stopMediaEcg();
    if (this->detectarPicos)
        stopDeteccionPicos();
    if (this->detectarAcc)
        stopDeteccionAcc();
    if (this->detectarEcg)
        stopDeteccionEcg();

    ui->startAverage->setEnabled(false);
    ui->startAverageAcc->setEnabled(false);
    ui->startAverageEcg->setEnabled(false);
    ui->startButterworth->setEnabled(false);
    ui->startButterworthAcc->setEnabled(false);
    ui->startButterworthEcg->setEnabled(false);
    ui->startCapture->setEnabled(false);
    ui->startDetection->setEnabled(false);
    ui->startDetectionAcc->setEnabled(false);
    ui->startAverageEcg->setEnabled(false);

    ui->masEscalaEmgPpal->setEnabled(false);
    ui->menosEscalaEmgPpal->setEnabled(false);


    ui->masEscalaEmgProcesado->setEnabled(false);
    ui->menosEscalaEmgProcesado->setEnabled(false);

    ui->channelListCapture->setEnabled(false);

}

void RoboSignals::startCapture(){
    if (fichero!=NULL)
        delete fichero;

    fichero = new std::ofstream("datos.txt");
    ui->startCapture->setEnabled(false);
    ui->stopCapture->setEnabled(true);
    captura=true;
}
void RoboSignals::stopCapture(){
    captura=false;
    fichero->close();
    ui->startCapture->setEnabled(true);
    ui->stopCapture->setEnabled(false);

}


void RoboSignals::startButterworth(){
    this->filtroActivo=true;
    ui->stopButterworth->setEnabled(true);
    ui->startButterworth->setEnabled(false);
    this->tipoFiltro=ui->filterList->currentIndex();
}

void RoboSignals::stopButterworth(){
    this->filtroActivo=false;
    ui->stopButterworth->setEnabled(false);
    if (this->adquiriendo&&this->ui->checkBoxEmg->isEnabled())
        ui->startButterworth->setEnabled(true);
}


void RoboSignals::startButterworthAcc(){
    this->filtroActivoAcc=true;
    ui->stopButterworthAcc->setEnabled(true);
    ui->startButterworthAcc->setEnabled(false);
    ui->startDetectionAcc->setEnabled(true);
    this->tipoFiltroAcc=ui->filterListAcc->currentIndex();
    //std::cout<<"Tipo filtro: "<<tipoFiltro<<std::endl;
}

void RoboSignals::stopButterworthAcc(){
    this->filtroActivoAcc=false;
    ui->stopButterworthAcc->setEnabled(false);
    if (this->adquiriendo&&(this->ui->checkBoxAccX->isEnabled()||this->ui->checkBoxAccY->isEnabled()||this->ui->checkBoxAccZ->isEnabled()))
        if (ui->checkBoxFilterAccX->isChecked()||ui->checkBoxFilterAccY->isChecked()||ui->checkBoxFilterAccZ->isChecked()){
            ui->startButterworthAcc->setEnabled(true);
        }

    if (!this->mediaAcc){
        ui->startDetectionAcc->setEnabled(false);
        this->detectarAcc=false;
    }
}

void RoboSignals::accionEmg(){
    ordenRobot(400,0);

}
void RoboSignals::accionAccX(){}
void RoboSignals::accionAccY(){}
void RoboSignals::accionAccZ(){}

void RoboSignals::ordenRobot(int velocidad, float angulo){
    //ThreadDifferentialProxy *t = new ThreadDifferentialProxy(this->differentialrobot_proxy,velocidad,angulo);
    //t->start();
   // (*differentialrobot_proxy)->begin_setSpeedBase(velocidad, angulo);
    Mensaje m(velocidad, angulo);
    t->nuevoMensaje(m);

}



void RoboSignals::accionEmg2(){
    ordenRobot(0,0);

}

void RoboSignals::accionAccX2(){}
void RoboSignals::accionAccY2(){}
void RoboSignals::accionAccZ2(){}


void RoboSignals::cambioDownSample(){
    if (ui->activateDownsample->isChecked()){
        ui->downsampleWindow->setEnabled(true);
    }
    else{
        ui->downsampleWindow->setEnabled(false);
    }
}

void RoboSignals::cambioDownSampleAcc(){
    if (ui->activateDownsampleAcc->isChecked()){
        ui->downsampleWindowAcc->setEnabled(true);
    }
    else{
        ui->downsampleWindowAcc->setEnabled(false);
    }
}

void RoboSignals::startMedia(){
    this->media=true;
    ui->stopAverage->setEnabled(true);
    ui->startAverage->setEnabled(false);
    if (filtro!=NULL)
        delete filtro;
    this->filtro = new Filtro(ui->windowSize->value(),this->ui->envelopeWindow->value());

}

void RoboSignals::stopMedia(){
    this->media=false;
    ui->stopAverage->setEnabled(false);
    ui->startAverage->setEnabled(true);
    delete this->filtro;
}


void RoboSignals::startMediaAcc(){
    this->mediaAcc=true;
    ui->stopAverageAcc->setEnabled(true);
    ui->startAverageAcc->setEnabled(false);
    if (filtroAccX!=NULL)
        delete filtroAccX;
    if (filtroAccY!=NULL)
        delete filtroAccY;
    if (filtroAccZ!=NULL)
        delete filtroAccZ;
    this->filtroAccX = new Filtro(ui->windowSizeAcc->value(),this->ui->envelopeWindow->value());
    this->filtroAccY = new Filtro(ui->windowSizeAcc->value(),this->ui->envelopeWindow->value());
    this->filtroAccZ = new Filtro(ui->windowSizeAcc->value(),this->ui->envelopeWindow->value());

    ui->startDetectionAcc->setEnabled(true);
}

void RoboSignals::stopMediaAcc(){
    this->mediaAcc=false;
    ui->stopAverageAcc->setEnabled(false);
    if (this->adquiriendo&&(this->ui->checkBoxAccX->isEnabled()||this->ui->checkBoxAccY->isEnabled()||this->ui->checkBoxAccZ->isEnabled()))
        if (ui->checkBoxFilterAccX->isChecked()||ui->checkBoxFilterAccY->isChecked()||ui->checkBoxFilterAccZ->isChecked()){
            ui->startAverageAcc->setEnabled(true);
        }
    delete this->filtroAccX;
    delete this->filtroAccY;
    delete this->filtroAccZ;
    if (!this->filtroActivoAcc){
        ui->startDetectionAcc->setEnabled(false);
        this->detectarAcc=false;
    }
}


void RoboSignals::startDeteccionPicos(){
    this->filtro->setTamVentanaEnvolvente(this->ui->envelopeWindow->value());
    this->detectarPicos=true;
    ui->stopDetection->setEnabled(true);
    ui->startDetection->setEnabled(false);
    ui->calibrationButtonEmg->setEnabled(true);
    if (detectarAcc==true)
        relojAcc.start(250);
}
void RoboSignals::stopDeteccionPicos(){
    this->detectarPicos=false;
    ui->stopDetection->setEnabled(false);
    ui->startDetection->setEnabled(true);
    ui->calibrationButtonEmg->setEnabled(false);

}

void RoboSignals::startDeteccionAcc(){
    ui->startDetectionAcc->setEnabled(false);
    ui->stopDetectionAcc->setEnabled(true);
    this->detectarAcc=true;
    if (estadoEmg==1)
        relojAcc.start(250);
}

void RoboSignals::stopDeteccionAcc(){
    ui->startDetectionAcc->setEnabled(true);
    ui->stopDetectionAcc->setEnabled(false);
    this->detectarAcc=false;
}

void RoboSignals::tabConnection(){
    pagina=0;
}


void RoboSignals::procesarEmg(float senal[]){

    QPolygonF  puntosEmgFiltrada;
    QPolygonF *puntosEmgPicos = new QPolygonF();
    QVector<QPointF> mediaDownsample,envolvente;
    float filtrada[100];

    if (this->filtroActivo){   //Filtro paso bajo activo
        switch(tipoFiltro){
        case 0:
            Filtro::butterworth_PasoBajo_40hzs_Orden6(senal,filtrada,100);
            break;
        case 1:
            Filtro::butterworth_PasoBajo_100hzs_Orden6(senal,filtrada,100);
            break;
        default:
            break;
        }
        if (this->media==false){    //Filtro activo, media a falso, se pinta el resultado del filtro
            if (!ultimoPuntoFiltrada.isNull()&&ultimoPuntoFiltrada.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
                puntosEmgFiltrada<<ultimoPuntoFiltrada;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
            }
            for (int var = 0; var < 100; ++var) {
                puntosEmgFiltrada<< QPointF(var+pagina*100,filtrada[var]);
                 //std::cout<<var<<"  :  "<<filtrada[var]<<std::endl;
            }
            ultimoPuntoFiltrada=QPointF((99+pagina*100),filtrada[99]);
        }
    }
    else{           //Sin filtro de paso bajo
        if (!this->media){         //Filtro desactivado, media desactivada, se pinta la señal original
            for(unsigned i = 0; i < 100; i++)
                puntosEmgFiltrada<< QPointF(i+pagina*100,senal[i]);
        }
    }
    if (this->media){             //Media activa
        int ventanaDownsample;
        if (this->ui->activateDownsample->isChecked())  //Media activa con downsample (reduccion de muestras)
            ventanaDownsample=ui->downsampleWindow->value();
        else
            ventanaDownsample=1;
        if(this->filtroActivo){         //Si el filtro esta activo, hacemos la media a partir de este
            filtro->mediaMovilDownSample(filtrada,100,mediaDownsample,ventanaDownsample,pagina,true);
        }
        else{           //Filtro desactivado, hacemos la media a partir de la señal original
            filtro->mediaMovilDownSample(senal,100,mediaDownsample,ventanaDownsample,pagina, true);
        }
        if (!ultimoPuntoMedia.isNull()&&ultimoPuntoMedia.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
            puntosEmgFiltrada<<ultimoPuntoMedia;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
        }
        for (int var = 0; var < mediaDownsample.size(); ++var) {   //Creamos el polinomio
            puntosEmgFiltrada<<QPointF(mediaDownsample.at(var).x(),mediaDownsample.at(var).y());
        }
        ultimoPuntoMedia=QPointF(mediaDownsample.at(mediaDownsample.size()-1).x(),mediaDownsample.at(mediaDownsample.size()-1).y());
    }

    if (this->detectarPicos&&this->media){

        filtro->envolvente(mediaDownsample,envolvente,(float)ui->minValue->value());
        if (!ultimoPuntoEnvolvente.isNull()&&ultimoPuntoEnvolvente.x()<this->pagina*100){
            *puntosEmgPicos<<this->ultimoPuntoEnvolvente;
        }

        for (int var = 0; var < envolvente.size(); ++var) {
            if (var==0&&pagina==1){
                delete puntosEmgPicos;
                puntosEmgPicos = new QPolygonF();
            }
            *puntosEmgPicos<< QPointF(envolvente.at(var).x(),envolvente.at(var).y());
            if ((!calibracionEmg)&&(envolvente.at(var).y()>ui->threshold->value()&&!picoDetectado)){
                ui->peakDetected->setPixmap(QPixmap("./icons/green-led-on.png"));
                this->contadorPicos++;
                ui->peakCounter->display(this->contadorPicos);
                picoDetectado=true;
                //-------------------------LLAMADA A LA ACCIÓN DESEADA
                if (estadoEmg==0){
                    estadoEmg=1;
                    if (detectarAcc==true)
                        relojAcc.start(250);
                    this->accionEmg();
                }
                else{
                    estadoEmg=0;
                    if (detectarAcc==true)
                        relojAcc.stop();
                    this->accionEmg2();
                }
            }
            if (envolvente.at(var).y()<ui->threshold->value()&&picoDetectado){
                ui->peakDetected->setPixmap(QPixmap("./icons/green-led-off.png"));
                picoDetectado=false;
            }
        }
        if (envolvente.size()>0)
            this->ultimoPuntoEnvolvente=QPointF(envolvente.at(envolvente.size()-1).x(),envolvente.at(envolvente.size()-1).y());
    }
    if (this->calibracionEmg){
        calibrarEmg(*puntosEmgPicos);
    }
    if (this->ui->tabEmgProcessor->isVisible()){
        pintarEmgProcesado(puntosEmgFiltrada);
        pintarEmgPicos(*puntosEmgPicos);
    }
    if (puntosEmgPicos!=NULL)
        delete puntosEmgPicos;
}

void RoboSignals::calibrarEmg(QPolygonF puntosSenalEmg){
    for (int var = 0; var < puntosSenalEmg.size(); ++var) {
        if(puntosSenalEmg.at(var).y()>picoMaxCalibracion){
            picoMaxCalibracion = puntosSenalEmg.at(var).y();
            ui->threshold->setValue(picoMaxCalibracion/3);
            pintarThresholdEmg();
        }
    }


}


void RoboSignals::procesarEcg(float senal[]){
    QPolygonF  puntosEcgFiltrada;
    QPolygonF *puntosEcgPicos = new QPolygonF();
    QVector<QPointF> mediaDownsample, envolvente;
    float filtrada[100];

    if (this->filtroActivoEcg){   //Filtro paso bajo activo
        switch(tipoFiltroEcg){
        case 0:
            Filtro::butterworth_PasoBajo_40hzs_Orden6(senal,filtrada,100);
            break;
        case 1:
            Filtro::butterworth_PasoBajo_100hzs_Orden6(senal,filtrada,100);
            break;
        default:
            break;
        }
        if (this->mediaEcg==false){    //Filtro activo, media a falso, se pinta el resultado del filtro
            if (!ultimoPuntoFiltradaEcg.isNull()&&ultimoPuntoFiltradaEcg.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
                puntosEcgFiltrada<<ultimoPuntoFiltradaEcg;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
            }
            for (int var = 0; var < 100; ++var) {
                puntosEcgFiltrada<< QPointF(var+pagina*100,filtrada[var]);
                 //std::cout<<var<<"  :  "<<filtrada[var]<<std::endl;
            }
            ultimoPuntoFiltradaEcg=QPointF((99+pagina*100),filtrada[99]);
        }
    }
    else{           //Sin filtro de paso bajo
        if (!this->mediaEcg){         //Filtro desactivado, media desactivada, se pinta la señal original
            for(unsigned i = 0; i < 100; i++)
                puntosEcgFiltrada<< QPointF(i+pagina*100,senal[i]);
        }
    }
    if (this->mediaEcg){             //Media activa

        int ventanaDownsample;
        if (this->ui->activateDownsampleEcg->isChecked())  //Media activa con downsample (reduccion de muestras)
            ventanaDownsample=ui->downsampleWindowEcg->value();
        else
            ventanaDownsample=1;
        if(this->filtroActivoEcg){         //Si el filtro esta activo, hacemos la media a partir de este
            filtroEcg->mediaMovilDownSample(filtrada,100,mediaDownsample,ventanaDownsample,pagina,true);
        }
        else{           //Filtro desactivado, hacemos la media a partir de la señal original

            filtroEcg->mediaMovilDownSample(senal,100,mediaDownsample,ventanaDownsample,pagina, true);

        }
        if (!ultimoPuntoMediaEcg.isNull()&&ultimoPuntoMediaEcg.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
            puntosEcgFiltrada<<ultimoPuntoMediaEcg;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
        }
        for (int var = 0; var < mediaDownsample.size(); ++var) {   //Creamos el polinomio
            puntosEcgFiltrada<<QPointF(mediaDownsample.at(var).x(),mediaDownsample.at(var).y());
        }
        ultimoPuntoMediaEcg=QPointF(mediaDownsample.at(mediaDownsample.size()-1).x(),mediaDownsample.at(mediaDownsample.size()-1).y());
    }

    if (this->detectarEcg&&this->mediaEcg){
        filtroEcg->envolvente(mediaDownsample,envolvente,(float)ui->minValueEcg->value());
        if (!ultimoPuntoEnvolventeEcg.isNull()&&ultimoPuntoEnvolventeEcg.x()<this->pagina*100){
            *puntosEcgPicos<<this->ultimoPuntoEnvolventeEcg;
        }

        for (int var = 0; var < envolvente.size(); ++var) {
            if (var==0&&pagina==1){
                delete puntosEcgPicos;
                puntosEcgPicos = new QPolygonF();
            }
            *puntosEcgPicos<< QPointF(envolvente.at(var).x(),envolvente.at(var).y());
            if (envolvente.at(var).y()>ui->thresholdEcg->value()&&!picoDetectadoEcg){
                ui->peakDetectedEcg->setPixmap(QPixmap("./icons/green-led-on.png"));
                this->contadorPicosEcg++;
                ui->peakCounterEcg->display(this->contadorPicosEcg);
                picoDetectadoEcg=true;

                //-------------------------LLAMADA A LA ACCIÓN DESEADA 1

            }
            if (envolvente.at(var).y()<ui->thresholdEcg->value()&&picoDetectadoEcg){
                ui->peakDetectedEcg->setPixmap(QPixmap("./icons/green-led-off.png"));
                picoDetectadoEcg=false;
                 //-------------------------LLAMADA A LA ACCIÓN DESEADA 2
            }
        }
        if (envolvente.size()>0)
            this->ultimoPuntoEnvolventeEcg=QPointF(envolvente.at(envolvente.size()-1).x(),envolvente.at(envolvente.size()-1).y());
    }
    if (this->ui->tabEcgProcessor->isVisible()){
        pintarEcgProcesado(puntosEcgFiltrada);
        pintarEcgPicos(*puntosEcgPicos);
    }
    if (puntosEcgPicos!=NULL)
        delete puntosEcgPicos;
}


void RoboSignals::procesarAcc(float senal[], int eje){
    QPolygonF  puntosAccFiltrada;
    QVector<QPointF> mediaDownsample;
    float filtrada[100];
    bool activo=false;

    switch(eje){
    case 0:
        activo = ui->checkBoxFilterAccX->isChecked();
        break;
    case 1:
        activo = ui->checkBoxFilterAccY->isChecked();
        break;
    case 2:
        activo = ui->checkBoxFilterAccZ->isChecked();
        break;
    }

    if (this->filtroActivoAcc && activo){   //Filtro paso bajo activo
        switch(tipoFiltroAcc){
        case 0:
            Filtro::butterworth_PasoBajo_40hzs_Orden6(senal,filtrada,100);
            break;
        case 1:
            Filtro::butterworth_PasoBajo_100hzs_Orden6(senal,filtrada,100);
            break;
        default:
            break;
        }
        if (this->mediaAcc==false){    //Filtro activo, media a falso, se pinta el resultado del filtro
            for (int var = 0; var < 100; ++var) {
                puntosAccFiltrada<< QPointF(var+pagina*100,filtrada[var]);
            }
        }
    }
    else{           //Sin filtro de paso bajo
        if (!this->mediaAcc){         //Filtro desactivado, media desactivada, se pinta la señal original
            for(unsigned i = 0; i < 100; i++)
                puntosAccFiltrada<< QPointF(i+pagina*100,senal[i]);
        }
    }
    if (this->mediaAcc && activo){             //Media activa
        int ventanaDownsample;
        if (this->ui->activateDownsampleAcc->isChecked())  //Media activa con downsample (reduccion de muestras)
            ventanaDownsample=ui->downsampleWindowAcc->value();
        else
            ventanaDownsample=1;
        if(this->filtroActivoAcc){         //Si el filtro esta activo, hacemos la media a partir de este
            switch (eje) {
                case 0:
                    filtroAccX->mediaMovilDownSample(filtrada,100,mediaDownsample,ventanaDownsample,pagina, false);
                    break;
                case 1:
                    filtroAccY->mediaMovilDownSample(filtrada,100,mediaDownsample,ventanaDownsample,pagina, false);
                    break;
                case 2:
                    filtroAccZ->mediaMovilDownSample(filtrada,100,mediaDownsample,ventanaDownsample,pagina, false);
                    break;
                default:
                    break;
            }

        }
        else{           //Filtro desactivado, hacemos la media a partir de la señal original
            switch (eje) {
                case 0:
                    filtroAccX->mediaMovilDownSample(senal,100,mediaDownsample,ventanaDownsample,pagina,false);
                    break;
                case 1:
                    filtroAccY->mediaMovilDownSample(senal,100,mediaDownsample,ventanaDownsample,pagina,false);
                    break;
                case 2:
                    filtroAccZ->mediaMovilDownSample(senal,100,mediaDownsample,ventanaDownsample,pagina,false);
                    break;
                default:
                break;
            }
        }
        switch(eje){
            case 0:
                if (!ultimoPuntoMediaAccX.isNull()&&ultimoPuntoMediaAccX.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
                    puntosAccFiltrada<<ultimoPuntoMediaAccX;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
                }
                break;
            case 1:
                if (!ultimoPuntoMediaAccY.isNull()&&ultimoPuntoMediaAccY.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
                    puntosAccFiltrada<<ultimoPuntoMediaAccY;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
                }
                break;
            case 2:
                if (!ultimoPuntoMediaAccZ.isNull()&&ultimoPuntoMediaAccZ.rx()<this->pagina*100){  //El codigo siguiente prepara el poligono que se desea pintar
                    puntosAccFiltrada<<ultimoPuntoMediaAccZ;   //Pintamos el ultimo punto del barrido anterior, siempre que se encuentre antes de nuestra pos actual
                }
                break;
        }
        for (int var = 0; var < mediaDownsample.size(); ++var) {   //Creamos el polinomio
            puntosAccFiltrada<<QPointF(mediaDownsample.at(var).x(),mediaDownsample.at(var).y());
        }
        switch(eje){
            case 0:
                ultimoPuntoMediaAccX=QPointF(mediaDownsample.at(mediaDownsample.size()-1).x(),mediaDownsample.at(mediaDownsample.size()-1).y());
                break;
            case 1:
                ultimoPuntoMediaAccY=QPointF(mediaDownsample.at(mediaDownsample.size()-1).x(),mediaDownsample.at(mediaDownsample.size()-1).y());
                break;
            case 2:
                ultimoPuntoMediaAccZ=QPointF(mediaDownsample.at(mediaDownsample.size()-1).x(),mediaDownsample.at(mediaDownsample.size()-1).y());
                break;
        }
    }
    if (this->detectarAcc){
        for (int var = 0; var < mediaDownsample.size(); ++var) {
                switch(eje){
                case 0:         
                    if (mediaDownsample.at(var).y()>ui->thresholdValueX->value()&&!subidaDetectadaAcc[eje]){
                        ui->ledAccX->setPixmap(QPixmap("./icons/green-led-on.png"));
                        //-------------------------LLAMADA A LA ACCIÓN DESEADA 1
                        this->accionAccX();
                        subidaDetectadaAcc[eje]=true;
                    }
                    else{
                        if (mediaDownsample.at(var).y()<ui->thresholdValueX->value()&&subidaDetectadaAcc[eje]){

                            ui->ledAccX->setPixmap(QPixmap("./icons/green-led-off.png"));
                            //-------------------------LLAMADA A LA ACCIÓN DESEADA 1
                            this->accionAccX2();
                            subidaDetectadaAcc[eje]=false;
                        }
                    }
                    valorEjeX=mediaDownsample.at(var).y();
                    break;
                case 1:
                    if (mediaDownsample.at(var).y()>ui->thresholdValueY->value()&&!subidaDetectadaAcc[eje]){
                        ui->ledAccY->setPixmap(QPixmap("./icons/green-led-on.png"));
                        //-------------------------LLAMADA A LA ACCIÓN DESEADA 1
                        this->accionAccY();
                        subidaDetectadaAcc[eje]=true;
                     }
                     else{
                        if (mediaDownsample.at(var).y()<ui->thresholdValueY->value()&&subidaDetectadaAcc[eje]){
                            ui->ledAccY->setPixmap(QPixmap("./icons/green-led-off.png"));
                            //-------------------------LLAMADA A LA ACCIÓN DESEADA 1
                            this->accionAccX2();
                            subidaDetectadaAcc[eje]=false;
                        }
                    }
                    valorEjeY=mediaDownsample.at(var).y();
                     break;
                case 2:
                    if (mediaDownsample.at(var).y()>ui->thresholdValueZ->value()&&!subidaDetectadaAcc[eje]){
                        ui->ledAccZ->setPixmap(QPixmap("./icons/green-led-on.png"));
                        //-------------------------LLAMADA A LA ACCIÓN DESEADA 1
                        this->accionAccZ();
                        subidaDetectadaAcc[eje]=true;
                    }
                    else{
                        if (mediaDownsample.at(var).y()<ui->thresholdValueZ->value()&&subidaDetectadaAcc[eje]){

                            ui->ledAccZ->setPixmap(QPixmap("./icons/green-led-off.png"));
                            //-------------------------LLAMADA A LA ACCIÓN DESEADA 1
                            this->accionAccX2();
                            subidaDetectadaAcc[eje]=false;
                        }
                    }
                    valorEjeZ=mediaDownsample.at(var).y();
                    break;
                }
        }
    }
    if (this->ui->tabAccProcessor->isVisible()){
        switch(eje){
        case 0:
            pintarAccXProcesado(puntosAccFiltrada);
            break;
        case 1:
            pintarAccYProcesado(puntosAccFiltrada);
            break;
        case 2:
            pintarAccZProcesado(puntosAccFiltrada);
            break;
        }
    }
}


void RoboSignals::pintarEmgPpal(QPolygonF puntosSenalEmg){



    curvaEmg = new QwtPlotCurve();
    curvaEmg->setPen( Qt::red, 1 );
    curvaEmg->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaEmg->setSamples( puntosSenalEmg );
    curvaEmg->attach( &plotEmgPpal );

    plotEmgPpal.update();
    plotEmgPpal.replot();
    plotEmgPpal.show();
}

void RoboSignals::pintarEcgPpal(QPolygonF puntosSenalEcg){

    curvaEcg = new QwtPlotCurve();
    curvaEcg->setPen( Qt::red, 1 ),
    curvaEcg->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaEcg->setSamples( puntosSenalEcg );
    curvaEcg->attach( &plotEcgPpal );
    plotEcgPpal.update();
    plotEcgPpal.replot();
    plotEcgPpal.show();
}

void RoboSignals::pintarAccX(QPolygonF puntosSenalAccX){

    curvaAccX = new QwtPlotCurve();
    curvaAccX->setPen( Qt::red, 1 );
    curvaAccX->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaAccX->setSamples( puntosSenalAccX );
    curvaAccX->attach( &plotAccXPpal);
    plotAccXPpal.update();
    plotAccXPpal.replot();
    plotAccXPpal.show();


}

void RoboSignals::pintarAccY(QPolygonF puntosSenalAccY){

    curvaAccY = new QwtPlotCurve();
    curvaAccY->setPen( Qt::red, 1 );
    curvaAccY->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaAccY->setSamples( puntosSenalAccY );
    curvaAccY->attach( &plotAccYPpal);
    plotAccYPpal.update();
    plotAccYPpal.replot();
    plotAccYPpal.show();
}

void RoboSignals::pintarAccZ(QPolygonF puntosSenalAccZ){

    curvaAccZ = new QwtPlotCurve();
    curvaAccZ->setPen( Qt::red, 1 );
    curvaAccZ->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaAccZ->setSamples( puntosSenalAccZ );
    curvaAccZ->attach( &plotAccZPpal);
    plotAccZPpal.update();
    plotAccZPpal.replot();
    plotAccZPpal.show();
}

void RoboSignals::pintarAccXProcesado(QPolygonF puntosSenalAccX){

    curvaAccXProcesada = new QwtPlotCurve();
    curvaAccXProcesada->setPen( Qt::red, 1 );
    curvaAccXProcesada->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaAccXProcesada->setSamples( puntosSenalAccX );
    curvaAccXProcesada->attach( &plotAccXProcesado);
    plotAccXProcesado.update();
    plotAccXProcesado.replot();
    plotAccXProcesado.show();
}

void RoboSignals::pintarAccYProcesado(QPolygonF puntosSenalAccY){

    curvaAccYProcesada = new QwtPlotCurve();
    curvaAccYProcesada->setPen( Qt::red, 1 );
    curvaAccYProcesada->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaAccYProcesada->setSamples( puntosSenalAccY );
    curvaAccYProcesada->attach( &plotAccYProcesado);
    plotAccYProcesado.update();
    plotAccYProcesado.replot();
    plotAccYProcesado.show();
}

void RoboSignals::pintarAccZProcesado(QPolygonF puntosSenalAccZ){

    curvaAccZProcesada = new QwtPlotCurve();
    curvaAccZProcesada->setPen( Qt::red, 1 );
    curvaAccZProcesada->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaAccZProcesada->setSamples( puntosSenalAccZ );
    curvaAccZProcesada->attach( &plotAccZProcesado);
    plotAccZProcesado.update();
    plotAccZProcesado.replot();
    plotAccZProcesado.show();
}

void RoboSignals::pintarEmgProcesado(QPolygonF puntosEmgProcesado){

    curvaEmgProcesada = new QwtPlotCurve();
    curvaEmgProcesada->setPen( Qt::red, 1 );
    curvaEmgProcesada->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaEmgProcesada->setSamples( puntosEmgProcesado );
    curvaEmgProcesada->attach( &plotEmgProcesado );
    plotEmgProcesado.update();
    plotEmgProcesado.replot();
    plotEmgProcesado.show();
}

void RoboSignals::pintarEcgProcesado(QPolygonF puntosEcgProcesado){

    curvaEcgProcesada = new QwtPlotCurve();
    curvaEcgProcesada->setPen( Qt::red, 1 );
    curvaEcgProcesada->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaEcgProcesada->setSamples( puntosEcgProcesado );
    curvaEcgProcesada->attach( &plotEcgProcesado );
    plotEcgProcesado.update();
    plotEcgProcesado.replot();
    plotEcgProcesado.show();
}


void RoboSignals::pintarEmgPicos(QPolygonF puntosEmgPicos){

    curvaEmgPicos = new QwtPlotCurve();
    curvaEmgPicos->setPen( Qt::red, 1 );
    curvaEmgPicos->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaEmgPicos->setSamples( puntosEmgPicos );
    curvaEmgPicos->attach( &plotEmgPicos );

    plotEmgPicos.update();
    plotEmgPicos.replot();
    plotEmgPicos.show();


}

void RoboSignals::pintarEcgPicos(QPolygonF puntosEcgPicos){

    curvaEcgPicos = new QwtPlotCurve();
    curvaEcgPicos->setPen( Qt::red, 1 );
    curvaEcgPicos->setRenderHint( QwtPlotItem::RenderAntialiased, true );
    curvaEcgPicos->setSamples( puntosEcgPicos );
    curvaEcgPicos->attach( &plotEcgPicos );

    plotEcgPicos.update();
    plotEcgPicos.replot();
    plotEcgPicos.show();
}

void RoboSignals::pintarThresholdEmg(){
    if (markerEmg== NULL){
        markerEmg = new QwtPlotMarker("treeshold");
        markerEmg->setLinePen(Qt::green,1);
        markerEmg->setYValue(this->ui->threshold->value());
        markerEmg->setLineStyle(QwtPlotMarker::HLine);
        markerEmg->setRenderHint( QwtPlotItem::RenderAntialiased, true );
        markerEmg->attach(&plotEmgPicos);
    }
    else{
        markerEmg->setYValue(this->ui->threshold->value());
    }
    plotEmgPicos.update();
    plotEmgPicos.replot();
    plotEmgPicos.show();
}

void RoboSignals::pintarThresholdAccX(){
    if (markerAccX== NULL){
        markerAccX = new QwtPlotMarker("treesholdx");
        markerAccX->setLinePen(Qt::green,1);
        markerAccX->setYValue(this->ui->thresholdValueX->value());
        markerAccX->setLineStyle(QwtPlotMarker::HLine);
        markerAccX->setRenderHint( QwtPlotItem::RenderAntialiased, true );
        markerAccX->attach(&plotAccXProcesado);

    }
    else{
        markerAccX->setYValue(this->ui->thresholdValueX->value());
    }

    plotAccXProcesado.update();
    plotAccXProcesado.replot();
    plotAccXProcesado.show();
}

void RoboSignals::pintarThresholdAccY(){
    if (markerAccY== NULL){
        markerAccY = new QwtPlotMarker("treesholdy");
        markerAccY->setLinePen(Qt::green,1);
        markerAccY->setYValue(this->ui->thresholdValueY->value());
        markerAccY->setLineStyle(QwtPlotMarker::HLine);
        markerAccY->setRenderHint( QwtPlotItem::RenderAntialiased, true );
        markerAccY->attach(&plotAccYProcesado);

    }
    else{
        markerAccY->setYValue(this->ui->thresholdValueY->value());
    }

    plotAccYProcesado.update();
    plotAccYProcesado.replot();
    plotAccYProcesado.show();
}

void RoboSignals::pintarThresholdAccZ(){
    if (markerAccZ== NULL){
        markerAccZ = new QwtPlotMarker("treesholdz");
        markerAccZ->setLinePen(Qt::green,1);
        markerAccZ->setYValue(this->ui->thresholdValueZ->value());
        markerAccZ->setLineStyle(QwtPlotMarker::HLine);
        markerAccZ->setRenderHint( QwtPlotItem::RenderAntialiased, true );
        markerAccZ->attach(&plotAccZProcesado);

    }
    else{
        markerAccZ->setYValue(this->ui->thresholdValueZ->value());
    }

    plotAccZProcesado.update();
    plotAccZProcesado.replot();
    plotAccZProcesado.show();
}

void RoboSignals::pintarThresholdEcg(){
    if (markerEcg== NULL){
        markerEcg = new QwtPlotMarker("treesholdEcg");
        markerEcg->setLinePen(Qt::green,1);
        markerEcg->setYValue(this->ui->thresholdEcg->value());
        markerEcg->setLineStyle(QwtPlotMarker::HLine);
        markerEcg->setRenderHint( QwtPlotItem::RenderAntialiased, true );
        markerEcg->attach(&plotEcgPicos);

    }
    else{
        markerEcg->setYValue(this->ui->thresholdEcg->value());
    }

    plotEcgPicos.update();
    plotEcgPicos.replot();
    plotEcgPicos.show();
}

void RoboSignals::readFrames()
{

    BITalino::VFrame frames(100);
    BITalino::Frame frame;
    limpiarPlotAccXPpal();
    limpiarPlotAccYPpal();
    limpiarPlotAccZPpal();
    if (pagina==0){
        limpiarPlotEmgPpal();
        limpiarPlotEcgPpal();
        limpiarPlotEmgProcesado();
        limpiarPlotEmgPicos();
        limpiarPlotAccXProcesado();
        limpiarPlotAccYProcesado();
        limpiarPlotAccZProcesado();
        limpiarPlotEcgProcesado();
        limpiarPlotEcgPicos();

    }
    try{
        bitDevice->read(frames);
        frameNumber++;
        //ui->result->setText("Frame "+QString::number(frameNumber)+" Received!");
        ui->result->setVisible(true);
        QPolygonF puntosSenalEmg, puntosAccX, puntosAccY, puntosAccZ, puntosSenalEcg;


        float senal[100], senalAccX[100], senalAccY[100], senalAccZ[100], senalEcg[100];
        float adc, g, v;
        for(unsigned i = 0; i < frames.size(); i++)
        {
            frame = frames.at(i);
            if (ui->checkBoxEmg->isChecked()){
                adc=frame.analog[ui->channelListEmg->currentIndex()];
                v = ((adc/1024 - 0.5)*3.3);
                senal[i]=v;
            }
            if (ui->checkBoxAccX->isChecked()){
                adc=frame.analog[ui->channelListAccX->currentIndex()];
                g = (adc - cmin)/(cmax-cmin);
                g = g*2-1;
                senalAccX[i]=g;
            }
            if (ui->checkBoxAccY->isChecked()){
                adc=frame.analog[ui->channelListAccY->currentIndex()];
                g = (adc - cmin)/(cmax-cmin);
                g = g*2-1;
                senalAccY[i]=g;
            }
            if (ui->checkBoxAccZ->isChecked()){
                adc=frame.analog[ui->channelListAccZ->currentIndex()];
                g = (adc - cmin)/(cmax-cmin);
                g = g*2-1;
                senalAccZ[i]=g;
            }
            if (ui->checkBoxEcg->isChecked()){
                adc=frame.analog[ui->channelListEcg->currentIndex()];
                v = ((adc/1024 - 0.5)*3.3)/1100;
                v = v*1000;
                senalEcg[i]=v;
            }
            if(this->captura){
                switch(ui->channelListCapture->currentIndex()){
                case 0:
                    *fichero<<senal[i]<<" ";
                    break;
                case 1:
                    *fichero<<senalAccX[i]<<" ";
                    break;
                case 2:
                    *fichero<<senalAccY[i]<<" ";
                    break;
                case 3:
                    *fichero<<senalAccZ[i]<<" ";
                    break;
                case 4:
                    *fichero<<senalEcg[i]<<" ";
                    break;
                }
            }
        }

        if (ui->checkBoxEmg->isChecked()){
            procesarEmg(senal);
        }
        if (ui->checkBoxAccX->isChecked()){
            procesarAcc(senalAccX,0);
        }
        if (ui->checkBoxAccY->isChecked()){
            procesarAcc(senalAccY,1);
        }
        if (ui->checkBoxAccZ->isChecked()){
            procesarAcc(senalAccZ,2);
        }
        if (ui->checkBoxEcg->isChecked()){
            procesarEcg(senalEcg);
        }

        if (ui->tabConnection->isVisible()){
            for (int var = 0; var < 100; ++var) {
                if (ui->checkBoxEmg->isChecked())
                    puntosSenalEmg<< QPointF(var+pagina*100,senal[var]);
                if (ui->checkBoxAccX->isChecked())
                    puntosAccX<< QPointF(var,senalAccX[var]);
                if (ui->checkBoxAccY->isChecked())
                    puntosAccY<< QPointF(var,senalAccY[var]);
                if (ui->checkBoxAccZ->isChecked())
                    puntosAccZ<< QPointF(var,senalAccZ[var]);
                if (ui->checkBoxEcg->isChecked())
                    puntosSenalEcg<< QPointF(var+pagina*100,senalEcg[var]);
            }
            if (ui->checkBoxEmg->isChecked())
                pintarEmgPpal(puntosSenalEmg);
            if (ui->checkBoxAccX->isChecked())
                pintarAccX(puntosAccX);
            if (ui->checkBoxAccY->isChecked())
                pintarAccY(puntosAccY);
            if (ui->checkBoxAccZ->isChecked())
                pintarAccZ(puntosAccZ);
            if (ui->checkBoxEcg->isChecked())
                pintarEcgPpal(puntosSenalEcg);
        }

        pagina=pagina+1;
        if (pagina==60){
            pagina=0;

        }


    }
    catch(BITalino::Exception &be){
        ui->result->setText(be.getDescription());
    }
}
