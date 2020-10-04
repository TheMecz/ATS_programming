/*Ejercicio 4. Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados.
 * Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo entero.
 * */

#include <iostream>

using namespace std;

int main(){

    int edad=0;
    char sexo[10];
    float altura=0;

    cout<<"Digite su edad: "; cin>>edad;
    cout<<"Digite su sexo(M/F): "; cin>>sexo;
    cout<<"Digite su altura: "; cin>>altura;
    cout<<"\nLa edad de la persona es: "<<edad;
    cout<<"\nEl sexo de la persona es: "<<sexo;
    cout<<"\nLa altura de la persona es: "<<altura;

    return 0;
}