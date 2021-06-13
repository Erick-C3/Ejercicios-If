#include <stdio.h>
#include <stdbool.h>

int main(){

	bool tengoVerduras = false;
	bool tengoAgua = false;
	bool tengoCondimentos = false;
	bool tengoCuboCaldo = false;
	int convertir = 0;

	printf("tenes verduras ? 1 para si, 0 para no\n");
	scanf("%i", &convertir);
	tengoVerduras = convertir;

	printf("tenes agua ? 1 para si, 0 para no\n");
	scanf("%i", &convertir);
	tengoAgua = convertir;

	printf("tenes condimentos ? 1 para si, 0 para no\n");
	scanf("%i", &convertir);
	tengoCondimentos = convertir;

	printf("tenes cubo caldo ? 1 para si, 0 para no\n");
	scanf("%i", &convertir);
	tengoCuboCaldo = convertir;


	// Si tengoVerduras Y tengoAgua Y ( tengoCondimentos O tengoCuboCaldo) entonces
	//		escribir "A cocinar!"
	if( tengoVerduras && tengoAgua && (tengoCondimentos || tengoCuboCaldo)){
		printf("A cocinar!\n");
	}else{
		printf("ups..\n");
	}

	return 0;
}