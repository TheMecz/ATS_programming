/*Ejercicio 4: Escribe un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido
 * por el ususario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.*/

#include<iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;

type_doble a;

void pedirDatos();
template <class tipo>
void fraccion(tipo a);

int main(){

  pedirDatos();
  fraccion(a);

  return 0;
}

void pedirDatos(){
  cout<<"Digite un número: "; cin>>a;
}

template <class tipo>
void fraccion(tipo a){
  int b=a;
  cout<<"El resultado es: "<<a-b; 
}