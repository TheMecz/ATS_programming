/*Ejercicio 1: Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si
 * ésta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char cadena[100];

    cout<<"Digite una cadena de caracteres: "; cin.getline(cadena,100,'\n');
    if(strlen(cadena)>10){
        cout<<cadena<<endl;
    }
    else{
        cout<<" ";
    }

    return 0;
}
