#include <stdio.h>

int main(){

	int numero = 0;

	printf("Ingrese numero");
	scanf("%i", &numero);

	if(numero%2 == 0){
		printf("Es par\n");
	}else{
		printf("No es par\n");
	}


	return 0;
}