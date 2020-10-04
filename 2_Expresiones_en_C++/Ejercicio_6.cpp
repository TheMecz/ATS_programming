/*Ejercicio 6. Escriba un programa que lea la nota final de cuato alumnos y calcule la nota
 * final media de los cuatro alumnos.
 * */

#include <iostream>

using namespace std;

int main(){

    float a1,a2,a3,a4;
    cout<<"Digite la nota del primer alumno: "; cin>>a1;
    cout<<"Digite la nota del segundo alumno: "; cin>>a2;
    cout<<"Digite la nota del tercer alumno: "; cin>>a3;
    cout<<"Digite la nota del cuarto alumno: "; cin>>a4;

    cout<<"\nLa nota promedio de los cuatro alumnos es: "<<(a1+a2+a3+a4)/4;


    return 0;
}