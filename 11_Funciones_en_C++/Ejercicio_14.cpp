/*Ejercicio 14: Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido.*/

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

void tomarDatos(type_entero &n);
void rellenar_arreglo(type_entero vec[], type_entero n);
void mostrar_arreglo(type_entero vec[], type_entero n);
void tomar_impares(type_entero vec[], type_entero n);

type_entero main(){
 
  type_entero n=0;
  tomarDatos(n);
  type_entero vec[n];
  rellenar_arreglo(vec, n);
  mostrar_arreglo(vec, n);
  tomar_impares(vec, n);

  return 0;
}
void tomarDatos(type_entero &n){
  cout<<"Digite el tamaño del arreglo: ";cin>>n;
}
void rellenar_arreglo(type_entero vec[], type_entero n){
  for(size_t i=0; i<n; i++){
    cin>>vec[i];
  }
}
void mostrar_arreglo(type_entero vec[], type_entero n){
  for(size_t i=0; i<n; i++){
    cout<<vec[i]<<",";
  }
  cout<<"\n";
}
void tomar_impares(type_entero vec[], type_entero n){
  type_entero vec1[n];
  for(size_t i=0; i<n; i++){
    if(vec[i]%2 != 0){
      vec1[i]=vec[i];
    }
    else{
      vec1[i]=0;
    }
  }
  mostrar_arreglo(vec1, n);
}