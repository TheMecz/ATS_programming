/*Trasmisión de arreglos
 * Ejemplo: Hallar el máximo elemento de un arreglo. */

#include <iostream>

using namespace std;

int hallarMax(int *, int); //Prototipo de Función

int main() {

    const int nElementos = 5;
    int numeros[nElementos] = {3,5,2,8,1};
    cout<<"El mayor elemento es: "<<hallarMax( numeros,nElementos);

    return 0;
}

int hallarMax(int *ptr_vec, int nElementos){
    int max=0;

    for(int i=0; i<nElementos; i++, *ptr_vec++){
        if(*ptr_vec > max){
            max = *ptr_vec;
        }
    }
    return max;
}