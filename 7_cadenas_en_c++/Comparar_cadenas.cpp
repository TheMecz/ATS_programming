//Comparar cadenas - Función strcmp()

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra1[] = "hola";
    char palabra2[] = "Hola";
    char palabra3[] = "hola";
    char palabra4[] = "avion";
    char palabra5[] = "becerro";

    if(strcmp(palabra1,palabra2)==0){
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    else{
        cout<<"Las cadenas son diferentes"<<endl;
    }

    if(strcmp(palabra1, palabra3)==0) {
        cout << "Ambas cadenas son iguales" << endl;
    }
    else{
        cout<<"Las cadenas son diferentes"<< endl;
    }

    if(strcmp(palabra4, palabra5)<0) {
        cout << palabra5<<" esta despues alfabeticamente" << endl;
    }
    return 0;


}

