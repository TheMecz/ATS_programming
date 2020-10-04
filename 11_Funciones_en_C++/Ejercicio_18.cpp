/*Ejercicio 18: Escriba una funcion en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le trasmitan. Por ejemplo, si se trasmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunta fecha.*/

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

void pedirDatos(){
  cout<<"Digite la primera fecha: "<<endl;
  cout<<"Digite el día: ";cin>>fecha1.dia;
  cout<<"Digite el mes: ";cin>>fecha1.mes;
  cout<<"Digite el año: ";cin>>fecha1.año;

  cout<<"\nDigite la segunda fecha: "<<endl;
  cout<<"Digite el día: ";cin>>fecha2.dia;
  cout<<"Digite el mes: ";cin>>fecha2.mes;
  cout<<"Digite el año: ";cin>>fecha2.año;
}

void mayor(fecha f1, fecha f2){
  if((f1.dia >= f2.dia)&&(f1.mes >= f2.mes)&&(f1.año >= f2.año)){
    cout<<"La fecha mayor es: "<<f1.dia<<"/"<<f1.mes<<"/"<<f1.año;
  }
  else if((f1.dia <= f2.dia)&&(f1.mes >= f2.mes)&&(f1.año >= f2.año)){
    cout<<"La fecha mayor es: "<<f1.dia<<"/"<<f1.mes<<"/"<<f1.año;
  }
  else if((f1.dia <= f2.dia)&&(f1.mes <= f2.mes)&&(f1.año >= f2.año)){
    cout<<"La fecha mayor es: "<<f1.dia<<"/"<<f1.mes<<"/"<<f1.año;
  }
  else if((f1.dia <= f2.dia)&&(f1.mes <= f2.mes)&&(f1.año <= f2.año)){
    cout<<"La fecha mayor es: "<<f2.dia<<"/"<<f2.mes<<"/"<<f2.año;
  }
  else if((f1.dia >= f2.dia)&&(f1.mes <= f2.mes)&&(f1.año <= f2.año)){
    cout<<"La fecha mayor es: "<<f2.dia<<"/"<<f2.mes<<"/"<<f2.año;
  }
  else if((f1.dia >= f2.dia)&&(f1.mes >= f2.mes)&&(f1.año <= f2.año)){
    cout<<"La fecha mayor es: "<<f2.dia<<"/"<<f2.mes<<"/"<<f2.año;
  }
}

type_entero main(){

  pedirDatos();
  mayor(fecha1, fecha2);

  return 0;
}

