/*Ejercicio 10: Escriba un programa que calcule el valor de: 1! + 2! + 3! + ... + n!
 * */

#include <iostream>
using namespace std;

int main() {

    int n, suma=0, factorial=1;
    cout<<"Digite el enésimo factorial: "; cin>>n;

    for(int i=1; i<=n; i++){
        factorial *= i;
        suma += factorial;
    }

    cout<<"\nLa suma de factoriales es: "<<suma<<endl;

    return 0;
}

