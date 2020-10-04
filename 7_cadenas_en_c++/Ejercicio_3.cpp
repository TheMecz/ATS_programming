/*Ejercicio 3: Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar
 * cual es mayor alfabeticamente.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra1[100];
    char palabra2[100];

    cout<<"Digite una palabra: "; cin.getline(palabra1, 100, '\n');
    cout<<"Digite otra palabra: "; cin.getline(palabra2, 100, '\n');

    if(strcmp(palabra1, palabra2)==0){
        cout<<"Ambas palabras son iguales."<<endl;
    }
    else{
        cout<<"Las palabras no son iguales."<<endl;
        if(strcmp(palabra1, palabra2) > 0){
            cout<<palabra1<<" es mayor alfabeticamente."<<endl;
        }
        else{
            cout<<palabra2<<" es mayor alfabeticamente."<<endl;
        }
    }

    return 0;
}
