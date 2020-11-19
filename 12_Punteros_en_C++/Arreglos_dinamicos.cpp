/*Asignación dinámica de arreglos
 *
 * new: Reserva el número de bytes solicitado por la declaración.
 * delete: libera un bloque de bytes reservado con anterioridad.
 *
 * Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico.
 * */


#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main() {

    pedirNotas();
    mostrarNotas();
    delete[] calif; //Liberando el espacio en bytes utilizados anteriormente
    return 0;
}

void pedirNotas(){
    cout<<"Digite el número de calificaciones: ";
    cin>>numCalif;
    calif = new int[numCalif]; //Crear el arreglo
    for(int i=0; i<numCalif; i++){
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\nMostrando notas del Usuario:\n";
    for(int i=0; i<numCalif; i++){
        cout<<calif[i]<<endl;
    }
}