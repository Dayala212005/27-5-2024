#include <iostream>

using namespace std;

int main(){
int n=0,j=0;
cout<<"Ingrese el tamano del arreglo\n";
cin>>n;
int numero[n],par[n];
for(int i = 0; i<n; i++){
 cout<<"Ingresar un numero\n";
 cin>>numero[i];
 if(numero[i]%2==0){
    par[j]=numero[i];
    j++;
 }
}
cout<<"El arreglo original es de :\n";
for(int i=0; i<n; i++){
    cout<<"["<<numero[i]<<"]";
}
cout<<"\n";
cout<<"El arreglo con numeros pares es de:\n";
for(int i=0; i<j; i++){
    cout<<"["<<par[i]<<"]";
}
    return 0;

}