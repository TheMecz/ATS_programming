/*Ejercicio 7: Pedir su nombre al usuario y resolver el número de vocales que hay.
 * Nota: Recuerda que debes utilizar punteros.
 * */

#include <iostream>

using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombre[30];


int main(){
    pedirDatos();
    cout<<"El número de vocales del nombres es: "<<contandoVocales(nombre)<<endl;

    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(nombre, 30 , '\n');
    strupr(nombre);
}
int contandoVocales(char *ptr_nombre){
    int cont=0;
    while(*ptr_nombre){ //Mientras nombre no sea nulo '\0'
        switch (*ptr_nombre) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cont++;
        }
        ptr_nombre++;
    }
    return cont;
}