/*Ejercicio 6: Escriba un programa que defina un vector de números y calcule si existe algún número en el vector
 * cuyo valor equivale a la suma del resto de números del vector.
 * */

#include <iostream>

using namespace std;

int main() {

    int n, suma = 0, mayor=0;
    cout<<"Digite el tamaño del vector: "; cin>>n;
    int num[n];
    for(int i=0; i<n; i++){
        cout<<i+1<<". Digite un número: "; cin>>num[i];
        suma += num[i];
        if(num[i]>mayor){
            mayor = num[i];
        }
    }
    if(mayor == suma-mayor){
        cout<<"El elemento "<<mayor<<" es equivalente a las suma de los otros elementos.";
    }


    return 0;
}
