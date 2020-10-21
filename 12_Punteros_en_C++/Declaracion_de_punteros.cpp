/*Puntero - Declaración de Punteros

&n = La direcion de n
*n = la variable cuya direcion esta almacenada en n

*/

#include <iostream>

using namespace std;

int main(){

    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout<<"Número: "<<*dir_num<<endl;
    cout<<"Dirección de memoria: "<<dir_num<< endl;


  return 0;
}

