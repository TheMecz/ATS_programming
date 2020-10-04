/*Ejercicio 3. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 * Edad: dato de tipo entero.
 * Sexo: dato de tipo carácter.
 * Altura en metros: dato de tipo real.
 * Tras leer los datos, el programa debe mostrarlos en la salida estándar.
 * */

#include <iostream>

using namespace std;

int main(){

    int edad=0;
    char sexo;
    float altura=0;

    cout<<"Digite su edad: "; cin>>edad;
    cout<<"Digite su sexo(M/F): "; cin>>sexo;
    cout<<"Digite su altura: "; cin>>altura;
    cout<<"\nLa edad de la persona es: "<<edad;
    cout<<"\nEl sexo de la persona es: "<<sexo;
    cout<<"\nLa altura de la persona es: "<<altura;

    return 0;
}