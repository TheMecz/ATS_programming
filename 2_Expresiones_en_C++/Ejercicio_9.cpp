/*Ejercicio 9. Realice un programa que calcule el valor que toma la siguiente función para valores dados de x e y:
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float x, y, funcion=0;
    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;
    funcion = sqrt(x)/(pow(y,2)-1);
    cout<<"\nEl resultado es: "<<funcion;

    return 0;
}