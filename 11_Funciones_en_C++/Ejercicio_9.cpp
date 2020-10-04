/*Ejercicio 9: Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia enteros nombrados horas, min y seg. La función es convertir el número de segundos transmitido en un número equivalente de horas, minutos y segundos.*/

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

void tiempo(type_entero totalSeg, type_entero&, type_entero&, type_entero&);

int main(){
  
  type_entero totalSeg, horas=0, min=0, seg=0;
  cout<<"Digite el número total de segundos: "; cin>>totalSeg;
 
  tiempo(totalSeg, horas, min, seg);
 
  return 0;
}

void tiempo(type_entero totalSeg, type_entero &hora, type_entero &min, type_entero &seg){
  hora = totalSeg/3600;
  totalSeg %= 3600;
  min = totalSeg/60;
  totalSeg %= 60;
  seg = totalSeg;
  cout<<"La tiempo es: "<<hora<<"h\t"<<min<<"m\t"<<seg<<"s\t";
}
