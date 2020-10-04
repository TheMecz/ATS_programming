/*Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n
 * */

#include <iostream>
using namespace std;

int main() {

    int n, producto=1;
    cout<<"Digite el enésimo número: "; cin>>n;

    for (int i=1; i<=n ; i++) {
        producto *=i;
    }

    cout<<"El resultado de calcular el factorial de "<<n<<" es: "<<producto;

    return 0;
}

