/*Ejercicio 8: Pedir una cadena de caracteres al usuario, e indicar cuantas veces aparece la vocal a, e, i, o, u;
 * en la cadena de caracteres.
 * Nota: Usar punteros.
 * */

#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
void contVocal(char *);

char cadena[100];

int main(){

    pedirDatos();
    contVocal(cadena); //&cadena[0]

    return 0;
}

void pedirDatos(){
    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena,100,'\n');
    strlwr(cadena);
}
void contVocal(char *cadena) {
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;
    while (*cadena) {
        switch (*cadena) {
            case 'a':
                cont_a++;
                break;
            case 'e':
                cont_e++;
                break;
            case 'i':
                cont_i++;
                break;
            case 'o':
                cont_o++;
                break;
            case 'u':
                cont_u++;
                break;
        }
        cadena++;
    }
    cout<<"El número de vocales a es: "<<cont_a<<'\n';
    cout<<"El número de vocales e es: "<<cont_e<<'\n';
    cout<<"El número de vocales i es: "<<cont_i<<'\n';
    cout<<"El número de vocales o es: "<<cont_o<<'\n';
    cout<<"El número de vocales u es: "<<cont_u<<'\n';
}