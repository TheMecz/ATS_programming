/*Ejercicio 12: Hacer un menú que considere las siguientes opciones:
 * caso 1: Cubo de un número
 * caso 2: Número par o impar
 * caso 3: Salir.
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int opcion, num, cubo;

    cout<<":::::¡BIENVENIDO!:::::"<<endl;
    cout<<"SELECCIONE UNA OPCIÓN"<<endl;
    cout<<"Opción 1: Cubo de un número."<<endl;
    cout<<"Opción 2: Número de par o impar."<<endl;
    cout<<"Opción 3: Salir."<<endl;
    cout<<"Digite la opción: "; cin>>opcion;
    switch (opcion) {
        case 1:
            cout<<"Digite un número: "; cin>>num;
            cubo = pow(num,3);
            cout<<"El Resultado es: "<<cubo;
            break;
        case 2:
            cout<<"Digite un número: "; cin>>num;
            if(num%2 == 0 ){
                cout<<"El número es Par."<<endl;
            }
            else{
                cout<<"El número es Impar."<<endl;
            }
            break;
        case 3:
            cout<<"Gracias por entrar, regrese pronto."<<endl;
            break;
        default: cout<<"Esa opción no existe."<<endl;

    }
    return 0;
}
