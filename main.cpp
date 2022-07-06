#include <iostream>
#include "circulo.h"
#include "cilindro.h"
using namespace std;

int main()
{

    cout << "--VOLUMEN DE UN CILINDRO--" << endl;
    double r=0,h=0;
    char op;




do{
        cout<<"Ingrese el radio y la altura: ";
        cin>>r>>h;

        if(r<0 || h<0){

            cout<<"Error: El VALOR DE LA ALTURA ES INCORRECTO \n";

   }
        }while(r<0 || h<0);
    Cilindro cilindro1(r,h);

    cout<<"El volumen es: "<<cilindro1.volumen()<<endl;
    cout<<"Desea continuar? (S/N): ";
    cin>>op;


    return 0;
}


