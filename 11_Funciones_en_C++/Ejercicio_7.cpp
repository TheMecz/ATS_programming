/*Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.*/

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


template<class tipo>
void valores(tipo &a, tipo &b);

int main(){
  type_entero a=1,b=2;
  
  valores(a,b);

  return 0;
}

template<class tipo>
void valores(tipo &a, tipo &b){
  cout<<"El valor del primer elemento es: "<<a<<endl;
  cout<<"El valor del segundo elemento es: "<<b<<endl;
  cin>>a;
  cin>>b;
  cout<<"El nuevo valor del primer elemento es: "<<a<<endl;
  cout<<"El nuevo valor del segundo elemento es: "<<b<<endl;
}