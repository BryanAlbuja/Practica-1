#include "cilindro.h"

Cilindro::Cilindro()
{
}

Cilindro::Cilindro(double r, double h):
    base(r), altura(h)
{
}
double Cilindro::volumen()
{
    return (base.area() * altura);
}
