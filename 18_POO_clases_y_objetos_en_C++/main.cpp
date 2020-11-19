#include <iostream>
#include "Punto.h"



int main(int argc, char** argv) {
    Punto p1(2,1);
    Punto p2;

    cout<<"El valor de x es: "<<p1.getX()<<'\n';
    cout<<"El valor de y es: "<<p1.getY()<<'\n';
    cout<<"El valor de x es: "<<p2.getX()<<'\n';
    cout<<"El valor de y es: "<<p2.getY()<<'\n';

    Punto* p3= new Punto();
    p3->setX(5);
    p3->setY(5);
    cout<<"Valor de x es: "<<p3->getX()<<'\n';
    cout<<"Valor de y es: "<<p3->getY()<<'\n';
    return 0;
}
