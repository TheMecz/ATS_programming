/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria donde se está
 * guardando el número. Con punteros.*/

#include <iostream>

using namespace std;

int main() {

    int num1, *ptr_num1;

    cout<<"Digite si un número: "; cin>>num1;

    ptr_num1 = &num1;

    if(*ptr_num1%2 == 0){
        cout<<"El número "<<*ptr_num1<<" es par"<<endl;
        cout<<"La posición de memorias es: "<<ptr_num1<<endl;
    }
    else{
        cout<<"El número "<<*ptr_num1<<" es impar"<<endl;
        cout<<"La posición de memorias es: "<<ptr_num1<<endl;
    }

    return 0;
}
