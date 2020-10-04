/*Ejercicio 6: Escriba una plantilla de funcion llamada maximo() que devulva el valor maximo de tres argumentos que se trasmitan a la funcion cuando sea llamada. Suponga que los tres argumentos seran del mismo tipo de datos.*/

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

type_entero num1,num2,num3;

void pedirDatos();
template <class tipo>
tipo maximo(tipo a, tipo b, tipo c);

int main(){

  pedirDatos();
  cout<<"El maximos valor es: "<<maximo(num1,num2,num3)<<endl;

  return 0;
}

void pedirDatos(){
  cout<<"Digite tres numeros: "; cin>>num1>>num2>>num3;
}
template <class tipo>
tipo maximo(tipo a, tipo b, tipo c){
  tipo maximo;
    if(a>b && a>c){
      maximo =a;
    }
    else{
      if(b>c && b>a){
        maximo=b;
      }
      else{
        maximo = c;
      }
    }   
  
  return maximo;
}