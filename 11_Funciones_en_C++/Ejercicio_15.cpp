/*Ejercicio 15: Desarollar una función que determine si una matriz es simétrica o no.
Una matriz es simétrica: A=A^t

- La matriz debe ser cuadrada.
- Aij = Aji

|2  5  9|    |2  5  9|
|5  8 -1| -> |5  8 -1|
|9 -1 10|    |9 -1 10|

*/


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
void simetria(type_decimal **matriz, type_entero filas, type_entero col){

  type_caracter valor = 'F';
    for(size_t i=0; i<filas; i++){
      for(size_t j=0; j<col; i++){
        if(matriz[i][j]==matriz[j][i])
          valor = 'T';
        else
          valor= 'F';
          break;
      }
    }
  if(valor == 'T')
    cout<<"\nLa matriz es simétrica."<<endl;
  else
    cout<<"\nLa matriz no es simétrica."<<endl;
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
  simetria( matriz, fila, col);


  return 0;
}