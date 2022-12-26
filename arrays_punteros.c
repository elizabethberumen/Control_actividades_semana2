#include <stdio.h>

int x[5]={5,2,8,1,0};

int main(int argc, char *argv[]) {
	
	printf("El valor de la direccion del array es: %d\nEl valor del array es: %d\n",x[0],*x); //*x=x[0]
	printf("El valor de la direccion del array es: %d\nEl valor del array es: %d\n",x[1],*(x+1));
	printf("El valor de la direccion del array es: %d\nEl valor del array es: %d\n",x[2],*(x+2));
	printf("El valor de la direccion del array es: %d\nEl valor del array es: %d\n",x[3],*(x+3));
	printf("El valor de la direccion del array es: %d\nEl valor del array es: %d\n",x[4],*(x+4));
	
	
	return 0;
}

