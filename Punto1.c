#include <stdio.h>
#include <stdlib.h>
// Trabajo practico numero 1
int main(int argc, char *argv[]) {
	
	int val1;
	int val2;
	int res=0;
	//ingreso de variables
	printf("Ingresar el numero 1: ");
	scanf("%d",&val1);
	
	printf("Ingresar el numero 2: ");
	scanf("%d",&val2);
	
	res= val1+val2;
	printf("El resultado es:%d ",res);
	
	return 0;
}
