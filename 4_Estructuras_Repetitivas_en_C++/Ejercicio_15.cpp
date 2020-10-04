/*Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa
 * debe generar un número aleatorio en ese mismo rango[1-100], e indicarle al usuario si el número que digito es menor o
 * mayor al número aleatorio, así hasta que lo adivine y por último mostrarle el número de intentos que se le llevo.
 *
 * variable = limite_inferior + rand() % (limite_superior + 1 - limite_ inferior);
 * */

#include <iostream>
#include <time.h>
using namespace std;

int main() {

    int num, rando, contador = 0;
    srand(time(NULL));

    do{
        cout<<"Digite un número: "; cin>>num;
        rando = 1 + rand()%100;
        contador++;
        if(num==rando){
            break;
        }
        contador++;
    }while (num<101 && num>0);

    cout<<"El número de intentos que se realizaron son: "<<contador;

    return 0;
}

