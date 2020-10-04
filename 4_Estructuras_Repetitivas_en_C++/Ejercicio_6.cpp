/*Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin
 * utilizar la función pow.*/

#include <iostream>
using namespace std;

int main() {

    int x, y;
    int resultado=1;
    cout<<"Digite un número: "; cin>>x;
    cout<<"Digite el exponente del número: "; cin>>y;

    for(int i=0; i< y; i++){
        resultado *=x;
    }
    cout<<"El resuldado es: "<<resultado;
    return 0;
}

