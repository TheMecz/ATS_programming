//Ordenamiento por Selección

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



type_entero main(){

  type_entero numero[] = {4,2,3,1,5};
  type_entero aux, min;

  //Algoritmo del Ordenamiento por Seleccion.
  for(size_t i=0; i<5; i++){
    min =i;
    for(size_t j=i+1; j<5; j++){
      if(numero[j] < numero[min]){
        min = j;
      }
    }
    aux = numero[i];
    numero[i]=numero[min];
    numero[min] = aux;
  }

  cout<<"Orden Ascendente: \n";
  for(size_t i=0; i<5; i++){
    cout<<numero[i]<<"\t";
  }
  cout<<"\nOrden Descendente: \n";
  for(size_t i=5; i>0; i--){
    cout<<numero[i-1]<<"\t";
  }
  return 0;
}
