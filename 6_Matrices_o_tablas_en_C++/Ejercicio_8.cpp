/*Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
 *
 * */

#include <iostream>

using namespace std;

int main(){

    int matriz_1[3][3];
    int matriz_2[3][3];
    int matriz_prod[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>matriz_1[i][j];
        }
    }
    cout<<"Matriz 1: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>matriz_2[i][j];
        }
    }
    cout<<"Matriz 2: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz_prod[i][j]=0;
            for(int k=0; k<3; k++){
                matriz_prod[i][j] += matriz_1[i][k]*matriz_2[k][j];
            }
        }
    }
    cout<<"El producto de la matriz es: "<<endl;
    for(int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<matriz_prod[i][j]<<'\t';
        }
        cout<<"\n";
    }
    return 0;
}