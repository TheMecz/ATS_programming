//Correspondencia entre arrays y punteros

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

  type_entero numero[] = {1,2,3,4,5};
  type_entero *dir_numero;

  dir_numero = numero;

  for(size_t i=0; i<5; i++){
    cout<<"Elementos del vector ["<<i<<"]: "<<*dir_numero++<<endl;
  }
  for(size_t i=0; i<5; i++){
    cout<<"Posicion de memoria "<<numero[i]<<" es: "<<dir_numero++<<endl;
  }

  return 0;
}

