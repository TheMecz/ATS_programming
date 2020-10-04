/*Ejercicio 2: Escribe un programa que defina un vector de números y calcule la multiplicación acumulada
 * de sus elementos.
 * */

#include <iostream>

using namespace std;

int main() {

   int numero[] = {1,2,3,4,5,6,7,8,9,10};
   int resultado = 1;
   for(int i=0; i<10; i++){
       resultado *= numero[i];
   }

   cout<<"El producto de los elementos del vector es: "<<resultado;

    return 0;
}
