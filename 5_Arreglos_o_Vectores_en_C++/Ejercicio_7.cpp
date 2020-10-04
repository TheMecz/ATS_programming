/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos
 * vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos
 * del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.
 * */

#include <iostream>

using namespace std;

int main() {

   char vector1 [] = {'M','A','X',' '};
   char vector2 [] = {'P','O','N','C','E'};
   char vector3 [9];

   for(int i=0; i<9; i++){
       if(i<4)
           vector3[i] = vector1[i];
       else
           vector3[i] = vector2[i-4];
   }

   for(int i=0; i<9; i++){
       cout<<vector3[i];
   }
   return 0;
}
