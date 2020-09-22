#include<stdio.h>
#include<conio.h>
#include<math.h>
//6. Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos
//valores es mayor al promedio 
int main() 
{
 int val1 = 0;
 int val2 = 0;
 int val3 = 0;
 int suma = 0 ;
 int prom = 0 ;
  
 	printf("Ingresar el primer valor: \n");
	scanf("%d",&val1);
	printf("Ingresar el segundo valor: \n");
	scanf("%d",&val2);
	printf("Ingresar el tercer valor: \n");
	scanf("%d",&val3);
	
 prom = (val1 + val2 + val3)/3 ;
 
	if(val1>prom){
		printf("El primer valor es mayor que el promedio");
	}else
		if(val2>prom){
		printf("El segundo valor es mayor que el promedio");		
	}else
		if(val3>prom){
			printf("El tercer valor es mayor que el promedio");
	} else{
		printf("El valor ingresado es incorrecto");
	}
return 0;
}
