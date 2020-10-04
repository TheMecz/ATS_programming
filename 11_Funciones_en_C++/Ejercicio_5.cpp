/*Ejercicio 5: Escriba una plantilla de función llamada despliegue() que despliegue el valor del argumento único que se le trasmite cuando es invocada la función.*/

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

type_caracter argumento[100];
type_entero num1;
type_decimal num2;
type_doble num3;
void pideDatos();
template <class tipo>
void despliegue(tipo argumento);

int main(){

  pideDatos();
  despliegue(argumento);
  despliegue(num1);
  despliegue(num2);
  despliegue(num3);
  return 0;
}

void pideDatos(){
  cout<<"Digite un argumento: "; cin.get(argumento,100,'\n');
  cout<<"Digite un número entero: "; cin>>num1;
  cout<<"Digite un número flotante: "; cin>>num2;
  cout<<"Digite un número double: "; cin>>num3;
}

template <class tipo>
void despliegue(tipo argumento){
  cout<<"Su argumento es: "<< argumento<<endl;
}