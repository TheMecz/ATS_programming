/*Ejercicio 1: Escribe un programa que lea dos números y determine cuál de ellos es el mayor
 * */

#include <iostream>

using namespace std;

int main(){

    float num1, num2;
    cout<<"Digite el primer número: "; cin>>num1;
    cout<<"Digite el segundo número: "; cin>>num2;

    if(num1 == num2){
        cout<<"Ambos numeros son iguales";
    }
    else if(num1 > num2){
        cout<<"El primer numero es mayor que el segundo numero.";
    }
    else{
        cout<<"El segundo numero es mayor que el primer numero.";
    }

    return 0;
}