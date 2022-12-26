#include <stdio.h>

int variable=200;
int *pvariable=&variable;
int i;


int main(int argc, char *argv[]) {
	
	printf("\n\n\nEL valor de la variable antes de usar punteros es: %d\n", *pvariable);
	
	*pvariable=700;
	
	printf("EL valor de la variable despues de usar punteros es: %d\n\n", variable );
	
	for(i=1;i<=5;i++){
		*pvariable=i;
		printf("EL valor de la variable despues de usar punteros en el ciclo for es: %d\n",variable );
		
	}
	
	return 0;
}

