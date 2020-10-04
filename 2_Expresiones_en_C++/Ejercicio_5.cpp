/*Ejercicio 5. Escriba un fragmento de programa que intercambie los valores de dos variables.
 * ejemplo:
 * al incio:
 * x = 10
 * y = 5
 * al final:
 * x = 5
 * y = 10
 * */

#include <iostream>

using namespace std;

int main(){

    float x=0,y=0,z=0;
    cout<<"Digite el primer valor: "; cin>>x;
    cout<<"Digite el segundo valor: "; cin>>y;
    z = x;
    x = y;
    y = z;
    cout<<"\nEl primer valor ahora es: "<<x;
    cout<<"\nEl segundo valor ahora es: "<<y;


    return 0;
}