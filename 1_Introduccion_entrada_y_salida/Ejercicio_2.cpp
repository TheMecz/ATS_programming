/*Ejercicio 2. Escribe un programa que lea de la entrada estándar el precio de un producto y muestre
 * en la salida estándar el precio del producto al aplicar el IVA.
 * */

#include <iostream>

using namespace std;

int main(){

    float precio, iva;
    cout<<"Digite el precio del producto: "; cin>>precio;
    iva = precio*0.21;
    cout<<"\nEl precio final es: "<<precio + iva<<endl;

    return 0;
}