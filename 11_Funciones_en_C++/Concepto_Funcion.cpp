/*-----------------------------------¿Qué es una función?---------------------------------------
 * Una función realiza una tarea concreta y puede ser diseñada, implementada y depurada de manera independiente al
 * resto de código.
 *
 * La sintaxis básica para la definición de una función en C++ es la siguiente:
 *
 * tipo nombre(tipo var1, tipo var2, ... , tipo varn){
 *      conjunto de instrucciones;
 * }
 *
 * int numMax(int x, int y)
 * double intercambio(doble x, donde y)
 * void desplegar(float x, float y)
 *
 * Como una cuestión de buena forma de programación, el siguiente ordenamiento de instruccipnes deberá formar la
 * estructura básica alrededor de la cual se construyan todos sus programas en C++.
 *
 * directivas del preprocesador
 *
 * prototipos de función
 *
 * int main(){
 *      conjunto de instrucciones;
 *      return valor;
 * }
 *
 * definiciones de función
 *
 * */

//Ejemplo encontrar el mayor de 2 números

#include <iostream>

int encontrarMax(int x, int y);

using namespace std;


int main(){

    int x, y;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    encontrarMax(x,y);
    cout<<"El mayor de los números es: "<< encontrarMax(x,y);

    return 0;
}

int encontrarMax(int x, int y){
   int maximo;
   if(x>y)
       maximo = x;
   else
       maximo = y;
    return maximo;
}