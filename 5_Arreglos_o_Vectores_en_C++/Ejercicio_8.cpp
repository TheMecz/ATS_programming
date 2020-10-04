/*Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados
 * por 2 y muestre el segundo arreglo.
 * */

#include <iostream>

using namespace std;

int main() {

    int arreglo[5];
    int arreglo_2[5];
    for(int i=0; i<5; i++){
        cout<<i+1<<". Digite un número: ";
        cin>>arreglo[i];
        arreglo_2[i]=arreglo[i]*2;
    }

    cout<<"Los valores del arreglos 2 son: ";

    for(int i : arreglo_2){
        cout<<i<<'\t';
    }
    return 0;
}
