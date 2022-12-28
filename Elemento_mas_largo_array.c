#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int size,i, largest;
	printf("\nIntroduzcamos el tamaño del array: ");
	scanf("%d",&size);
	int array[size];
	
	//inserta los valores del array
	printf("Ingresa %d los valores del array\n", size);
	
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
		//scanf("%d",*array(i+1);
	}
	
	largest=array[0];
	
	for(i=1;i<size;i++){
		if(largest<array[i]){
			largest=array[i];
		}
	}
	
	printf("El elemento mas largo del array es: %d", largest);
	return 0;
}

