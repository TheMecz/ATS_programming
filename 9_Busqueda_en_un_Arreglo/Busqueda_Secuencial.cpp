//Busqueda Secuencial

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

  type_entero a[] = {3,4,2,1,5};
  type_entero i=0,dato;
  char val = 'F';
  cin>>dato;
  //busqueda Secuencial
  while((val=='F')&&(i<5)){
    if(a[i]==dato){
      val = 'T';
    }
    i++;
  }
  if(val == 'F'){
    cout<<"El elemento a buscar no a sido encontrado.";
  }
  else if(val == 'T'){
    cout<<"EL elemento se encuentra en la posición: "<<i-1;
  }
  return 0;
}