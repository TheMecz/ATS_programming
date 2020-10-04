/*Ejercicio 21: Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o igual que cero: x^y.*/

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

type_entero potencia(type_entero x, type_entero y){
  if(y==1)
    return x;
  else
    x = x*potencia(x, y-1);

  return x;
}


type_entero main(){
  type_entero x,y;
  cout<<"Digite un numero: ";cin>>x;
  cout<<"Digite su potencia: "; cin>>y;
  cout<<"El resultado es: "<<potencia( x, y);

  return 0;
}

