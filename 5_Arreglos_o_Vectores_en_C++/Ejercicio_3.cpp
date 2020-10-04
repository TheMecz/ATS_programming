/*Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de
 * números y que muestre en la salida estándar los números del vector con sus índices asociados.
 * */

#include <iostream>

using namespace std;

int main() {

    int n;
    cout<<"Digite el tamaño del vector: "; cin>>n;
    int numeros[n];

    cout<<"Digite los valores del vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>numeros[i];
    }
    for(int i=0; i<n; i++){
        cout<<"El vector del indice "<<i<<" es: "<<numeros[i]<<endl;
    }

    return 0;
}
