#include<stdio.h>

int main(){
	int horas,salario_hora,salario;
	
	printf("Digite las horas trabajadas: ");
	scanf("%i",&horas);
	printf("Digite el salario por hora: ");
	scanf("%i",&salario_hora);
	
	salario = horas * salario_hora;
	
	printf("\nEl salario total es: %i",salario);
	
	return 0;
}
