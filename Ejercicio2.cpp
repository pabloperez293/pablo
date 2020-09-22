#include<stdio.h>
#include<conio.h>
#include<math.h>
//2-Ingresar un valor indicar e imprimir si es positivo, negativo o cero
int main() 
{
	int valor = 0 ;
	int pos = 0 ;
	int neg = 0 ;
	int cero = 0 ;
	
	printf("Ingresar un valor entero : \n");
	scanf("%d",&valor);
	
	if(valor==0)
	{
		printf("El valor ingresado es cero");
	}else if(valor<0){		
		printf("El valor ingresado es negativo");
	}else if (valor>0){	
		printf("El valor ingresado es positivo");
	}else if(valor) {	
		printf("El valor ingresado es incorrecto");
	}
return 0;
}
