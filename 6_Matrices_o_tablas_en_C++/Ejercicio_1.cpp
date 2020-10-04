/*Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas,
 * posteriormente mostrar la matriz en pantalla.
 * */

#include <iostream>

using namespace std;

int main() {

    int n, m;
    cout<<"Digite el número de filas: "; cin>>n;
    cout<<"Digite el número de columnas: "; cin>>m;
    int matriz[100][100];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matriz[i][j]<<'\t';
        }
        cout<<"\n";
    }

    return 0;
}
