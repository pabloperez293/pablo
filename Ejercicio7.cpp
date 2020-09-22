#include<stdio.h>
#include<conio.h>
#include<math.h>
//7. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor
int main(){
	
	int val1 = 0;
 	int val2 = 0;
 	int val3 = 0;
	int val4 = 0;
	int sum1 = 0 ; 
	int sum2 = 0 ;
	
	printf("Ingresar el primer valor: \n");
	scanf("%d",&val1);
	printf("Ingresar el segundo valor: \n");
	scanf("%d",&val2);
	printf("Ingresar el tercer valor: \n");
	scanf("%d",&val3);
	printf("ingresar el cuarto valor: \n");
	scanf("%d",&val4);
	
	sum1 = val1+val2;
	sum2 = val3+val4;
	
	if(sum1>sum2){
		printf("Es mayor la primer suma de las primeras variables. \n");
	}else{
		printf("Es mayor la segunda suma de las segundas variables. \n");
	}
return 0;	
}
