#ifndef CIRCULO_H
#define CIRCULO_H


class Circulo
{
private:
    double radio;
    const double pi=3.1416;
public:
    Circulo();
    Circulo(double r);
    double area();
};

#endif // CIRCULO_H
