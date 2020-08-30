#include <stdio.h>
#include <stdlib.h>
// Trabajo practico numero 1
//3.Ingresar los lados de un triangulo y calcular su perimetro e imprimirlo

int main(int argc, char *argv[]) {
	
	system("cls");
	
	int base;
	int altura;

	int Cal=0;
	
	printf("Ingresar la base del triangulo ");
	scanf("%d",&base);
	printf("Ingresar la altura del triangulo ");
	scanf("%d",&altura);

	
	
	Cal= base* altura/2	;
	
	printf("El primetro es: %d",Cal);
	
	return 0;
	
}
