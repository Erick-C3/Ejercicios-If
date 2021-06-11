#include <stdio.h>
#include <stdbool.h> // agregar el tipo de dato booleano 

/*
	Verificar vacante

	Solicitar un ingreso de tipo booleano para confirmar si el usuario posee o no una vacante
	
	En el caso que tenga una vacante, informar:
		Espere el email del coordinador para informacion de la cursada
	Caso contrario
		Espere el email del coordinador en caso de que se liberen vacantes

		variables:
			- si tiene una vacante 

		constantes [extra]:
			- mensaje para pedir informacion 
			- mensaje cuando tiene vacante
			- mensaje cuando no tiene vacante
*/



int main(){

	int numeroBool = 0;
	bool tieneVacante = false;

	// escribir mensaje para solicitar info
	printf("Tenes vacante? 0 si no tiene y 1 si tiene \n"); //  0 es false y !=0 es true
	// recibir info
	scanf("%i", &numeroBool);
	tieneVacante = numeroBool; // 0 entonces guardo false - !=0 entonces guardo true

	
	
	if( tieneVacante == 0 ){
		printf("Espere el email del coordinador para informacion de la cursada\n");		
	}else{
		printf("Espere el email del coordinador en caso de que se liberen vacantes\n");
	}


	return 0;
}