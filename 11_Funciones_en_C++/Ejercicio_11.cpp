/*Ejercicio 11: Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos.*/

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

void pedirDatos(type_entero &n);
void rellenar_vec(type_entero vec[], type_entero size);
void motrar_arreglo(type_entero vec[], type_entero n);
void suma_elementos(type_entero vec[], type_entero n);



type_entero main(){
  type_entero n=0;
  pedirDatos(n);
  type_entero vec[n];

  
  rellenar_vec(vec, n);
  motrar_arreglo(vec, n);
  suma_elementos(vec, n);

  return 0;
}

void pedirDatos(type_entero &n){

  cout<<"Digite el número de elementos del arreglo: ";cin>>n;
}
void rellenar_vec(type_entero vec[], type_entero size){
  srand(time(0));
  type_entero r;
  for(size_t i=0; i<size; i++){
    r = rand()%10;
    vec[i]= r;
  }
}
void motrar_arreglo(type_entero vec[], type_entero n){
  for(size_t i=0; i<n; i++){
    cout<<vec[i]<<", ";
  }
}
void suma_elementos(type_entero vec[], type_entero n){
  type_entero suma=0;
  for(size_t i=0; i<n; i++){
    suma += vec[i];
  }
  cout<<"\nLa suma es: "<<suma<<endl;
  }
