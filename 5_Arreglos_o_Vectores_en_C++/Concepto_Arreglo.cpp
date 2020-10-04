/*----------------------------------¿Qué es un vector o arreglo?----------------------------------
 * Un vector o array unidimensional es un tipo de dato que almacena una secunecia de datos del mismo tipo.
 * Los elemntos de un vector se almacenan en zonas contiguas de memoria y se puede acceder a ellos de manera directa
 * mediante un índice.
 *
 * [2] [5] [8] [1] [9]
 *  0   1   2   3   4
 *
 * Tipo nombre[Tamaño];
 *
 * Ejemplos:
 *
 * int numeros[10];   ---->   int numeros[] = {1,2,3,4,5,6,7,8,9,10}
 * char letras[5];   ---->   char letras[] = {'a','e','i','o','u'}
 * float reales[15];   ---->   float reales[] = {1.5, 2.5, 3.5, .... , 15.5}
 *
 *  int numero[] = {1,2,3,4,5,6,7,8,9,10}
 *  [1] [2] [3] [4] [5] [6] [7] [8] [9] [10]
 *   0   1   2   3   4   4   5   6   7   8
 *
 *   cout>>numero[0]; ----> 1;
 *   cout>>numero[2]; ----> 3;
 *   cout>>numero[4]; ----> 5;
 *   cout>>numero[6]; ----> 8;
 *   cout>>numero[8]; ----> 10;
 *
 *   cout>>letras[0]; ----> a;
 *   cout>>letras[1]; ----> e;
 *   cout>>letras[2]; ----> i;
 *   cout>>letras[3]; ----> o;
 *   cout>>letras[4]; ----> u;
 *
 * */

#include <iostream>
using namespace std;

int main() {

    int num[10];
    char letras[] = {'a','e','i','o','u'};

    for(int i=0; i<10; i++){
        cin>>num[i];
    }
    for(int i=0; i<10; i++){
        cout<<num[i]<<'\t';
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<letras[i]<<'\t';
    }
    return 0;
}
