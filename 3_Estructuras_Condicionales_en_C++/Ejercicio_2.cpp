/*Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor*/

#include <iostream>

using namespace std;

int main(){

    float num1, num2, num3;

    cout<<"Digite el primer numero: "; cin>>num1;
    cout<<"Digite el segundo numero: "; cin>>num2;
    cout<<"Digtie el tercer numero: "; cin>>num3;

    if((num1 > num2)&&(num1 > num3) ){
        cout<<"El primer numero es mayor que los otros dos numeros."<<endl;
    }
    else if((num2 > num1) && (num2 > num3)){
        cout<<"El segundo numero es mayor que los otros dos numeros."<<endl;
    }
    else if((num3 > num1) && (num3 > num2)){
        cout<<"El tercer numero es mayor que los otros dos numeros."<<endl;
    }
    else {
        cout<<"Los tres numeros son iguales"<<endl;
    }

    return 0;
}