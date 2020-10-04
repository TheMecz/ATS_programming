/*Ejercicio 2: Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes.*/

#include<iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

typedef int type_entero;
typedef float type_decimal;
typedef double type_doble;


 type_doble a;
void al_cuadrado(type_decimal a);

void pedirDatos();
int main(){
 

  pedirDatos();
  al_cuadrado(a);

  return 0;
}

void pedirDatos(){
    cout<<"Digite un número: "; cin>>a;
}

void al_cuadrado(type_decimal a){
  a = a*a;

  cout<<"El número es: "<<a;
}
