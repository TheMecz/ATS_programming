/*Ejericio 1. Escriba un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma,
 * resta, multiplicación y división.
 * */

#include <iostream>
using namespace std;

int main() {

    float num1, num2;


    cout<<"Digite un numero: "; cin>>num1;
    cout<<"Digite otro numero: "; cin>>num2;
    cout<<"La suma es: "<<num1+num2<<endl;
    cout<<"La resta es: "<<num1-num2<<endl;
    cout<<"La multiplicacion es: "<<num1*num2<<endl;
    cout<<"La division es: "<<num1/num2<<endl;


    return 0;
}
