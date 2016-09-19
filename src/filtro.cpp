#include "filtro.h"
#include <iostream>
Filtro::Filtro()
{
    this->ventanaLlena=false;
    this->tamVentanaMedia=40;
    this->sumatorio=0;


    this->ventanaEnvolventeLlena=false;
    this->tamVentanaEnvolvente=0;

}

Filtro::Filtro(int tamVentanaMedia)
{
    this->ventanaLlena=false;
    this->tamVentanaMedia=tamVentanaMedia;
    this->sumatorio=0;

    this->ventanaEnvolventeLlena=false;
    this->tamVentanaEnvolvente=0;
}


Filtro::Filtro(int tamVentanaMedia, int tamVentanaEnvolvente)
{
    this->ventanaLlena=false;
    this->tamVentanaMedia=tamVentanaMedia;
    this->sumatorio=0;

    this->tamVentanaEnvolvente=tamVentanaEnvolvente;
    this->ventanaEnvolventeLlena=false;
}



int Filtro::getTamVentana(){
    return this->tamVentanaMedia;
}


void Filtro::setTamVentana(int tam){
    this->tamVentanaMedia=tam;
    this->ventana.clear();
    this->ventanaLlena=false;
}

bool Filtro::esVentanaLlena(){
    return this->ventanaLlena;
}

void Filtro::insertarEnVentana(float valor, bool valorAbsoluto){
    if (this->esVentanaLlena()){
        float valor_frente;
        if(valorAbsoluto)
            sumatorio=sumatorio+std::abs(valor);
        else
            sumatorio=sumatorio+valor;
        ventana.push_back(valor);
        valor_frente = ventana.at(0);
        if (valorAbsoluto)
            sumatorio=sumatorio-std::abs(valor_frente);
        else
            sumatorio=sumatorio-valor_frente;
        ventana.pop_front();

    }
    else{
        this->ventana.push_back(valor);
        if (valorAbsoluto)
            sumatorio=sumatorio+std::abs(valor);
        else
            sumatorio=sumatorio+valor;
        if (ventana.size()==tamVentanaMedia)
            ventanaLlena=true;
    }
}

int Filtro::getTamVentanaEnvolvente(){
    return this->tamVentanaEnvolvente;
}

void Filtro::setTamVentanaEnvolvente(int tam){
    this->tamVentanaEnvolvente=tam;
    this->ventanaEnvolvente.clear();
    this->ventanaEnvolventeLlena=false;
}

bool Filtro::esVentanaEnvolventeLlena(){
    return this->ventanaEnvolventeLlena;
}
void Filtro::insertarEnVentanaEnvolvente(QPointF valor){
    if(tamVentanaEnvolvente!=0){
        if (this->esVentanaEnvolventeLlena()){
            ventanaEnvolvente.push_back(valor);
            ventanaEnvolvente.pop_front();

        }
        else{
            this->ventanaEnvolvente.push_back(valor);
            if (ventanaEnvolvente.size()==tamVentanaEnvolvente)
                ventanaEnvolventeLlena=true;
        }
    }
    else
        ventanaEnvolventeLlena=true;
}

void Filtro::butterworth_PasoBajo_100hzs_Orden6(const float src[], float dest[], int size)
{
    const int NZEROS = 6;
    const int NPOLES = 6;
    const double GAIN = 2.936532839e+03;

    double xv[NZEROS+1] = {0.0}, yv[NPOLES+1] = {0.0};

    for (int i = 0; i < size; i++)
    {
        xv[0] = xv[1];
        xv[1] = xv[2];
        xv[2] = xv[3];
        xv[3] = xv[4];
        xv[4] = xv[5];
        xv[5] = xv[6];
        xv[6] = src[i] / GAIN;

        yv[0] = yv[1];
        yv[1] = yv[2];
        yv[2] = yv[3];
        yv[3] = yv[4];
        yv[4] = yv[5];
        yv[5] = yv[6];
        yv[6] =   (xv[0] + xv[6]) + 6.0 * (xv[1] + xv[5]) + 15.0 * (xv[2] + xv[4])
                     + 20.0 * xv[3]
                     + ( -0.0837564796 * yv[0]) + (  0.7052741145 * yv[1])
                     + ( -2.5294949058 * yv[2]) + (  4.9654152288 * yv[3])
                     + ( -5.6586671659 * yv[4]) + (  3.5794347983 * yv[5]);
        dest[i] = yv[6];
    }
}

void Filtro::butterworth_PasoBajo_40hzs_Orden6(const float src[], float dest[], int size)
{
    const int NZEROS = 6;
    const int NPOLES = 6;
    const double GAIN = 4.004448900e+05;
    double xv[NZEROS+1] = {0.0}, yv[NPOLES+1] = {0.0};

    for (int i = 0; i < size; i++)
    {
        xv[0] = xv[1]; xv[1] = xv[2]; xv[2] = xv[3]; xv[3] = xv[4]; xv[4] = xv[5]; xv[5] = xv[6];
        xv[6] = src[i] / GAIN;
        yv[0] = yv[1]; yv[1] = yv[2]; yv[2] = yv[3]; yv[3] = yv[4]; yv[4] = yv[5]; yv[5] = yv[6];
        yv[6] =   (xv[0] + xv[6]) + 6.0 * (xv[1] + xv[5]) + 15.0 * (xv[2] + xv[4])
                     + 20.0 * xv[3]
                     + ( -0.3774523864 * yv[0]) + (  2.6310551285 * yv[1])
                     + ( -7.6754745482 * yv[2]) + ( 11.9993158160 * yv[3])
                     + (-10.6070421840 * yv[4]) + (  5.0294383514 * yv[5]);
        dest[i] = yv[6];
    }
}


void Filtro::butterworth_PasoBajo_50hzs_Orden6(const float src[], float dest[], int size)
{
    const int NZEROS = 6;
    const int NPOLES = 6;
    const double GAIN = 1.165969038e+05;
    double xv[NZEROS+1] = {0.0}, yv[NPOLES+1] = {0.0};

    for (int i = 0; i < size; i++)
    {
        xv[0] = xv[1]; xv[1] = xv[2]; xv[2] = xv[3]; xv[3] = xv[4]; xv[4] = xv[5]; xv[5] = xv[6];
        xv[6] = src[i] / GAIN;
        yv[0] = yv[1]; yv[1] = yv[2]; yv[2] = yv[3]; yv[3] = yv[4]; yv[4] = yv[5]; yv[5] = yv[6];
        yv[6] =   (xv[0] + xv[6]) + 6 * (xv[1] + xv[5]) + 15 * (xv[2] + xv[4])
                             + 20 * xv[3]
                             + ( -0.2951724313 * yv[0]) + (  2.1290387500 * yv[1])
                             + ( -6.4411118810 * yv[2]) + ( 10.4690788930 * yv[3])
                             + ( -9.6495177287 * yv[4]) + (  4.7871354989 * yv[5]);
        dest[i] = yv[6];
    }
}



void Filtro::butterworth_PasoBanda_25_125hzs_Orden6(const float src[], float dest[], int size){
    const int NZEROS = 14;
    const int NPOLES = 14;
    const double GAIN = 4.815296975e+02;

    static float xv[NZEROS+1], yv[NPOLES+1];

     for (int i = 0; i < size; i++)
          { xv[0] = xv[1]; xv[1] = xv[2]; xv[2] = xv[3]; xv[3] = xv[4]; xv[4] = xv[5]; xv[5] = xv[6]; xv[6] = xv[7]; xv[7] = xv[8]; xv[8] = xv[9]; xv[9] = xv[10]; xv[10] = xv[11]; xv[11] = xv[12]; xv[12] = xv[13]; xv[13] = xv[14];
            xv[14] = src[i] / GAIN;
            yv[0] = yv[1]; yv[1] = yv[2]; yv[2] = yv[3]; yv[3] = yv[4]; yv[4] = yv[5]; yv[5] = yv[6]; yv[6] = yv[7]; yv[7] = yv[8]; yv[8] = yv[9]; yv[9] = yv[10]; yv[10] = yv[11]; yv[11] = yv[12]; yv[12] = yv[13]; yv[13] = yv[14];
            yv[14] =   (xv[0] + xv[14]) -   1.6180339887 * (xv[1] + xv[13]) - 5 * (xv[2] + xv[12])
                         +   9.7082039325 * (xv[3] + xv[11]) + 9 * (xv[4] + xv[10]) -  24.2705098310 * (xv[5] + xv[9])
                         - 5 * (xv[6] + xv[8]) +  32.3606797750 * xv[7]
                         + ( -0.0000000000 * yv[0]) + ( -0.0000000000 * yv[1])
                         + ( -0.0837564796 * yv[2]) + (  1.1315513196 * yv[3])
                         + ( -7.1232477872 * yv[4]) + ( 27.6229836450 * yv[5])
                         + (-73.4832338650 * yv[6]) + (141.2656608300 * yv[7])
                         + (-201.2275647200 * yv[8]) + (213.9924526200 * yv[9])
                         + (-168.5933937900 * yv[10]) + ( 95.9440924320 * yv[11])
                         + (-37.4201318010 * yv[12]) + (  8.9745864279 * yv[13]);
            dest[i] = yv[14];
          }

}

void Filtro::mediaMovil(QVector<qreal> &src, QVector<qreal> &dest, bool valorAbsoluto){
    for (int var = 0; var < src.size(); ++var) {
        if (ventanaLlena){
            dest.push_back(sumatorio / tamVentanaMedia);
            this->insertarEnVentana(src.at(var),valorAbsoluto);
        }
        else{
            dest.push_back(0);
            this->insertarEnVentana(src.at(var),valorAbsoluto);
        }
    }
}

void Filtro::mediaMovil(const float src[], float dest[], int size, bool valorAbsoluto){
    for (int var = 0; var < size; ++var) {
        if (ventanaLlena){
            dest[var] = (sumatorio / tamVentanaMedia);
            this->insertarEnVentana(src[var],valorAbsoluto);
        }
        else{
            dest[var] = 0;
            this->insertarEnVentana(src[var],valorAbsoluto);
        }
    }
}

 void Filtro::mediaMovilDownSample(const float src[], int size, QVector<QPointF> &dest, int downsample, int pagina, bool valorAbsoluto){
     for (int var = 0; var < size; ++var) {
         if ((ventanaLlena)&&(var%downsample==0)){
             dest.push_back(QPointF(var+pagina*100,(sumatorio / tamVentanaMedia)));
         }
        this->insertarEnVentana(src[var],valorAbsoluto);
     }
 }




 void Filtro::envolvente(QVector<QPointF>  &src, QVector<QPointF>  &dest,const float min){
     //std::cout<<"La fuente tiene: "<<src.length()<<" puntos" <<std::endl;
     bool anteriores;
     bool posteriores;
     int size=src.size();

     //Introducimos toda la fuente en la cola "datos" para que queden almacenados los elementos no procesados al final del algoritmo
     for (int var = 0; var < size; ++var) {
         datos.push_back(src.at(var));
     }

     size = datos.size();
     QPointF dato;
     for (int var = 0; var < size-tamVentanaEnvolvente; ++var) {
         dato=datos.at(var);

//         // El algoritmo se inicia una vez que la ventana envolvente esta llena
         if (this->ventanaEnvolventeLlena){
             if (dato.y()<=min){
                 dest.push_back(dato);
             }
             else{
                 anteriores = true;
                 for (int ant = 0; ant < this->tamVentanaEnvolvente;ant++) {
                     if ((var-ant-1)>=0){
                         if (dato.y()<datos.at(var-ant-1).y()){
                             anteriores=false;
                         }
                     }
                     else{
                         if (dato.y()<this->ventanaEnvolvente.at(this->tamVentanaEnvolvente-ant-1).y()){
                             anteriores=false;
                         }
                     }
                 }
                 posteriores = true;
                 for (int pos = 0; pos < this->tamVentanaEnvolvente;pos++) {
                         if (dato.y()<datos.at(var+pos+1).y()){
                             posteriores=false;
                         }
                 }
                 if (anteriores&&posteriores){
                     dest.push_back(dato);
                 }
             }

         }
         this->insertarEnVentanaEnvolvente(dato);
         //dest.push_back(dato);
     }
     for (int var = 0; var < size-tamVentanaEnvolvente; ++var) {
         datos.pop_front();
     }
 }



