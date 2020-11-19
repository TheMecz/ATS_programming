/*Matrices Dinámicas
 *
 * Ejemplo: Rellenar una matriz de NxM y mostrar su contenido
 *
 * *puntero_matriz -> *puntero_fila -> [int][int][int]
 *                    *puntero_fila -> [int][int][int]
 *                    *puntero_fila -> [int][int][int]
 * */


#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarDatos(int **, int, int);

int **ptr_matriz,nfilas, ncol;


int main() {

    pedirDatos();
    mostrarDatos(ptr_matriz, nfilas,ncol);
    for(int i=0; i<nfilas; i++){
        delete [] ptr_matriz[i];
    }
    delete [] ptr_matriz;

    return 0;
}

void pedirDatos() {
    cout << "Digite el número de Filas: ";
    cin >> nfilas;
    cout << "Digite el número de Columnas: ";
    cin >> ncol;
    ptr_matriz = new int *[nfilas];
    for (int i = 0; i < nfilas; i++) {
        ptr_matriz[i] = new int[ncol];
    }
    cout << "\nDigitando elementos de la matriz: \n";
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << "Digite un número: ";
            cin >> *(*(ptr_matriz + i) + j); //ptr_matriz[i][j]
        }
    }
}


void mostrarDatos(int **ptr_matriz, int nfilas, int ncol){
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<< *(*(ptr_matriz+i)+j)<<"\t";
        }
        cout<<"\n";
    }
}