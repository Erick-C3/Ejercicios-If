#include <stdio.h>

/*
	variables:
		- el horario de llegada

	constantes:
		- el horario tarde
		- el horario temprano
		- mensajes (extra)
*/

const int HORARIO_TEMPRANO = 900;
const int HORARIO_TARDE = 930;

#define MSJ_SOLICITUD "Ingrese la hora de llegada en horario militar\n"

// Mensajes para las situaciones
#define MSJ_MUY_TEMPRANO "Llego muy temprano!\n"
#define MSJ_EN_HORA "Llego en hora\n"
#define MSJ_TARDE "Llego tarde\n"

int main(){

	int horaLlegada = 0;

	printf(MSJ_SOLICITUD);
	scanf("%i", &horaLlegada);

	// muy temprano  si llega antes de las 900
	/*
		==, != (NO - ! )
		<, >, <=, >=
	*/
	if( horaLlegada < HORARIO_TEMPRANO ){
		printf(MSJ_MUY_TEMPRANO);
	}else if( horaLlegada <= HORARIO_TARDE){
		printf(MSJ_EN_HORA);
	}else{
		printf(MSJ_TARDE);
	}


	return 0;
}