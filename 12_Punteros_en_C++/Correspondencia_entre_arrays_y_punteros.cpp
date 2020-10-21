//Correspondencia entre arrays y punteros

#include <iostream>

using namespace std;

int main() {

    int numeros[] = {1,2,3,4,5};
    int *ptr_numeros;
    //ptr_numeros = &numeros[0];
    ptr_numeros = numeros;

    for(int i=0; i<5; i++){
        cout<<"Elemento del vector ["<<i<<"]: "<<*ptr_numeros++<<endl;
    }

    for(int i=0; i<5; i++){
        cout<<"Posición de memoria "<<numeros[i]<<" es: "<<ptr_numeros++<<endl;
    }

    return 0;
}
