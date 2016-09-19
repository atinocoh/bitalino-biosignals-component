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
    conectado=false;
    adquiriendo=false;
    //ventanaMedia=40;
    filtroActivo=false;
    this->detectarPicos=false;
    tipoFiltro=0;
    ui->windowSize->setValue(40);
    this->picoDetectado=false;
    this->contadorPicos=0;

    media=false;
    filtro = NULL;

    //plot.setAxisScale(QwtPlot::yLeft,-1.5,1.5,0.5);
    plotEmg.setAxisScale(QwtPlot::yLeft,-3.3,3.3,0.66);
    //plot.setAxisScale(QwtPlot::xBottom,0,1500,200);
    //plot.setAxisScale(QwtPlot::xBottom,0,1500,200);
    // plot.setAxisScale(QwtPlot::xBottom,0,99,10);
    plotEmg.setAxisScale(QwtPlot::xBottom,0,5999,500);

    plotAccX.setAxisScale(QwtPlot::yLeft,-3.3,3.3,1.1);
    //   plot2.setAxisScale(QwtPlot::yLeft,-1.5,1.5,0.5);
    //   plot2.setAxisScale(QwtPlot::yLeft,-3.3,3.3,0.5);
    plotAccX.setAxisScale(QwtPlot::xBottom,0,99,30);

    //  plot.setAxisScale(QwtPlot::yLeft,0,1024,256);
    // plot2.setAxisScale(QwtPlot::xBottom,0,1500,200);
    /*
    plot2.setAxisScale(QwtPlot::yLeft,0,1024,256);
    plot2.setAxisScale(QwtPlot::xBottom,0,1500,200);
*/

    plot3.setAxisScale(QwtPlot::yLeft,-3.3,3.3,0.66);
 //   plot3.setAxisScale(QwtPlot::yLeft,-1.5,1.5,0.25);

    plot3.setAxisScale(QwtPlot::xBottom,0,5999,500);


    double ejex =ui->maxValue->value() + (0.3*ui->maxValue->value());
    plot4.setAxisScale(QwtPlot::yLeft,0,ejex,ejex/5);

    // plot4.setAxisScale(QwtPlot::yLeft,-3.3,3.3,0.66);
    plot4.setAxisScale(QwtPlot::xBottom,0,5999,500);





    ui->plotEmgPpal->addWidget(&plotEmg);
    plotEmg.setLineWidth(2);
    plotEmg.setMidLineWidth(3);

    ui->plotAccXPpal->addWidget(&plotAccX);
    plotAccX.setLineWidth(2);
    plotAccX.setMidLineWidth(3);

    ui->plotEmgProcesado->addWidget(&plot3);
    plot3.setLineWidth(2);
    plot3.setMidLineWidth(3);

    ui->plotEmgPicos->addWidget(&plot4);
    plot4.setLineWidth(2);
    plot4.setMidLineWidth(3);



    plotEmg.setCanvasBackground( Qt::white );
    QwtPlotGrid *grid = new QwtPlotGrid();
    grid->attach( &plotEmg );

    plotAccX.setCanvasBackground( Qt::white );
    QwtPlotGrid *grid2 = new QwtPlotGrid();
    grid2->attach( &plotAccX );

    plot3.setCanvasBackground( Qt::white );
    QwtPlotGrid *grid3 = new QwtPlotGrid();
    grid3->attach( &plot3 );

    plot4.setCanvasBackground( Qt::white );
    QwtPlotGrid *grid4 = new QwtPlotGrid();
    grid4->attach( &plot4 );


    connect(ui->nuevaMac,SIGNAL(clicked(bool)),this,SLOT(nuevaMac()));

    connect(ui->checkBoxEmg,SIGNAL(clicked(bool)),this,SLOT(checkBoxEmg()));
    connect(ui->checkBoxAccX,SIGNAL(clicked(bool)),this,SLOT(checkBoxAccX()));
    connect(ui->checkBoxAccY,SIGNAL(clicked(bool)),this,SLOT(checkBoxAccY()));
    connect(ui->checkBoxAccZ,SIGNAL(clicked(bool)),this,SLOT(checkBoxAccZ()));

    connect(ui->connectionButton,SIGNAL(clicked(bool)),this,SLOT(connectToBITalino()));

    connect(ui->startButton,SIGNAL(clicked(bool)),this,SLOT(startAdquisition()));
    connect(ui->stopButton,SIGNAL(clicked(bool)),this,SLOT(stopAdquisition()));

    connect(ui->startCapture,SIGNAL(clicked(bool)),this,SLOT(startCapture()));
    connect(ui->stopCapture,SIGNAL(clicked(bool)),this,SLOT(stopCapture()));

    connect(ui->startButterworth,SIGNAL(clicked(bool)),this,SLOT(startButterworth()));
    connect(ui->stopButterworth,SIGNAL(clicked(bool)),this,SLOT(stopButterworth()));


    connect(ui->activateDownsample,SIGNAL(stateChanged(int)),this,SLOT(cambioDownSample()));
    connect(ui->startAverage,SIGNAL(clicked(bool)),this,SLOT(startMedia()));
    connect(ui->stopAverage,SIGNAL(clicked(bool)),this,SLOT(stopMedia()));


    connect(ui->startDetection,SIGNAL(clicked(bool)),this,SLOT(startDeteccionPicos()));
    connect(ui->stopDetection,SIGNAL(clicked(bool)),this,SLOT(stopDeteccionPicos()));

    connect(ui->tabWidget,SIGNAL(currentChanged(int)),this,SLOT(tabConnection()));


    connect(&readTimer,SIGNAL(timeout()),this,SLOT(readFrames()));



    captura=false;
    readTimer.stop();

    fichero=NULL;


}

RoboSignals::~RoboSignals()
{
    if(bitDevice != NULL)
        delete bitDevice;
    delete ui;
    if (fichero != NULL){
        fichero->close();
        delete fichero;
    }
    if (fichero2 != NULL){
        fichero->close();
        delete fichero2;
    }
    if (fichero_entrada != NULL){
        fichero_entrada->close();
        delete fichero_entrada;
    }
    delete filtro;
}
void RoboSignals::nuevaMac()
{
    DialogoMac *dialogo = new DialogoMac(this);
    //
    //dialogo->setWindowTitle(tr("Introduce una dirección MAC"));
    dialogo->show();
}



void RoboSignals::checkBoxEmg(){
    ui->startButton->setEnabled(true);
    ui->channelListEmg->setEnabled(true);
    std::cout<<"hola"<<std::endl;


}
void RoboSignals::checkBoxAccX(){
    ui->channelListAccX->setEnabled(true);
    ui->startButton->setEnabled(true);
}

void RoboSignals::checkBoxAccY(){
    ui->channelListAccY->setEnabled(true);
    ui->startButton->setEnabled(true);
}

void RoboSignals::checkBoxAccZ(){
    ui->channelListAccZ->setEnabled(true);
    ui->startButton->setEnabled(true);
}

void RoboSignals::introducirMac(QString mac){

    //std::cout<<"Numero: "<<mac.toStdString().c_str()<<std::endl;
    this->ui->macList->addItem(mac);
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

    }
    catch(BITalino::Exception &be)
    {

        ui->result->setText(be.getDescription());
        ui->connectionLabel->setText("Connection failed");
        ui->connectionIconLabel->setPixmap(QPixmap("./icons/error-icon.png"));
        ui->connectionIconLabel->adjustSize();
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
        ui->startAverage->setEnabled(true);
        ui->startButterworth->setEnabled(true);
        ui->startDetection->setEnabled(true);
        adquiriendo=true;
    }
    catch(BITalino::Exception &be)
    {
        ui->startButton->setEnabled(true);
        ui->stopButton->setEnabled(false);
        ui->result->setText(be.getDescription());
    }
}


void RoboSignals::limpiarPlot1(){
    plotEmg.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotEmg.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotEmg.replot();
    plotEmg.update();

}

void RoboSignals::limpiarPlot2(){
    plotAccX.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plotAccX.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plotAccX.replot();
    plotAccX.update();
}

void RoboSignals::limpiarPlot3(){
    plot3.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plot3.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plot3.replot();
    plot3.update();
}

void RoboSignals::limpiarPlot4(){
    plot4.detachItems( QwtPlotItem::Rtti_PlotCurve );
    plot4.detachItems( QwtPlotItem::Rtti_PlotMarker );
    plot4.replot();
    plot4.update();
}

void RoboSignals::stopAdquisition()
{
    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(true);
    ui->startCapture->setEnabled(false);
    ui->stopCapture->setEnabled(false);
    adquiriendo=false;

    bitDevice->stop();
    readTimer.stop();
    frameNumber = 0;
    ui->result->setText("");

    stopButterworth();
    limpiarPlot1();
    limpiarPlot2();
    limpiarPlot3();
    limpiarPlot4();
    if (this->filtroActivo)
        stopButterworth();
    if (this->captura)
        stopCapture();
    if (this->media)
        stopMedia();
    if (this->detectarPicos)
        stopDeteccionPicos();

    ui->startAverage->setEnabled(false);
    ui->startButterworth->setEnabled(false);
    ui->startCapture->setEnabled(false);
    ui->startDetection->setEnabled(false);

}

void RoboSignals::startCapture(){
    fichero = new std::ofstream("datos.txt");
    fichero2 = new std::ofstream("datos_filtrados.txt");
    ui->startCapture->setEnabled(false);
    ui->stopCapture->setEnabled(true);
    captura=true;
}
void RoboSignals::stopCapture(){

    captura=false;
    fichero->close();
    fichero2->close();
    ui->startCapture->setEnabled(true);
    ui->stopCapture->setEnabled(false);

}


void RoboSignals::startButterworth(){
    this->filtroActivo=true;
    ui->stopButterworth->setEnabled(true);
    ui->startButterworth->setEnabled(false);
    this->tipoFiltro=ui->filterList->currentIndex();
    //std::cout<<"Tipo filtro: "<<tipoFiltro<<std::endl;
}

void RoboSignals::stopButterworth(){
    this->filtroActivo=false;
    ui->stopButterworth->setEnabled(false);
    if (this->adquiriendo)
        ui->startButterworth->setEnabled(true);
}

void RoboSignals::cambioDownSample(){
    if (ui->activateDownsample->isChecked()){
        ui->downsampleWindow->setEnabled(true);
    }
    else{
        ui->downsampleWindow->setEnabled(false);
    }
}

void RoboSignals::startMedia(){
    this->media=true;
    ui->stopAverage->setEnabled(true);
    ui->startAverage->setEnabled(false);
    this->filtro = new Filtro(ui->windowSize->value(),/*this->ui->envelopeWindow->value()*/this->ui->envelopeWindow->value());
   // int max = 100/this->ui->windowSize->value();
   // this->ui->envelopeWindow->setMaximum(max);
}

void RoboSignals::stopMedia(){
    this->media=false;
    ui->stopAverage->setEnabled(false);
    ui->startAverage->setEnabled(true);
    delete this->filtro;
}

void RoboSignals::startDeteccionPicos(){
    this->filtro->setTamVentanaEnvolvente(this->ui->envelopeWindow->value());
    this->detectarPicos=true;
    ui->stopDetection->setEnabled(true);
    ui->startDetection->setEnabled(false);
}
void RoboSignals::stopDeteccionPicos(){
    this->detectarPicos=false;
    ui->stopDetection->setEnabled(false);
    ui->startDetection->setEnabled(true);

}



void RoboSignals::tabConnection(){
    pagina=0;
}

void RoboSignals::readFrames()
{

    BITalino::VFrame frames(100);
    BITalino::Frame frame;
    if (pagina==0){

        limpiarPlot1();
        limpiarPlot2();
        limpiarPlot3();
        limpiarPlot4();

    }
    try{
        bitDevice->read(frames);
        frameNumber++;
        ui->result->setText("Frame "+QString::number(frameNumber)+" Received!");
        ui->result->setVisible(true);
        QPolygonF points, points2;
        QPolygonF *points3;
        points3 = new QPolygonF();
        QVector<QPointF> mediaDownsample,envolvente;

        float senal[100], filtrada[100];
        for(unsigned i = 0; i < frames.size(); i++)
        {
            frame = frames.at(i);
            //std::cout<<"Valor del frame: "<< i<<": "<<frame.analog[ui->channelList->currentIndex()]<<std::endl;
            //points<< QPointF(i+pagina*100,(frame.analog[ui->channelList->currentIndex()])*3.3/1024-1.65);

            senal[i]=((frame.analog[ui->channelListEmg->currentIndex()]*3.3/1024)-1.65);
            //std::cout<<"ocupación de x: "<< x.length()<<std::endl;
            points<< QPointF(i+pagina*100,senal[i]);

            if(this->captura)
                *fichero<<senal[i]<<" ";

        }

        QwtPlotCurve *curve = new QwtPlotCurve();

        curve->setPen( Qt::red, 1 ),
                curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );

        if (this->ui->tabEmgProcessor->isVisible()){

            if (this->filtroActivo){
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
                if (this->media==false){
                    for (int var = 0; var < 100; ++var) {
                        points2<< QPointF(var+pagina*100,filtrada[var]);
                    }
                    curve->setSamples( points2 );
                }

            }
            else{

                if (!this->media)
                    curve->setSamples( points );
            }

            if (this->media){
                int ventanaDownsample;
                if (this->ui->activateDownsample->isChecked())
                    ventanaDownsample=ui->downsampleWindow->value();
                else
                    ventanaDownsample=1;

                if(this->filtroActivo){
                    filtro->mediaMovilDownSample(filtrada,100,mediaDownsample,ventanaDownsample,pagina);
                }
                else{
                    //  this->filtro->mediaMovil(senal,media,100);
                    filtro->mediaMovilDownSample(senal,100,mediaDownsample,ventanaDownsample,pagina);
                }
                if (!ultimoPuntoMedia.isNull()&&ultimoPuntoMedia.rx()<this->pagina*100){
                    //mediaDownsample.push_front(ultimoPuntoMedia);
                    points2<<ultimoPuntoMedia;
                }
                // std::cout<<"----------TRAMA DOWNSAMPLE---------------"<<std::endl;
                for (int var = 0; var < mediaDownsample.length(); ++var) {
                    points2<<QPointF(mediaDownsample.at(var).x(),mediaDownsample.at(var).y());
                  //  std::cout<<"x: "<<mediaDownsample.at(var).x()<<"   Y: "<<mediaDownsample.at(var).y()<<std::endl;
                }

                curve->setSamples( points2 );
                ultimoPuntoMedia=QPointF(mediaDownsample.at(mediaDownsample.length()-1).x(),mediaDownsample.at(mediaDownsample.length()-1).y());
            }

            if (this->detectarPicos){

                filtro->envolvente(mediaDownsample,envolvente,(float)ui->minValue->value());
                if (!ultimoPuntoEnvolvente.isNull()&&ultimoPuntoEnvolvente.x()<this->pagina*100){
                    *points3<<this->ultimoPuntoEnvolvente;
                                    std::cout<<"x: "<<ultimoPuntoEnvolvente.x()<<"   Y: "<<ultimoPuntoEnvolvente.y()<<std::endl;
                }

             //   std::cout<<"----------TRAMA ENVOLVENTE---------------"<<std::endl;
                for (int var = 0; var < envolvente.length(); ++var) {
                  //  std::cout<<"x: "<<envolvente.at(var).x()<<"   Y: "<<envolvente.at(var).y()<<std::endl;

                    if (envolvente.at(var).x()==0){
                                delete points3;
                                points3 = new QPolygonF();
                    }
                    *points3<< QPointF(envolvente.at(var).x(),envolvente.at(var).y());


                    if (envolvente.at(var).y()>ui->treeshold->value()&&!picoDetectado){
                        ui->peakDetected->setPixmap(QPixmap("./icons/green-led-on.png"));
                        this->contadorPicos++;
                        ui->peakCounter->display(this->contadorPicos);
                        picoDetectado=true;
                    }
                    if (envolvente.at(var).y()<ui->treeshold->value()&&picoDetectado){
                        ui->peakDetected->setPixmap(QPixmap("./icons/green-led-off.png"));
                        picoDetectado=false;
                    }

                }

                if (envolvente.length()>0)
                     this->ultimoPuntoEnvolvente=QPointF(envolvente.at(envolvente.length()-1).x(),envolvente.at(envolvente.length()-1).y());




                //double ejex =ui->maxValue->value() + (0.3*ui->maxValue->value());

                //  plot4.setAxisScale(QwtPlot::yLeft,0,1,0.2);
                //plot4.setAxisScale(QwtPlot::yLeft,0,ejex,ejex/5);

                QwtPlotCurve *curve4 = new QwtPlotCurve();
                curve4->setPen( Qt::red, 1 );
                curve4->setRenderHint( QwtPlotItem::RenderAntialiased, true );

                curve4->setSamples( *points3 );
                curve4->attach( &plot4 );

                QwtPlotMarker *marker = new QwtPlotMarker("treeshold");
                marker->setLinePen(Qt::green,1);
                marker->setYValue(this->ui->treeshold->value());
                marker->setLineStyle(QwtPlotMarker::HLine);
                marker->setRenderHint( QwtPlotItem::RenderAntialiased, true );
                marker->attach(&plot4);
            }



            plot4.update();
            plot4.replot();
            plot4.show();

            curve->attach( &plot3 );
            plot3.update();
            plot3.replot();
            plot3.show();


        }

        if (ui->tabConnection->isVisible()){

            curve->setSamples( points );
            curve->attach( &plotEmg );


            plotEmg.update();
            plotEmg.replot();
            plotEmg.show();

            QwtPlotCurve *curve2 = new QwtPlotCurve();

            curve2->setPen( Qt::red, 1 ),
                    curve2->setRenderHint( QwtPlotItem::RenderAntialiased, true );

            curve2->setSamples( points2 );
            curve2->attach( &plotAccX );

            plotAccX.update();
            plotAccX.replot();
            plotAccX.show();
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
