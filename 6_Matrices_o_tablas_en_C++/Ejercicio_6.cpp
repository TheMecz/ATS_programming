/*Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
 * */

#include <iostream>

using namespace std;

int main(){

    int matriz_1[3][3];
    int matriz_2[3][3];
    int matriz_suma[3][3];

    cout<<"Crear la matriz 1: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>matriz_1[i][j];
        }
    }
    cout<<"Creando la matriz 2: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>matriz_2[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz_suma[i][j] = matriz_1[i][j] + matriz_2[i][j];
        }
    }

    cout<<"Matriz 1: "<<endl;
    for(auto & i : matriz_1){
        for(int j : i){
            cout<<j<<'\t';
        }
        cout<<'\n';
    }
    cout<<"Matriz 2: "<<endl;
    for(auto & i : matriz_2){
        for(int j : i){
            cout<<j<<'\t';
        }
        cout<<'\n';
    }
    cout<<"Suma de las 2 matrices: "<<endl;
    for(auto & i : matriz_suma){
        for(int j : i){
            cout<<j<<'\t';
        }
        cout<<'\n';
    }

    return 0;
}