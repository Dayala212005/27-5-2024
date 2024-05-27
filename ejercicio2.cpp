#include <iostream>

using namespace std;

int main(){
int numero=0,n=0;
cout<<"Ingrese el numero de elementos que tendra el arreglo\n";
cin>>numero;
int impar[numero];

for(int i=0; i<numero; i++){
     cout<<"Favor ingresar un numero impar\n";
    do{
        cin>>n;
        if(n%2==0){
         cout<<"El valor debe ser impar, favor volver a ingresar\n";
        }else{
        impar[i]=n;
        }
    }while(n%2==0);
}
cout<<"El arreglo de numeros impares es: \n";
for(int i=0; i<numero; i++){
    cout<<"["<<impar[i]<<"]";
}


  return 0;
}