/*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10
 * y muestre en la salida entándar su tabla de multiplicar.
 * */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    int num;
    int j=0;
    cout<<"Digite un número: "; cin>>num;

    for(int i=1; i<=10; i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }

    do{

        j++;
        cout<<num<<"*"<<j<<"="<<num*j<<endl;

    }while (j<1 || j<10);

    system("pause");
    return 0;
}