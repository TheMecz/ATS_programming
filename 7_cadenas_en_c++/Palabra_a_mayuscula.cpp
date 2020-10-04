//Pasar una palabra a Mayúscula - Función strupr()

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "max ponce sanchez";
    strupr(palabra);

    cout<<palabra<<endl;

    return 0;
}