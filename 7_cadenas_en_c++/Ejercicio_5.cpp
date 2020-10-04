/*Ejercicio 5: Hacer un programa que determine si una palabra es políndroma*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra[100];
    char palabra2[100];
    cout<<"Digite una palabra: "; cin.getline(palabra, 100, '\n');
    strcpy(palabra2, palabra);
    strrev(palabra2);

    if( strcmp(palabra,palabra2) == 0 ){
        cout<<"La palabra "<<palabra<<" es polindroma."<<endl;
    }
    else{
        cout<<"La palabra "<<palabra<<" no es polindroma.";
    }

    return 0;
}
