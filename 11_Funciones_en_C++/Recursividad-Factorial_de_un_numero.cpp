/*Recursividad 

Factorial de un número  3! = 3*2*1 

    Factorial(n) = 1                , si n=0
                   n*Factorial(n-1) , si n>0
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

struct fecha{
  type_entero dia;
  type_entero mes;
  type_entero año;
}fecha1,fecha2;

type_entero factorial(type_entero n){
  if(n==0)
    n=1;
  else
    n = n*factorial(n-1);
  return n; 
}

type_entero main(){

  type_entero n;
  cin>>n;
  cout<<factorial(n);

  return 0;
}

