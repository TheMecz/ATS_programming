/*Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el
 * número de:
 * a) Alumnos que aprobaron todos los exámenes.
 * b) Alumnos que aprobaron al menos un exámen.
 * c) Alumnos que aprobaron únicamente el último examen.
 * */

#include <iostream>
using namespace std;

int main() {

    int alumnos = 5, a=0, b=0, c=0;
    float nota1, nota2, nota3;

    for(int i = 1; i <= alumnos; i++) {
        cout << "Digite las notas del alumno " << i << ":";
        cout << "\nExámen 1: ";
        cin >> nota1;
        cout << "Exámen 2: ";
        cin >> nota2;
        cout << "Exámen 3: ";
        cin >> nota3;
        if (nota1 >= 10.5 && nota2 >= 10.5 && nota3 >= 10.5)
            a++;
        if (nota1 >= 10.5 || nota2 >= 10.5 || nota3 >= 10.5)
            b++;
        if(nota1<10.5 && nota2<10.5 && nota3>=10.5 )
            c++;
    }
    cout<<"El número de alumnos que aprobaron los 3 exámenes es: "<<a<<endl;
    cout<<"El número de alumnos que aprobaron por lo menos 1 exámenes es: "<<b<<endl;
    cout<<"El número de alumnos que aprobaron sólo el último exámen es: "<<c<<endl;

    return 0;
}

