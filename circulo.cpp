#include "circulo.h"

//Constructor por defecto
/**
 * @brief circulo::circulo
 */
Circulo::Circulo():radio(0){
}
/**
 * @brief circulo::circulo
 * @param r El radio del circulo
 */
Circulo::Circulo(double r):radio(r){
}
/**
 * @brief circulo::area, calcula el radio del circulo
 */
double Circulo::area(){
    return(radio * radio * pi);
}
