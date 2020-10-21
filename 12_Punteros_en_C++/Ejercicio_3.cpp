/*Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números
 * pares y su posición en memoria.*/

#include <iostream>

using namespace std;

int main() {

    int arreglo[10], *ptr_arreglo;

    for(int i=0; i<10; i++){
       cout<<"Digite un número ["<<i<<"]: "; cin>> arreglo[i];
    }

    ptr_arreglo = arreglo;

    for(int i=0; i<10; i++, *ptr_arreglo++){
        if(*ptr_arreglo%2 == 0){
            cout<<"El numero "<<*ptr_arreglo<<" es par"<<endl;
            cout<<"Su posición de memoria es: "<<ptr_arreglo<<endl;
        }
    }

    return 0;
}
