/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de
 * 24 horas. Es decir, debe leer 6 temperaturas. Calule la temperatura media del día, la temperatura más alta y la
 * más baja.
 * */

#include <iostream>
using namespace std;

int main() {

    int hora=0;
    float temperatura, promedio=0, mayor=0, menor=1000;

    while (hora>=0 && hora<24){
        cout<<"Digite la temperatura de la hora "<<hora<<" : ";
        cin>>temperatura;
        promedio += temperatura;
        hora +=4;
        if(mayor<temperatura){
            mayor=temperatura;
        }
        if(menor>temperatura){
            menor=temperatura;
        }
    }
    promedio = promedio/6;
    cout<<"La temperatura promedio es: "<<promedio<<endl;
    cout<<"La temperatura mayor es: "<<mayor<<endl;
    cout<<"La temperatura menor es: "<<menor<<endl;
    return 0;
}

