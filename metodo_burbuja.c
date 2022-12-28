#include <stdio.h>

int metodo_burbuja(int *a, int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("Estos son los valores: %d %d\n",*a,*b);
	return 0;
}


int main(int argc, char *argv[]) {
	
	int aux=0;
	int x=1,y=2;
	
	aux=metodo_burbuja(&x, &y);
	
	return 0;
}

