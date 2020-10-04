//Ordenación Shell

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

void ordenacionShell(type_decimal a[], type_entero n){
  type_entero salto,i,j,k;
  salto = n/2;
  //Algoritmo de ordenación Shell
  while(salto>0){
    for(i=salto; i<n; i++){
      j = i - salto;
      while(j>=0){
        k = j + salto;
        if(a[j] <= a[k]){//Par de elementos estan ordenados.
          j = -1;
        }
        else{//Par de elementos estan desordenados.
          intercambio(a[j], a[k]);
          j -= salto;
        }
      }
    }
  salto /=2;
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

  type_decimal arreglo[] = {4,6,1,9,5,10,2,11,19,7};
  ordenacionShell(arreglo, 10);
  mostrar_arreglo(arreglo,10);
  

  return 0;
}