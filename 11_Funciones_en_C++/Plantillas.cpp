/* Plantilla de Función
 *
 * Ejemplo: Sacar el valor absoluto de un número
 * */


#include <iostream>

using namespace std;

//Prototipo de Función
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main() {

    int num1;
    float num2;
    double num3;

    cout<<"Digite un número: "; cin>>num1;
    cout<<"Digite un número: "; cin>>num2;
    cout<<"Digite un número: "; cin>>num3;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0)
        numero *= -1;

    cout<<"El valor absoluto del número es: "<<numero<<endl;
}
