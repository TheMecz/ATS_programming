/*Ejercicio 3: Hacer una matriz de tipo entera de 2*2, llenarla de números y luego copiar todo su
 * contenido hacia otra matriz */

#include <iostream>

using namespace std;

int main(){

    int matriz[2][2];
    int matriz_2[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
            matriz_2[i][j] = matriz[i][j];
        }
    }
    cout<<"La matriz 1 es: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"La matriz 2 es: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matriz_2[i][j]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}