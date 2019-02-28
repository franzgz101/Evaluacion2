#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
	char salir;
	int numero;
	cout<<"\nIntroduce un numero";
	cin>>numero;
	cout<<"\nLos 3 anteriores numeros son:"<<numero-3<<" , "<<numero-2<<" y "<<numero-1;
	cout<<"\nLos 3 siguientes numeros son:"<<numero+1<<" , "<<numero+2<<" y "<<numero+3;
	
	cout<<"\nToca cualquier tecla para salir";
	cin>>salir;
	return 0;
}
