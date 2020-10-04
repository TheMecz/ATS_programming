/*La sentencia for:
 *
 *      For(expr1; Expresión Logica; expr2){
 *          conjunto de intrucciones;
 *      }
 **/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    for(int i = 1;  i<=10; i++){
        cout<<i<<endl;
    }
    for(int i = 10;  i>0; i--){
        cout<<i<<endl;
    }

    getch();

    return 0;
}