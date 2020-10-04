//Ejemplo encontrar el mayor de 2 números

#include<iostream>

using namespace std;

//Protoripo de Función 

typedef int type_entero;

type_entero encontrarMax(type_entero x, type_entero y);

int main(){
  
  type_entero n1, n2;

  cout<<"Digite 2 número: "<<endl;cin>>n1>>n2;

  encontrarMax(n1, n2);


  return 0;
}

type_entero encontrarMax(type_entero x, type_entero y){
  if(x>y){
    cout<<x;
  }
  else if(x==y){
    cout<<x<<" es igual a "<<y;
  }
  else{
    cout<<y;
  }
  return 0;
}
