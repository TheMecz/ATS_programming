/*Ejercicio 1: Determinar si un número es primo o no; con punteros y además indicar en que posición de
 * memoria se guarda el número.*/

#include <iostream>

using namespace std;

int main() {

    int num, *ptr_num, cont = 0;

    cout<<"Digite un número: "; cin>>num;
    ptr_num = &num;

    for(int i=1; i<=*ptr_num ; i++){
        if(*ptr_num%i == 0){
            cont++;
        }
    }

    if(cont>2){
        cout<<"El número "<<*ptr_num<<" no es primo"<<endl;
        cout<<"La dirección de memoria es: "<<ptr_num<<endl;
    }
    else{
        cout<<"El número "<<*ptr_num<<" es primo"<<endl;
        cout<<"La dirección de memoria es: "<<ptr_num<<endl;
    }

    return 0;
}

