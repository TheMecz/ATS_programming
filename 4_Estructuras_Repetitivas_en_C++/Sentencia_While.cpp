/*La sentencia while:
 *
 *      while(Expresión Logica){
 *          conjunto de intrucciones;
 *      }
 **/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int i=1, j=10;

    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    while(j>=1){
        cout<<j<<endl;
        j--;
    }
    getch();
    return 0;
}

