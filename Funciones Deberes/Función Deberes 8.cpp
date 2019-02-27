#include<iostream>
using namespace std;

int main(){
	char salir;
	char general;
	char reducido;
	char superreducido;
	int precio;
	int tipo;
	cout<<"\nIntroduce un precio: ";
	cin>>precio;
	cout<<"\nIntroduce un tipo de IVA(General,Reducido o Superreucido): ";
	cin>>tipo;
	if(tipo==general){
		cout<<"\nEl precio con IVA general es: "<<precio*1.16;
		cout<<"\nIntroduce cualquier tecla para salir";
		cin>>salir;
		return 0;
	}	
	if(tipo==reducido){
  		cout<<"\nEl precio con IVA reducido es: "<<precio*1.08;
		cout<<"\nIntroduce cualquier tecla para salir";
		cin>>salir;
		return 0;
	}
	if(tipo==superreducido){
		cout<<"\nEl precio con IVA super reducido es: "<<precio*1.04;
		cout<<"\nIntroduce cualquier tecla para salir";
		cin>>salir;
		return 0;
	}
}
