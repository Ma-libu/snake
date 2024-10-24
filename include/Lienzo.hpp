#pragma once 
#include <Vector.hpp>
#include <list>
#include <SerieNavidad.hpp>

class Lienzo
{
private:
Vector posicion;
Vector tamano;

public:
    Lienzo (Vector p, Vector t) {
    
      this->posicion = p;
      this->tamano = t;
    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie){
        serie.Imprimir();
    }
    void limpiar(){
       system("clear");
    }
};