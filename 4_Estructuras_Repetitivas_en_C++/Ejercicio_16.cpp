/*Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de un número entero.
 *
 * Por ejercicio: 20 = 2*2*5;
 * */

#include <iostream>
using namespace std;

int main() {

    int num;

    cout<<"Digite un número: "; cin>>num;

    for(int i=2; num>1; i++){
        while (num%i == 0){
            cout<<i<<" ";
            num /= i;
        }
    }

    return 0;
}

