/*Plantillas de funcion

Ejemplo: Sacar el valor absoluto de un número */

#include<iostream>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;

//Prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
  
  type_entero num1 = -4; 
  type_decimal num2 = -56.93;
  type_doble num3 = -123.419234124;

  mostrarAbs(num1);
  mostrarAbs(num2);
  mostrarAbs(num3);
 
  return 0;
}
template <class TIPOD>
void mostrarAbs(TIPOD numero){
  if(numero<0){
    numero = -1*numero;
  }
  cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
