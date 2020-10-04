//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz.

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

void mostrarMatriz(type_entero m[][3], type_entero, type_entero);
void calcularCuadrado(type_entero m[][3], type_entero, type_entero);

type_entero main(){
 
  const type_entero nfilas = 2;
  const type_entero ncolumnas = 3;
  type_entero m[nfilas][ncolumnas] = {{1,2,3},{4,5,6}};
  mostrarMatriz(m,nfilas,ncolumnas);
  calcularCuadrado(m,nfilas,ncolumnas);
  mostrarMatriz(m,nfilas,ncolumnas);

  return 0;
}

void mostrarMatriz(type_entero m[][3], type_entero nfilas, type_entero ncol){
  cout<<"Mostrando matriz original: \n";
  for(size_t i=0; i<nfilas; i++){
    for(size_t j=0; j<ncol; j++){
      cout<<m[i][j]<<"\t";
    }
    cout<<"\n";
  }
}
void calcularCuadrado(type_entero m[][3], type_entero nfilas, type_entero ncol){
  for(size_t i=0; i<nfilas; i++){
    for(size_t j=0; j<ncol; j++){
      m[i][j] *= m[i][j];
    }
  }
}