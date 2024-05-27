#include <iostream>

using namespace std;

int main(){

    int numero=0,par=0;

    cout<<"Bienvenido al programa para guardar numeros pares en arreglos\n";
    cout<<"Favor ingrese el numero de datoss que va a contener el arreglo\n";
    cin>>numero;
    int arreglo[numero];

    for(int i = 0; i<numero; i++){

      cout<<"Favor ingresar un numero par para ingresarlo en el array\n";
      do{
      cin>>par;
      if(not(par%2==0)){
            cout<<"El valor debe ser par para ser ingresado en el array\n";
        }else{
            arreglo[i]=par;
        }
      }while(not(par%2==0));
    }
   cout<<"Su arreglo es:\n";
   for(int j = 0; j<numero; j++){
     cout<<"["<<arreglo[j]<<"]";
   }

    return 0;
}