/*Ejercicio 8: Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real, convertirlos a sus
 * respectivos valores y por ultimo sumarlos.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
    char numeros_int[100];
    char numeros_float[100];
    int numero_i;
    float numero_f;
    float suma;

    cout<<"Digite una cadena de numeros enteros: "; cin.getline(numeros_int, 100,'\n');
    cout<<"Digite una cadena de numeros reales: "; cin.getline(numeros_float,100,'\n');
    numero_i = atoi(numeros_int);
    numero_f = atof(numeros_float);
    suma = numero_i + numero_f;
    cout<<"La suma de los dos numeros es: "<<suma<<endl;

}
