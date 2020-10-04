//Invertir una cadena - Función strrev()

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char cad[] = "Max Albert Ponce Sanchez";
    strrev(cad);
    cout<<cad<<endl;

    //Palabra polindroma
    char cad1[] = "reconocer";
    strrev(cad1);
    cout<<cad1<<endl;


    return 0;
}