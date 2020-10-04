/*Ejercicio 9: Realice un programa que lea una cadena de caracteres de la entrada estándar y muestre en la salida
 * estándar cuantas ocurrencias de cada vocal existen en la cadena.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char frase[30];
    int letras_a=0;
    int letras_e=0;
    int letras_i=0;
    int letras_o=0;
    int letras_u=0;
    int vocales =0;

    cout<<"Digite una cadena de caracteres: "; cin.getline(frase,30,'\n');
    for(size_t i=0; i<30 ; i++){
        switch(frase[i]){
            case 'a': letras_a++ ; break;
            case 'e': letras_e++ ; break;
            case 'i': letras_i++ ; break;
            case 'o': letras_o++ ; break;
            case 'u': letras_u++ ; break;
        }
    }
    vocales = letras_a + letras_e + letras_i + letras_o + letras_u;
    cout<<"Numero de vocales a: "<<letras_a<<endl;
    cout<<"Numero de vocales e: "<<letras_e<<endl;
    cout<<"Numero de vocales i: "<<letras_i<<endl;
    cout<<"Numero de vocales o: "<<letras_o<<endl;
    cout<<"Numero de vocales u: "<<letras_u<<endl;
    cout<<"Numero de vocales totales: "<<vocales<<endl;

    return 0;
}