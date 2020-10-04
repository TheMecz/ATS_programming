/*Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números aleatorios,
 * copiar el contenido a otra matriz y por último mostrarla en pantalla.
 * */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int nfilas=0, ncol=0;
    cout<<"Digite el número de filas: "; cin>>nfilas;
    cout<<"Digite el número de columnas: "; cin>>ncol;
    int matriz[100][100];
    int matriz_2[100][100];

    srand(time(nullptr));

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            matriz[i][j] = 1 + rand()%101;
            matriz_2[i][j] = matriz[i][j];
        }
    }
    cout<<"La primera matriz es: "<<endl;
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<matriz[i][j]<<'\t';
        }
        cout<<"\n";
    }
    cout<<"La segunda matriz es: "<<endl;
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<matriz_2[i][j]<<'\t';
        }
        cout<<"\n";
    }

    return 0;
}