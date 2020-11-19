/*Trasmisión de Direcciones
 *
 * Ejemplo: Intercambiar el valor de 2 variables. */

#include <iostream>

using namespace std;

void intercambio(float *, float *);

int main() {

    float num1 = 20.8, num2 = 6.78;
    cout<<"Primer Numero: "<<num1<<endl;
    cout<<"Segundo Numero: "<<num2<<endl;

    intercambio(&num1,&num2);
    cout<<"\nDespues del intercambio: \n";
    cout<<"\nEl nuevo valor de num1: "<<num1<<endl;
    cout<<"\nEl nuevo valor de num2: "<<num2<<endl;

    return 0;
}

void intercambio(float *ptr_num1, float *ptr_num2){
    float aux;
    aux = *ptr_num1;
    *ptr_num1 = *ptr_num2;
    *ptr_num2 = aux;
}