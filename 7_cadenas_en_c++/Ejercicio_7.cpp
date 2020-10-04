/*Ejercicio 7: Pedir su nombre al usuario en mayuscula, si su nombre comienza por la letra A, convertir su nombre
 * a minusculas, caso contraio no convertirlo.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char nombre[40];

    //Otra forma de comparar es if (strncmp(nombre,'A',1) == 0)
    cout<<"Digite su nombre en mayusculas: "; cin.getline(nombre,40,'\n');

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout<<nombre;
    }
    else{
        cout<<nombre;
    }
    return 0;
}
