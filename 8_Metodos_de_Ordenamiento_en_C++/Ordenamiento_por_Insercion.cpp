//Orden por Insercion

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
  type_entero pos, aux;
//Algoritmo del ordenamiento por Insercion
  for(size_t i=0; i<5; i++){
    pos = i;
    aux = numero[i];
    while((pos>0)&&(numero[pos-1]>aux)){
      numero[pos] = numero[pos-1];
      pos--;
    }
    numero[pos] = aux;
  }
  cout<<"Orden Asendente: \n";
  for(size_t i=0; i<5; i++){
    cout<<numero[i]<<"\t";
  }
  cout<<"\nOrden Desendente: \n";
  for(size_t i=5; i>0; i--){
    cout<<numero[i-1]<<"\t";
  }


  return 0;
}
