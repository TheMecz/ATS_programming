/*Puntero - Declaración de Punteros

&n = La direcion de n
*n = la variable cuya direcion esta almacenada en n

*/

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;
typedef char type_caracter;



type_entero main(){

  type_entero num, *dir_num;
  num =20;
  dir_num = &num;

  cout<<"Numero: "<<num<<endl;
  cout<<"Direccion de menoria: "<<&num<<endl;
  cout<<"Numero usando puntero: "<<*dir_num<<endl;

  return 0;
}

