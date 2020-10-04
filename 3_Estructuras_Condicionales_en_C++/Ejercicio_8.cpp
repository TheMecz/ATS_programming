/*Ejercicio 8: Escriba un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número
 * e indicar si el número coincide con alguno de los introcidos con anterioridad.*/

#include <iostream>

using namespace std;

int main(){

    int num1=0, num2=0, num3=0, num4=0;
    cout<<"Digite tres numeros: "<<endl;
    cin>>num1>>num2>>num3;
    cout<<"Digite el cuarto numero: "<<endl;
    cin>>num4;
    if(num4 == num1 || num4==num2 || num4==num3){
        cout<<"El cuarto numero coincide por lo menos con uno de los 3 numeros anteriores."<<endl;
    }
    else {
        cout<<"El cuato numero no conincide con ninguno de los 3 numeros anteriores";
    }

    return 0;
}
