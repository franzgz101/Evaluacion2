#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int horas,salario_hora,salario;
	char salir;
	
	cout<<"Digite las horas trabajadas: ";
	scanf("%i",&horas);
	cout<<"Digite el salario por hora: ";
	scanf("%i",&salario_hora);
	
	salario = horas * salario_hora;
	
	printf("\nEl salario total es: %i",salario);
	
	cout<<"\nToca cualquier letra para salir: ";
    cin>>salir; 
	return 0;
}
