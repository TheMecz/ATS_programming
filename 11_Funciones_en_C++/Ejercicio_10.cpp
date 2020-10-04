/*Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día.  La función es calcular el año, mes y día actual para el número dado de días que se le trasmitan. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

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

void calc_años(type_entero totalDias, type_entero &, type_entero &, type_entero &);

int main(){
  
  type_entero totalDias, años=0, meses=0, dias=0;
  calc_años(totalDias,años,meses,dias);

  return 0;
}

void calc_años(type_entero totalDias, type_entero &año, type_entero &mes, type_entero &dia){
  cout<<"Digite el número de días trascuridos: "; cin>>totalDias;
  año = totalDias/365;
  totalDias %=365; 
  mes = totalDias/30;
  totalDias %=30;
  dia = totalDias;
  cout<<"La fecha es: "<<1+dia<<"/"<<1+mes<<"/"<<2000+año;
}