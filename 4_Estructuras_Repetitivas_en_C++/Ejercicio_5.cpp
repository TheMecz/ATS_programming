/*Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30]
 * o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.
 * */

#include <iostream>
using namespace std;

int main() {

    int num,suma=0;

    do{

        cout<<"Digite un número: ";
        cin>>num;
        if(num > 0) {
            if ((num < 20 || num > 30) && num!=0) {
                suma += num;
            }
        }
    }while ((num < 20 || num > 30) && num!=0);

    cout<<"La suma de los valores mayores a 0 son: "<<suma;

    return 0;
}

