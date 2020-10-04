/*Ejercicio 15: Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los elementos almacenados en dicha fila.*/

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

void rellenar_Matriz(type_decimal **matriz, type_entero filas, type_entero col){
  for(size_t i=0; i<filas; i++){
    for(size_t j=0; j<col; j++){
      cin>>matriz[i][j];
    }
  }
}
void mostrar_Matriz(type_decimal **matriz, type_entero filas, type_entero col){

    cout<<"\n";
    for(size_t i=0; i<filas; i++){
        for(size_t j=0; j<col; j++){
        cout<<matriz[i][j]<<"\t";
        }
    cout<<"\n";
  }
}
void menor(type_decimal **matriz, type_entero filas, type_entero col){
  type_decimal menor=matriz[0][0];
  for(size_t i=0; i<filas; i++){
        for(size_t j=0; j<col; j++){
          if(menor>matriz[i][j])
            menor=matriz[i][j];
        }
  }
  cout<<"\nEl menor valor de la matriz es: "<<menor;
}

type_entero main(){

  type_entero fila, col;
  cout<<"Digite el número de filas: ";cin>>fila;
  cout<<"Digite el número de columnas: ";cin>>col;
  type_decimal **matriz;
    matriz = new type_decimal*[fila];
    for(size_t i=0; i<fila; i++) {
        matriz[i] = new type_decimal[col];
    }
  rellenar_Matriz( matriz, fila, col);
  mostrar_Matriz( matriz, fila, col);
  menor( matriz, fila, col);


  return 0;
}