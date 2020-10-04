/*Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo*/

#include <iostream>

using namespace std;

int main(){

    float num = 0;

    cout<<"Digite un numero cualqueira: "; cin>>num;

    if( num == 0){
        cout<<"Es un numero neutro."<<endl;
    }
    else if( num > 0 ){
        cout<<"El numero es positivo."<<endl;
    }
    else{
        cout<<"El numero es negativo"<<endl;
    }

    return 0;
}