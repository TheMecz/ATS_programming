//Pasar una palabra a minusculas - Función strlwr()

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "PROGRAMACION ATS";
    strlwr(palabra);

    cout<<palabra<<endl;

    return 0;
}