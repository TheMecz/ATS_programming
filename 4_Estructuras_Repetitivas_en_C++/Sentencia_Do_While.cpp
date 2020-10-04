/*La sentencia do while:
 *
 *      Do{
 *          conjunto de intrucciones;
 *      }while(Expresión Logica)
 **/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    int i=0;
    int j=10;
    do {

        cout<<i<<endl;
        i++;

    }while (i <= 10);

    do {

        cout<<i<<endl;
        j--;

    }while (j >= 10);
    system("pause");
    return 0;
}