//Metodo Burbuja

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

  type_entero numero[] = {4,2,1,3,5};
  type_entero aux;
  //Algoritmo del metodo burbuja
  for(size_t i=0; i<5; i++){
    for(size_t j=0; j<5; j++){
      if(numero[j]>numero[j+1]){
        aux=numero[j];
        numero[j] = numero[j+1];
        numero[j+1] = aux;
      }
    }
  }
  cout<<"Orden Ascendente: "<<endl;
  for(size_t i=0; i<5; i++){
    cout<<numero[i]<<"\t";
  }
  cout<<"\nOrden Desendente: "<<endl;
  for(size_t i=5; i>0; i--){
    cout<<numero[i-1]<<"\t";
  }


  return 0;
}
