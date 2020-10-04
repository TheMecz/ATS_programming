/*Ejercicio 3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;

    cout<<"Digite un numero entero: "; cin>>num;

    if(num == 0){
        cout<<"El numero es neutro."<<endl;
    }
    else if(num%2 == 0){
        cout<<"El numero es par."<<endl;
    }
    else{
        cout<<"El numero es impar."<<endl;
    }

    return 0;
}