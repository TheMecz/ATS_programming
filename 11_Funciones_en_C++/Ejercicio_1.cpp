/*Ejercicio 1: Escriba una función llamada mult() que acepte dos números en punto flotante como parámetro, multiplique estos dos números y despliegue el resultado.*/

#include<iostream>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;

void pedirDatos();
void mult(type_doble a, type_doble b);

type_doble a,b;

int main(){
  
  pedirDatos();
  mult(a,b); 

 
  return 0;
}

void pedirDatos(){
  cout<<"Digite dos números: "; cin>>a>>b;
}

void mult(type_doble a, type_doble b){

  a = a*b;
  cout<<"El resultado es: "<<a;  

}