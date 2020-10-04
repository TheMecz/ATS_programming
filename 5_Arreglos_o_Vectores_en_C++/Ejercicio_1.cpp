/*Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.
 * */

#include <iostream>

using namespace std;

int main() {

    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int suma=0;

    for(int i=0; i<10; i++){
        suma += numeros[i];
    }

    cout<<"La suma de los elementos del vector es: "<<suma;
    return 0;
}
