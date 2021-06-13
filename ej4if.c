#include <stdio.h>
#include <stdbool.h>

int main(){


	// se puede preguntar
	bool llueveManiana = false;
	bool paraguasListo = false;
	int convertir = 0;//variable encargada de contener valores int que luego se agregara
					  // a las variables booleanas

	printf("llueve maniana? \n");
	scanf("%i", &convertir);
	llueveManiana = convertir;// bool = int


	printf("llueve maniana? \n");
	scanf("%i", &convertir);//reuso la variable debido a que el anterior valor no lo necesito mas
	paraguasListo = convertir;

	if(llueveManiana){
		printf("Esta lloviendo,");
		if(paraguasListo){
			printf("agarra el apraguas!\n");
		}else{
			printf("a correr!\n");
		}
	}else{
		printf("No llueve :)\n");
	}


	return 0;
}