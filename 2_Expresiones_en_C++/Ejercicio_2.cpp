/*Ejercicio 2. Escriba la siguiente expresión matemática como expresión en c++.
 * a+b / c+d
 * */

#include <iostream>

using namespace std;

int main(){

    float a, b, c, d;
    cout<<"Digite el valor de a: "; cin>> a;
    cout<<"Digite el valor de b: "; cin>> b;
    cout<<"Digite el valor de c: "; cin>> c;
    cout<<"Digite el valor de d: "; cin>> d;
    cout.precision(3);
    cout<<"El resultado es: "<<(a+b)/(c+d)<<endl;

    return 0;
}