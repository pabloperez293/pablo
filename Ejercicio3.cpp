#include<stdio.h>
#include<conio.h>
#include<math.h>
//.3-Ingresar dos valores y realizar e imprimir el producto si el 1ro es mayor al 2do, si son
//iguales solo indicarlo
int main() 
{
	int val1 = 0;
	int val2 = 0;
	int prod = 0;
	
	printf("Ingresar el primer valor: ");
	scanf("%d",&val1);
	printf("Ingresar el segundo valor: ");
	scanf("%d",&val2);
	
	if(val1>val2)
	{
		prod = val1 * val2;
		printf("El producto es el %d \n",prod);
	}else if (val1== val2){
		printf("Son iguales");
	}
return 0;
}
