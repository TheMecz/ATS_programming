/*Ejercicio 11: Escriba un programa que calcule el valor de:
 * 2^1 + 2^2 + 2^3 + ... + 2^n
 * */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, suma=0;

    cout<<"Digite el enésimo número: "; cin>>n;

    for(int i=1; i<=n ; i++){

        suma += pow(2,i);
    }

    cout<<"\nEl resultado de los "<<n<<" elementos es: "<<suma;

    return 0;
}

