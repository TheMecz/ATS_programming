/*Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento
 * del arreglo.*/

#include <iostream>

using namespace std;

int main() {

    int n, menor=1000, *posicion;
    cout<<"Digite el tamaño del arreglo: "; cin>>n;

    int arreglo[1000], *ptr_arreglo;

    for(int i=0; i<n; i++){
        cout<<"Digite un número ["<<i<<"]: "; cin>>arreglo[i];
    }

    ptr_arreglo = arreglo;

    for(int i=0; i<n; i++, *ptr_arreglo++){
        if(menor>*ptr_arreglo){
            menor = *ptr_arreglo;
            posicion = ptr_arreglo;
            //cout<<ptr_arreglo<<endl;
        }
    }
    cout<<"El menor valor del arreglo es: "<<menor<<endl;
    cout<<"Su posición es: "<<posicion;
    return 0;
}
