/*Ejercicio 2: Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia
 * otro arreglo de caracteres*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char cadena_1[30];
    char cadena_2[30];

    cout<<"Digite una cadena de caracteres: "; cin.getline(cadena_1,30,'\n');

    strcpy(cadena_2,cadena_1);

    cout<<cadena_2<<endl;


    return 0;
}