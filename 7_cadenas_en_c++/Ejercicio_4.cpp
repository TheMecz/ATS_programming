/*Ejercicio 4: Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al
 * usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal
 * (NombreDelUsuario)".*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char cad1[] = "Hola que tal ";
    char nombre[40];
    cout<<"Digite su nombre: "; cin.getline(nombre, 40, '\n');
    
    strcat(cad1, nombre);
    
    cout<<cad1<<endl;
    
    return 0;
}