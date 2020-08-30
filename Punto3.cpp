#include <stdio.h>
#include <stdlib.h>
// Trabajo practico numero 1-2
//2.Ingresar tres valores, imprimir la suma del total, solo sabe sumar de a dos.operando por vez

int main(int argc, char *argv[]) {
	
	system("cls");
	
	int val1;
	int val2;
	int val3;
	int SumT=0;
	
	printf("Ingresar el Primer valor ");
	scanf("%d",&val1);
	printf("Ingresar el Segundo valor ");
	scanf("%d",&val2);
	printf("Ingresar el Tercer valor ");
	scanf("%d",&val3);
	
	
	SumT= val1 + val2 + val3;
	
	printf("El resultado es: %d",SumT);
	
	return 0;
	
}
