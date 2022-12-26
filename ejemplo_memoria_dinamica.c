#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *pmemoria;
	
	pmemoria=(int*)malloc (sizeof(int));
	
	if(pmemoria==NULL){
		printf("Memoria no asignada");
	}
	else{
		printf("Memoria asignada");
	}
	
	return 0;
}

