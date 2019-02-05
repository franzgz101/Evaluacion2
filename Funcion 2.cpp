#include<iostream>
using namespace std;
//Definimos la funcion fuera de main
int mayor(int num1, int num2, int num3){
    int respuesta;
    if(num1>num2 && num1>num3){
           respuesta=num1;
           } 
    if(num2>num3 && num2>num1){
           respuesta=num2;
           } 
    if(num3>num1 && num3>num2){
           respuesta=num3;
           }  
    return respuesta;
}   
int main(){
    char salir;
    int num1, num2, num3;
    //Leo un numero entero
    cout<<"Introduce un numero: ";
    cin>>num1;
    //Leo otro numero entero
    cout<<"Introduce otro numero entero: ";
    cin>>num2;
    //Leo otro numero entero
    cout<<"Introduce otro numero entero: ";
    cin>>num3;
    cout<<" El mayor es: "<<mayor(num1, num2, num3);
    //Los envio a una funcion que los compara          
    cout<<"Toca cualquier letra para salir: ";
    cin>>salir;
    return 0;
}    
