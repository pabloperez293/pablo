#include<stdio.h>
#include<conio.h>
#include<math.h>
//1 ingresar 2 valores, indicar e imprimir si son iguales
int main() 
{
	int val1 =0;
	int val2 =0;
	int igual =0; 
	printf("Ingresar el primer valor: ");
	scanf("%d",&val1);
	printf("Ingresar el segundo valor: ");
	scanf("%d",&val2);

	if(val1==val2)
	{
	printf("son iguales");		
	}
	else{
	printf("No son iguales");
	}
return 0;
}
		
