/* La sentencia switch
 *
 * switch(expresion){
 *      case literal1:
 *          conjunto de intrucciones1;
 *          break;
 *      case literal2:
 *          conjunto de intrucciones2;
 *          break;
 *      case literal3:
 *          conjunto de intrucciones3;
 *          break;
 *      default:
 *          conjunto de intrucciones por defecto;
 *          break;
 *      }
 * */


#include <iostream>
using namespace std;

int main() {

    int numero;

    cout<<"Digite un numero entre 1-5: ";
    cin>>numero;

    switch (numero) {
        case 1: cout<<"Es el numero 1"<<endl; break;
        case 2: cout<<"Es el numero 2"<<endl; break;
        case 3: cout<<"Es el numero 3"<<endl; break;
        case 4: cout<<"Es el numero 4"<<endl; break;
        case 5: cout<<"Es el numero 5"<<endl; break;
        default: cout<<"No esta en el rango de 1-5"<<endl; break;
    }

    return 0;
}