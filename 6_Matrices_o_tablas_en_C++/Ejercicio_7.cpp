/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es
 * cuadrada y si es igual a su matriz transpuesta.
 * */

#include <iostream>

using namespace std;

int main(){

    int nfilas, ncol;
    cout<<"Digite el número de filas: "; cin>>nfilas;
    cout<<"Digite el número de columnas: "; cin>>ncol;
    int matriz[100][100];
    int matriz_trans[100][100];
    int cont=0;

    if( ncol==nfilas) {
        for(int i = 0; i<nfilas; i++){
            for(int j = 0; j<ncol; j++){
                cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
                cin>>matriz[i][j];
            }
        }
        for(int i = 0; i<nfilas; i++){
            for(int j = 0; j<ncol; j++){
                matriz_trans [i][j] = matriz[j][i];
            }
        }

        for (int i = 0; i < nfilas; i++) {
            for (int j = 0; j < ncol; j++) {
                if (matriz[i][j] == matriz_trans[i][j])
                    cont++;
            }
        }
        if (cont == (ncol*nfilas)) {
            cout << "La matriz es simétrica." << endl;
        } else {
            cout << "La matriz no es simétrica." << endl;
        }
    }
    else{
        cout<< "La matriz no es simétrica." <<endl;
    }
    return 0;
}