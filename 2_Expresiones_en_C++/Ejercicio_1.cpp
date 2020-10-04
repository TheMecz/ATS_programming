/*Ejercicio 1. Escribe la siguiente expresión como expresión en c++ en c++:
 * a/b + 1
 * */

#include <iostream>

using namespace std;

int main(){

    float a, b;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout.precision(3);
    cout<<"El resultado es: "<<(a/b)+1;

    return 0;
}