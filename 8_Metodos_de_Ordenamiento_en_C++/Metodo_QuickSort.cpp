//Ordenamiento Quick Sort

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

void intercambio(type_decimal &x, type_decimal &y){
  type_decimal aux;
  aux = x;
  x = y;
  y = aux;
}

void quickSort(type_decimal a[], type_entero primero, type_entero ultimo){
  type_entero i,j,central;
  type_decimal pivote;
  
  central =(primero+ultimo)/2;
  pivote = a[central];
  i = primero;
  j = ultimo;

  do{ 
    while(a[i] < pivote) i++;
    while(a[j] > pivote) j--;

    if(i<=j){
      intercambio(a[i],a[j]);
      i++;
      j--;
    }
  }while(i<=j);

  if(primero < j){
    quickSort(a,primero,j);//Ordenamos la sublista izquierda
  }
  if(i<ultimo){
    quickSort(a,i,ultimo);//Ordenamos la sublista derecha
  } 
}

void mostrar_arreglo(type_decimal arreglo[], type_entero n){
cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;  
  for(size_t i=0; i<n; i++){
    cout<<arreglo[i]<<"\t";
  }
cout<<"\nArreglo Ordenado - Forma Descendente"<<endl;
  for(size_t j=n; j>0; j--){
    cout<<arreglo[j-1]<<"\t";
  }
}

type_entero main(){

  type_decimal arreglo[] = {4,9,3,1,2,5,7,6,8,10,11,12,14,17,18,13,15,16,19,20};

  quickSort(arreglo,0,19);
  mostrar_arreglo(arreglo,20);


  return 0;
}