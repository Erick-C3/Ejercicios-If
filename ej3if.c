#include <stdio.h>

int main(){

	int horaLlegada = 0;

	printf("Ingrese la hora\n");
	scanf("%i", &horaLlegada);

	if(horaLlegada < 900){
		printf("Llego muy temprano\n");
	}else if( horaLlegada <= 930){
		printf("llego en hora\n");
	}else{
		printf("llego tarde\n");
	}


	return 0;
}