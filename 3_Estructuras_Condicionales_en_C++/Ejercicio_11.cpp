/*Ejercicio 11: Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.*/

#include <iostream>

using namespace std;

int main(){

    int cuenta=1000, accion=0, retiro=0, deposito=0;

    cout<<":::BIENVENIDO:::"<<endl;
    cout<<"¿Que accion quiere realizar?"<<endl;
    cout<<"Opcion 1: Retirar."<<endl;
    cout<<"Opcion 2: Deposito."<<endl;
    cout<<"Opcion 3: Ver Saldo."<<endl;
    cout<<"Opcion 4: Salir."<<endl;
    cout<<"Digite la accion a realizar: "; cin>>accion;

    switch(accion){
        case 1:
            cout << "Cuanto es el monto que quiere retirar: ";
            cin >> retiro;
            if(retiro<=cuenta && retiro>=0) {
                cuenta -= retiro;
                cout << "Su saldo ahora es: "<<cuenta;
            }
            else{
                cout<<"Usted no tiene saldo suficiente.";
            }
            break;
        case 2:
            cout << "Cuanto es el monto que quiere depositar: ";
            cin >> deposito;
            if(deposito>=0) {
                cuenta += deposito;
                cout << "Su saldo ahora es: "<<cuenta;
            }
            else{
                cout<<"Usted no puede depositar valores negativos.";
            }
            break;
        case 3:
            cout<<"Su saldo actual es: "<<cuenta;
            break;
        case 4:
            cout<<"GRACIAS POR VENIR, REGRESE PRONTO ☺"<<endl;
            break;
        default: cout<<"La opcion seleccionada no existe."; break;
    }

    return 0;
}
