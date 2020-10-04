/*Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es
 * aquella en la que la columna i es la fila i de la matriz original.
 * */

#include <iostream>

using namespace std;

int main(){

    int matriz[3][3];
    int matriz_tras[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++){
            matriz_tras[j][i] = matriz[i][j];
        }
    }
    cout<<"Matriz original: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz[i][j]<<'\t';
        }
        cout<<'\n';
    }
    cout<<"Matriz transpuesta: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz_tras[i][j]<<'\t';
        }
        cout<<'\n';
    }

    return 0;
}