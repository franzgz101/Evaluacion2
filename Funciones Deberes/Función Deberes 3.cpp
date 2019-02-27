#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int dia;
	char salir;
		
	cout<<"Digite un numero entre (1-7): ";
	scanf("%i",&dia);
	
	switch(dia){
		case 1:cout<<"Lunes";
		break;
		case 2:cout<<"Martes";
		break;
		case 3:cout<<"Miercoles";
		break;
		case 4:cout<<"Jueves";
		break;
		case 5:cout<<"Viernes";
		break;
		case 6:cout<<"Sabado";
		break;
		case 7:cout<<"Domingo";
		break;	
		default:cout<<"Numero no valido para dia";	
	}
	
	cout<<"\n\nIntrozca letra y pulse intro para salir: ";
    cin>> salir;
	return 0;
}
