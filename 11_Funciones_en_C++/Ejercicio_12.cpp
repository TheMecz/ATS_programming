/*Ejercicio 12: Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el elemento que le precede en el vector.*/

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
void orden_creciente(type_entero vec[], type_entero n, type_caracter ordenado);

type_entero main(){
 
  type_entero n=0;
  type_caracter resultado;
  tomarDatos(n);
  type_entero vec[n];
  rellenar_arreglo(vec, n);
  mostrar_arreglo(vec, n);
  orden_creciente(vec, n, resultado);

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
}
void orden_creciente(type_entero vec[], type_entero n, type_caracter ordenado){
  for(size_t i=0; i<n; i++){
    if(vec[i]<vec[i+1])
      ordenado = 'T';
    else{
      ordenado = 'F';
      break;
    }
  }
  if(ordenado == 'T'){
    cout<<"\nEl arreglo está ordenado crecientemente";
  }
  else{
    cout<<"\nEl arreglo no está ordenado crecientemente";
  }
}