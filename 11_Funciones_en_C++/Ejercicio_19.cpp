/*Ejercicio 19: Realice una funcion recursiva que sume los primeros n enteros positivos. 
Nota: Para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrencia:

    suma(n) = 1             , si n=1
              n+suma(n-1)   , si n>1

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

type_entero suma(type_entero n){

  if(n==1)
    n=1;
  else
    n = n + suma(n-1);

  return n;
}
type_entero n;
void pedirDatos(){
  
  do{
    cout<<"Digite el numero de elementos: ";cin>>n;
  }while(n<=0);
}

type_entero main(){

  pedirDatos();
  cout<<"\nLa suma es: "<<suma(n);

  return 0;
}

