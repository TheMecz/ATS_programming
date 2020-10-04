/* La sentencia if
 *
 * if(condicion){
 *      Intrucción 1;
 * }
 * else{
 *      Intrucción 2;
 * }
 * */


#include <iostream>
using namespace std;

int main() {

    int num;
    cout<<"Digite un número: "; cin>>num;
    if(num%2==0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }

    return 0;
}
