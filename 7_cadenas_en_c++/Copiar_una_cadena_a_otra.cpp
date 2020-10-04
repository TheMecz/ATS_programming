//Copiar el contenido de una cadena a otra - Funcion strcpy()

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char nombre[] = "Max";
    char nombre2[20];

    strcpy(nombre2, nombre);

    cout<<nombre2<<endl;

    return 0;
}
