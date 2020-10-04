/*Ejercicio 6: Escribe un programa que lea de la entrada estándar un carcater e indique en la salida estandar si el
 *caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal*/

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
        case 'A': cout<<"Es una vocal mayuscula"<<endl;
            break;
        case 'E': cout<<"Es una vocal mayuscula"<<endl;
            break;
        case 'I': cout<<"Es una vocal mayuscula"<<endl;
            break;
        case 'O': cout<<"Es una vocal mayuscula"<<endl;
            break;
        case 'U': cout<<"Es una vocal mayuscula"<<endl;
            break;
        default: cout<<"El caracter ingresado no es una vocal"<<endl;
            break;
    }

    return 0;
}