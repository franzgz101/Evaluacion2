#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char salir;
    float num1;
    char palabra[50];
    float num2;
    cout<<"Introduzca una palbra: ";
    cin>>palabra;
    num2=strlen(palabra);
    cout<<"Cuantas letras tiene su palabra: ";
    cin>>num1;
    if(num2<num1){
        cout<<"La palara no tiene "<<num1<<" letras, tiene "<<num2;
      }
    if(num2==num1){
         cout<<"La palara si que tiene "<<num1<<" letras.";
      }
    
    cout<<"\nToca cualquier tecla para salir: ";
    cin>> salir;
    return 0;
}
