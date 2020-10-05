/*Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de
 * referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La función tiene
 * que considerar el valor entero transmitido como una cantidad en dólares y convertir el valor en el número menor de
 * billetes equivalentes.*/

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

void cambio(type_entero num1, type_entero&, type_entero&, type_entero&, type_entero&, type_entero&, type_entero&);

int main(){
  type_entero valor, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
  
  cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

  return 0;
}

void cambio(type_entero num1, type_entero &cien, type_entero &cincuenta, type_entero &veinte, type_entero &diez, type_entero &cinco, type_entero &uno){
  cout<<"Digite la cantidad de dolares: ";
  cin>>num1;

  while(num1>0){
    if(num1>99){
      cien = num1/100;
      num1 = num1%100;
    }
    else if(num1>49){
      cincuenta = num1/50;
      num1 = num1%50;
    }
    else if(num1>19){
      veinte = num1/20;
      num1 = num1%20;
    }
    else if(num1>9){
      diez = num1/10;
      num1 = num1%10;
    }
    else if(num1>4){
      cinco = num1/5;
      num1 = num1%5;
    }
    else if(num1>0){
      uno = num1/1;
      num1 = num1%1;
    }
  }
  

  cout<<"Billetes de 100: "<<cien<<endl;
  cout<<"Billetes de 50: "<<cincuenta<<endl;
  cout<<"Billetes de 20: "<<veinte<<endl;
  cout<<"Billetes de 5: "<<cinco<<endl;
  cout<<"Billetes de 1: "<<uno<<endl;
}
