/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese
 * momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
 * */

#include <iostream>

using namespace std;

int main() {

    int num, conteo=0;

    do {
        cout <<"Digite un número: ";
        cin >> num;
        if(num>0){
            conteo++;
        }
    }while (num!=0);

    cout<<"El número de números mayores que 0 es: "<<conteo;


    return 0;
}

