#ifndef CILINDRO_H
#define CILINDRO_H

#include "circulo.h"
class Cilindro
{
private:
    Circulo base;
    double altura;

public:
    Cilindro();
    Cilindro(double r, double h);
    double volumen();
};

#endif // CILINDRO_H
