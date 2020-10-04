/*Ejercicio 10. Escriba un programa que calcule las solucinoes de una ecuación de segundo grado de la forma
 * ax^2 + bx + c = 0, teniendo en cuenta que:
 * x = -b +- raiz(b^2 - 4*a*c) / 2*a.
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c, x1=0, x2=0;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"\nEl valor de x1 es: "<<x1;
    cout<<"\nEl valor de x2 es: "<<x2<<endl;
    return 0;
}