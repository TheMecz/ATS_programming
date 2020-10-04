/*Ejercicio 3. Escriba la siguigiente expresión como espresión en c++.
 *  (a + b/c) / (d + e/f)
 **/

#include <iostream>

using namespace std;

int main(){

    float a, b, c, d, e, f;
    cout<<"Digite el valor de a: "; cin>> a;
    cout<<"Digite el valor de b: "; cin>> b;
    cout<<"Digite el valor de c: "; cin>> c;
    cout<<"Digite el valor de d: "; cin>> d;
    cout<<"Digite el valor de e: "; cin>> e;
    cout<<"Digite el valor de f: "; cin>> f;

    cout.precision(3);
    cout<<"\nEl resultado es: "<<(a+(b/c))/(d+(e/f));

    return 0;
}