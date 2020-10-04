//Paso de parametros de tipo estructura

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

struct Persona{
  type_caracter nombre[30];
  type_entero edad;

}p1;

void pedirDatos();
void mostrarDatos(Persona);

type_entero main(){

  pedirDatos();
  mostrarDatos(p1);
 
  return 0;
}

void pedirDatos(){
  cout<<"Digite su nombre: ";
  cin.getline(p1.nombre,30,'\n');
  cout<<"Digite su edad: ";
  cin>>p1.edad;
}
void mostrarDatos(Persona p){
  cout<<"\n\nNombre: "<<p.nombre<<endl;
  cout<<"Edad: "<<p.edad<<endl;
}