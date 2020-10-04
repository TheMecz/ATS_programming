/*Ejercicio 4: Escriba un programa que defina un vector de números y muestre en la salida estándar el vector
 * en orden inverso del último al primer elemento. */

#include <iostream>

using namespace std;

int main() {

    int n;
    cout<<"Digite el número de elemntos del vector: "; cin>>n;
    int numero[n];

    cout<<"Digite los elementos del vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>numero[i];
    }
    for(int i=n-1; i>-1; i--){
        cout<<"El elemento en la posición "<<i<<" es: "<<numero[i]<<endl;
    }

    return 0;
}

