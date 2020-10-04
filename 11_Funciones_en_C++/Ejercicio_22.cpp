/*Ejercicio 22: Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida estándar los numeros del ini al fin. Escriba una versión que escriba los números en orden ascendente.*/

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

type_entero escribeNumeros(type_entero ini, type_entero fin){
  if(ini == fin)
  return ini;
  else
  return escribeNumeros(ini, fin-1);

  
}
void mostrar(type_entero ini, type_entero fin){
  
  for(size_t i=ini; i<=fin; i++){
    cout<<escribeNumeros( i, fin)<<" ";
  }
}

type_entero main(){

  type_entero ini, fin;
  cout<<"Digite el numero inicial: ";cin>>ini;
  cout<<"Digite el numero final: ";cin>>fin;

  escribeNumeros(ini, fin);
  mostrar(ini,fin);

  return 0;
}

