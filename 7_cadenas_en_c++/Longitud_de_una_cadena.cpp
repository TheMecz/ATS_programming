//longitud de una cadena de caracteres - Funcion strlen().

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "hola";
    int longitud = 0;
    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;

    char palabra2[] = "Hola que tal?";
    int longitud_2= 0;

    longitud_2 = strlen(palabra2);
    cout<<"Numero de elementos de la segunda cadena es: "<<longitud_2<<endl;


    return 0;
}
