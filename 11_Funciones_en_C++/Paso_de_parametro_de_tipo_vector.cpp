/*Paso de parámetro de tipo vector.

Parametros de la función:
    void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)
Llamada a la función
    nombreDefuncion(nombreArreglo, tamañoArreglo)
*/
//Cuadrados de los elementos del vector

#include<iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;
typedef char type_caracter;

void cuadrado(type_entero vec[], type_entero);
void mostrar(type_entero vec[], type_entero);

int main(){
  const int tam=5;
  int vec[tam] = {1,2,3,4,5};
  cuadrado(vec,tam);
  mostrar(vec,tam);

  return 0;
}

void cuadrado(type_entero vec[], type_entero tam){
  for(size_t i=0; i<tam; i++){
    vec[i] *= vec[i];
  }
}
void mostrar(type_entero vec[], type_entero tam){
  for(size_t i=0; i<tam; i++){
    cout<<vec[i]<<" ";
  }
}