/*Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+..+n*/

#include <iostream>
using namespace std;

int main() {

    int n, suma=0;

    cout<<"Digite el enésimo número de la sumatoria: "; cin>>n;

    for(int i=1; i<=n ; i++ ){
        suma += i;
    }

    cout<<"La sumatoria de los "<<n<<" números es: "<<suma;

    return 0;
}


