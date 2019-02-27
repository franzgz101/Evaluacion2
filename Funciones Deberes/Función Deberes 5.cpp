#include<iostream>
using namespace std;

int main(){
	int dia;
	int mes;
	int ano;
	char salir;
	cout<<"\nIntroduce un dia: ";
	cin>>dia;
	cout<<"\nIntroduce un mes: ";
	cin>>mes;
	cout<<"\nIntroduce un ano: ";
	cin>>ano;
	cout<<"\nBienvenido al "<< dia<<" de "<< mes <<" del "<<ano;
	cout<<"\n";
	
	cout<<"\nIntroduce cualquier tecla para salir";
	cin>>salir;
	return 0;
}
