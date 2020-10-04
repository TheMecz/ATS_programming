/*Ejercicio 20: Realice una funcion recursiva para la serie Fibonacci.
Nota: La serie Fibonacci está formada por la secuencia de numeros:

0,1,1,2,3,5,8,13,21,34,....*/

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

type_entero fibonacci(type_entero n){
  if(n<2){
    return n;
  }
  else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

type_entero n;

void pedirDatos(){
  
  do{
    cout<<"Digite la posicion de la serie fibonacci: ";cin>>n;
  }while(n<0);
}

void mostrar(type_entero n){
  for(size_t i=0; i<n; i++){
    cout<<fibonacci(i)<<", ";
  }
}

type_entero main(){

  pedirDatos();
  mostrar(n);

  return 0;
}

