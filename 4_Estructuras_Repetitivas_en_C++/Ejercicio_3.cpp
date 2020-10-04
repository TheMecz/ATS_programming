/*Ejercicio 3: Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los
 * 10 primeros enteros mayores que cero.
 * */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int suma=0;

    for(int i=0; i<10; i++){
        suma += pow((i+1),2);
    }
    cout<<"La suma de: "<<suma;
    return 0;
}

