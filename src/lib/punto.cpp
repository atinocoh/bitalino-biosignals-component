#include "punto.h"

Punto::Punto()
{
    esNulo=true;
}
  Punto::Punto(QPointF punto, int pagina){
      this->pagina=pagina;


      this->punto=punto;
      esNulo=false;
  }
void Punto::setPagina(int p){
    this->pagina=p;
}
int Punto::getPagina()const{
    return this->pagina;
}
void Punto::setPunto(QPointF p){
    this->punto=p;
}
qreal Punto::x()const{
    return this->punto.x();
}
qreal Punto::y()const{
    return this->punto.y();
}
QPointF Punto::getPunto() const{
    return this->punto;
}
bool Punto::isNull(){
    return esNulo;
}
