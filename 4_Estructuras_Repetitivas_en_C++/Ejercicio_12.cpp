/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión:
 * 1-2+3-4+5-6....n
 * */

#include <iostream>
using namespace std;

int main() {

    int n, suma=0;

    cout<<"Digite el enésimo número: "; cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2==0)
            suma -=i;
        else
            suma +=i;
    }

    cout<<"\nEl resultado de la suma de los "<<n<<" elementos es: "<<suma;

    return 0;
}

