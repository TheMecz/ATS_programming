/*Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal
 * principal de la matriz.
 * */

#include <iostream>

using namespace std;

int main(){

    int matriz[3][3];
    for(int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite un número [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for(int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i==j)
                cout<<matriz[i][j]<<'\t';
            else
                cout<<" "<<'\t';
        }
        cout<<'\n';
    }

    return 0;
}