/*Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.
 * */

#include <iostream>

using namespace std;

void pedirDatos();
void sumar(int **,int **, int, int);
int **matriz_1;
int **matriz_2;
int nfilas=0, ncol=0;
void imprimir(int **, int, int);

int main(){

    pedirDatos();
    sumar(matriz_1, matriz_2, nfilas, nfilas);
    imprimir(matriz_1,nfilas,ncol);
    for(int i=0; i<nfilas;i++){
        delete [] matriz_1[i];
        delete [] matriz_2[i];
    }
    delete [] matriz_1;
    delete [] matriz_2;

    return 0;
}

void pedirDatos(){
    cout<<"Digite el número de filas: "; cin>>nfilas;
    cout<<"Digite el número de columnas: "; cin>>ncol;
    matriz_1 = new int *[nfilas];
    for(int i=0; i<nfilas; i++){
        matriz_1[i] = new int [ncol];
    }
    cout<<"\nDigite los elementos de la primera matriz: \n";
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_1+i)+j);
        }
    }

    matriz_2 = new int *[nfilas];
    for(int i=0; i<nfilas; i++){
        matriz_2[i] = new int [ncol];
    }
    cout<<"\nDigite los elementos de la segunda matriz: \n";
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_2+i)+j);
        }
    }
}

void sumar(int **matriz_1, int **matriz_2, int nfilas, int ncol){
    for(int i=0; i<nfilas;i++){
        for(int j=0; j<ncol; j++) {
            *(*(matriz_1 + i) + j) += *(*(matriz_2 + i) + j);
        }
    }
}

void imprimir(int **matriz_1, int nfilas, int ncol){
    for(int i=0; i<nfilas;i++){
        for(int j=0; j<ncol; j++) {
            cout<<*(*(matriz_1 + i) + j)<<'\t';
        }
        cout<<'\n';
    }
}