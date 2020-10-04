/*Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que se le trasmita a una potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá ser el segundo valor trasmitido a la función.*/

#include<iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;

type_decimal a,b;

void pedirDatos();
void funpot(type_entero a, type_entero b);

int main(){

  pedirDatos();
  funpot(a,b);

  return 0;
}

void pedirDatos(){
  cout<<"Digite un número: "; cin>>a;
  cout<<"Digite el valor a elevar: "; cin>>b;
}

void funpot(type_entero a, type_entero b){
  cout<<"El resultado es: "<<pow(a,b);
}