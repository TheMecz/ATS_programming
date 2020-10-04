//Busqueda Binaria

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

  type_entero numero[] = {1,2,3,4,5};
  type_entero inf,sup,mitad,dato;
  char band = 'F';
  cin>>dato;

  //Algoritmo de la Busqueda Binaria.
  inf=0;
  sup=5;

  while(inf <= sup){
    mitad = (inf + sup)/2;

    if(numero[mitad] == dato){
      band = 'T';
      break;
    }
    if(numero[mitad] > dato){
      sup = mitad;
      mitad = (inf + sup)/2;
    }
    if(numero[mitad] < dato){
      inf = mitad;
      mitad = (inf + sup)/2;
    }
  }

if(band == 'T'){
  cout<<"El número a sido encontrado en la posicion: "<<mitad<<endl;
}

else{
  cout<<"El número no a sido encontrado";
}



  return 0;
}