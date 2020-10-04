/*Ejercicio 17: Suma de números complejos

z1 = 5-3i   ,   z2 = -4+2i

z1 + z2  =  (5 - 3i) + (-4 + 2i).
         =  5 - 3i -4 +2i
         =  1 - i

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

struct Complejo{
  type_decimal real, imaginaria; 
}z1,z2;

void pedirDatos(){
  cout<<"Digite los datos para el primer numero complejo: "<<endl;
  cout<<"Parte Real: "; cin>>z1.real;
  cout<<"Parte Imaginaria: ";cin>>z1.imaginaria;

  cout<<"\nDigite los datos para el segundo numero complejo: "<<endl;
  cout<<"Parte Real: "; cin>>z2.real;
  cout<<"Parte Imaginaria: ";cin>>z2.imaginaria;
}

Complejo suma(Complejo z1, Complejo z2){
  z1.real += z2.real;
  z1.imaginaria += z2.imaginaria;

  return z1;
}

void muestra(Complejo x){
  cout<<"Resultado de la suma es: "<<x.real<<" + "<<x.imaginaria<<"i "<<endl;
}

type_entero main(){

  pedirDatos();
  Complejo x = suma(z1, z2);
  muestra(x);

  return 0;
}

