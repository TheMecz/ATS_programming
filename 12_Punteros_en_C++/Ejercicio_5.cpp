/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números en
 * orden ascendente y mostrarlos en pantalla.
 * Nota: Utilizar cualquier método de ordenamiento. */

#include <iostream>

using namespace std;

void pedirDatos();
void ordenarDatos(int *, int);
void imprimir(int *, int);
int *ptr_num, num;
int main() {

    pedirDatos();
    ordenarDatos(ptr_num, num);
    imprimir(ptr_num, num);
    delete[] ptr_num;

    return 0;
}

void pedirDatos(){
    cout<<"Digite el número de elementos: "; cin>>num;
    ptr_num = new int[num];
    for(int i=0; i< num; i++){
        cout<<"Digite un número: "; cin>>*(ptr_num+i); //elemento[i]
    }
}
void ordenarDatos(int *ptr_num,int num){
    int aux;
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1; j++){
            if(ptr_num[j] > ptr_num[j+1]){
                aux = ptr_num[j];
                ptr_num[j] = ptr_num[j+1];
                ptr_num[j+1] = aux;
            }
        }
    }
}
void imprimir(int *ptr_num, int num){
    for(int i=0; i<num; i++){
        cout<<*(ptr_num+i)<<endl;
    }
}