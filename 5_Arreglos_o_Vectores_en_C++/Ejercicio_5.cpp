/*Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor
 * elemento del vector.
 * */

#include <iostream>

using namespace std;

int main() {

    int n, mayor=0;
    cout<<"Digite el número de elementos: "; cin>>n;
    int num[n];

    for(int i=0; i<n; i++){
        cout<<i+1<<". Digite un número: ";
        cin>>num[i];

        if(num[i]>mayor)
            mayor = num[i];

    }

    cout<<"El mayor elemento del vector es: "<<mayor;

    return 0;
}

