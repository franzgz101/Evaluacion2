#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int mes;
	char salir;
	
	cout<<"Digite un numero entre (1-12): ";
	scanf("%i",&mes);
	
	switch(mes){
		case 1: cout<<"Enero";
		break;
		case 2:cout<<"Febrero";
		break;
		case 3:cout<<"Marzo";
		break;
		case 4:cout<<"Abril";
		break;
		case 5:cout<<"Mayo";
		break;
		case 6:cout<<"Junio";
		break;
		case 7:cout<<"Julio";
		break;
		case 8:cout<<"Agosto";
		break;
		case 9:cout<<"Septiembre";
		break;
		case 10:cout<<"Octubre";
		break;
		case 11:cout<<"Noviembre";
		break;
		case 12:cout<<"Diciembre";
		break;	
		default: cout<<"Numero no valido para mes"
		;	
	}
	
	cout<<"\n\nIntrozca letra y pulse intro para salir: ";
    cin>> salir;
	return 0;
}

