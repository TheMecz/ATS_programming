/*Ejercicio 6: Convertir dos cadenas de minusculas a mayusculas. Compararlas, y decir si son iguales o no*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra_1[100];
    char palabra_2[100];
    cout<<"Digite una palabra: "; cin.getline(palabra_1,100,'\n');
    cout<<"Digite otra palabra: "; cin.getline(palabra_2, 100, '\n');

    strupr(palabra_1);
    strupr(palabra_2);

    if (strcmp(palabra_1,palabra_2)==0){
        cout<<palabra_1<<" es igual a "<<palabra_2;
    }
    else{
        cout<<palabra_1<<" es diferente a "<<palabra_2;
    }

    return 0;
}
