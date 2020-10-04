//Transformar una cadena a numeros - Fincion atoi() y atof()

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){

    char cad[] = "123";
    char cad_1[] = "123.456";
    int numeroI;
    float numeroF;
    numeroI = atoi(cad);
    numeroF = atof(cad_1);

    cout<<numeroI<<endl;
    cout<<numeroF<<endl;

    return 0;
}

