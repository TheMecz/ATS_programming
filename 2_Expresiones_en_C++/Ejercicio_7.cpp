/*Ejercicio 7. La calificación final de un estudiante es el promedio de tres notas:
 * - La nota de práctica que cuenta un 30% del total.
 * - La nota de teórica que cuenta un 60%.
 * - La nota de participación que cuenta el 10% restante.
 *
 * Escriba un programa que lea las tres notas del alumno y escriba su nota fianl.
 * */

#include <iostream>

using namespace std;

int main(){

    float n_prac=0, n_teo=0, n_parti=0, n_final=0;
    cout<<"Digite su nota de practica: "; cin>>n_prac;
    cout<<"Digite su nota de teoria: "; cin>>n_teo;
    cout<<"Digite su nota de participacion: "; cin>>n_parti;
    n_prac *= 0.3;
    n_teo *= 0.6;
    n_parti *= 0.2;
    n_final = n_prac + n_parti + n_teo;
    cout<<"\nLa nota final es: "<< n_final;


    return 0;
}