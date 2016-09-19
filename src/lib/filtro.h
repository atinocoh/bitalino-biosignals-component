#ifndef FILTRO_H
#define FILTRO_H
#include <QVector>
#include <cmath>
#include <QPointF>
class Filtro
{


    // Ventana deslizante para realizar la media movil
    QVector<qreal> ventana;
    bool ventanaLlena;
    int tamVentanaMedia;
    //Variable que almacena el sumatorio de los datos de la ventana en
    // tiempo real para reducir coste computacional
    float sumatorio;


    // Ventanas deslizantes para realizar el cálculo de la envolvente
    QVector<QPointF> ventanaEnvolvente;
    QVector<QPointF> datos;



    bool ventanaEnvolventeLlena;
    int tamVentanaEnvolvente;



public:
    Filtro();
    Filtro(int tamVentanaMedia);
    Filtro(int tamVentanaMedia, int tamVentanaEnvolvente);
    int getTamVentana();
    void setTamVentana(int tam);
    bool esVentanaLlena();
    void insertarEnVentana(float valor);

    int getTamVentanaEnvolvente();
    void setTamVentanaEnvolvente(int tam);
    bool esVentanaEnvolventeLlena();
    void insertarEnVentanaEnvolvente(QPointF valor);


    // Filtros de Butterworth para una frecuencia de muestreo de 1000 mps
    static void butterworth_PasoBajo_100hzs_Orden6(const float src[], float dest[], int size);
    static void butterworth_PasoBajo_40hzs_Orden6(const float src[], float dest[], int size);
    static void butterworth_PasoBanda_25_125hzs_Orden6(const float src[], float dest[], int size);
    static void mediaMovil(const double src[], double dest[], int size_src, int size_dst,int window);
    void envolvente(const float src[], float dest[],const float min, const int size);
    void envolvente(QVector<QPointF>  &src, QVector<QPointF>  &dest,const float min);
    void mediaMovil(QVector<qreal> &src, QVector<qreal> &dest);

    void mediaMovil(const float src[], float dest[], int size);
    void mediaMovilDownSample(const float src[], int size, QVector<QPointF> &dest, int downsample,int pagina);
};

#endif // FILTRO_H
