/*Ejercicio 13: Hacer un programa que realice la serie de Fibonacci
 * Fibonacci -> 1,1,2,3,5,8,13, ... ,n
 * */

#include <iostream>
using namespace std;

int main() {

    int n, num1, num2=1, fibonacci=1;

    cout<<"Digite la enésima posición: "; cin>>n;

    for(int i=2; i<n; i++){
        num1 = num2;
        num2 = fibonacci;
        fibonacci = num1+num2;
    }

    cout<<"\nEl valor de la posición "<<n<<" es: "<<fibonacci;

    return 0;
}


