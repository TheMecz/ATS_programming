/*Ejercicio 7: Escriba un programa que solicite una edad (entero) e indique en la salida estandar si la edad introducida
 * en el rango [18-25].*/

#include <iostream>

using namespace std;

int main(){

    int edad;
    cout<<"Digite su edad: "; cin>>edad;
    if((edad>18) && (edad<25)){
        cout<<"Su edad esta en el rango de [18-25].";
    }
    else{
        cout<<"Su edad no esta en el rango de [18-25].";
    }
    return 0;
}
