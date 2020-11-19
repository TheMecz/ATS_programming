/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función
 * buscar un número en particular.
 * Nota: Puedes utilizar cualquier método de búsqueda.*/

#include <iostream>

using namespace std;

void pedirDatos();
void buscarNum(int * , int);
int num,*ptr_vec;

int main(){

    pedirDatos();
    buscarNum(ptr_vec,num);
    delete[] ptr_vec;

    return 0;
}

void pedirDatos(){
    cout<<"Digite el número de elementos: "; cin>>num;
    ptr_vec = new int[num];
    for(int i=0; i<num; i++){
        cout<<"Digite un número "<<"["<<i<<"]: "; cin>> *(ptr_vec+i);
    }
}
void buscarNum(int *ptr_vec , int num){
    int dato, i=0;
    bool band = false;
    cout<<"Digite un número a buscar: "; cin>>dato;
    while ((i<num) && (band==false)){
        if(*(ptr_vec+i) == dato){
            band = true;
        }
        i++;
    }
    if(band == false){
        cout<<"El número "<<dato<<" no existe en el arreglo"<<endl;
    }
    else{
        cout<<"El número "<<dato<<" si existe en el arreglo, Posición: "<<i-1<<endl;
    }
}