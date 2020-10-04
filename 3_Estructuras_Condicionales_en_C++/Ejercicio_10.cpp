/*Ejercicio 10: Mostrar los meses del año, pidiéndole al usuario un número entero (1-12),
 * y mostrar el mes al que corresponde.
 * */

#include <iostream>

using namespace std;

int main(){

    int mes;
    cout<<"Digite un numero entre [1-12]: ";
    cin>>mes;

    switch (mes) {
        case 1: cout<<"El mes es Enero."; break;
        case 2: cout<<"El mes es Febrero."; break;
        case 3: cout<<"El mes es Marzo."; break;
        case 4: cout<<"El mes es Abril."; break;
        case 5: cout<<"El mes es Mayo."; break;
        case 6: cout<<"El mes es Junio."; break;
        case 7: cout<<"El mes es Julio."; break;
        case 8: cout<<"El mes es Agosto."; break;
        case 9: cout<<"El mes es Setiembre."; break;
        case 10: cout<<"El mes es Octubre."; break;
        case 11: cout<<"El mes es Noviembre."; break;
        case 12: cout<<"El mes es Diciembre."; break;
        default: "El valor de digitado no esta en el rango.";
    }

    return 0;
}
