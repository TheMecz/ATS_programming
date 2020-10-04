/*Ejercicio 8. Escriba un programa que lea de la estrada estándar los dos catetos de un triángulo rectángulo y escriba
 * en la salida estándar su hipotenusa.
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float cateto_1, cateto_2, hipotenusa;
    cout<<"Digite el primer cateto: "; cin>>cateto_1;
    cout<<"Digite el segundo cateto: "; cin>>cateto_2;
    cateto_1 = pow(cateto_1,2);
    cateto_2 = pow(cateto_2,2);
    hipotenusa = sqrt(cateto_1 + cateto_2);
    cout<<"\nEl valor de la hipotenusa es: "<<hipotenusa<<endl;

    return 0;
}