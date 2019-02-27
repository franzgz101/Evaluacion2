#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int num1,num2,suma=0,resta=0,mult=0,div=0;
	char salir;
	
	cout<<"Introduce un numero: ";
	
	do{
        cin>>num1;
        if(num1==0){
         cout<<"\nERROR. No se puede realizar la división. Intentalo otra vez: ";
        }
       }while(num1==0);
    
    cout<<"Introduce otro numero: ";
    
    do{
    	cin>>num2;
   		if(num2==0){
        	cout<<"\nERROR. Introduce un numero distinto de cero. Intentalo otra vez: ";
    	}
    }while(num2==0);
    
	suma = num1 + num2;
	resta = num1 - num2;
	mult = num1 * num2;
	div = num1/num2; 
       
	printf("\nLa suma es: %i",suma);
	printf("\nLa resta es: %i",resta);
	printf("\nLa multiplicacion es: %i",mult);
	printf("\nLa division es: %i",div);
	
	
	cout<<"\nToca cualquier letra para salir: ";
    cin>>salir; 
	return 0;
}
