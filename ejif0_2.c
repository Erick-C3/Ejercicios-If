#include <stdio.h>
#include <stdbool.h>
/*
	Aplicar descuento
	
	Preguntar al usuario si posee un descuento respecto a un precio a pagar

	Si posee descuento
		aplicar el 20% de descuento
	caso contrario
		sin descuento

	finalmente informar el precio final a pagar

	variables:
		- si tiene descuento
		- precio base
		- precio final
	constante:
		- el 20% de descuento

*/



// crear una constante
/*
	el 80%

	20/100
*/

const float DESCUENTO_20 = 0.8;


int main(){

	int numeroBool =  0;
	bool tieneDescuento = false;
	float precioBase = 0;// 1000$
	

	printf("Ingrese el precio a pagar\n");
	scanf("%f", &precioBase);

	printf("Tenes descuento? 0 si no tiene y 1 si tiene\n");
	scanf("%i", &numeroBool);
	tieneDescuento = numeroBool;  

	// Y  &&   AND
	// O  ||   	OR
	// ==

	if( tieneDescuento ){
		precioBase *= DESCUENTO_20;// precioBase = precioBase * DESCUENTO_20;
	}


	printf("Precion final a pagar %.1f $\n", precioBase );

	return 0;
}