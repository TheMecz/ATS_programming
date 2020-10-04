/*Ejercicio 5: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el
 * carácter es una vocal minúscula o no*/

#include <iostream>

using namespace std;

int main(){

    char letra;
    cout<<"Digite un caracter: "; cin>>letra;
    switch (letra) {

        case 'a': cout<<"Es una vocal minuscula"<<endl;
            break;
        case 'e': cout<<"Es una vocal minuscula"<<endl;
            break;
        case 'i': cout<<"Es una vocal minuscula"<<endl;
            break;
        case 'o' :cout<<"Es una vocal minuscula"<<endl;
            break;
        case 'u': cout<<"Es una vocal minuscula"<<endl;
            break;
        default: cout<<"No es una vocal minuscula"<<endl;
        break;
    }

    return 0;
}