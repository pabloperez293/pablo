#include<stdio.h>
#include<conio.h>
#include<math.h>
//4. Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor
int main() 
{
 int val1 = 0 ;
 int val2 = 0;
 int res = 0;
 
 	printf("Ingresar el valor mayor: \n");
	scanf("%d",&val1);
	printf("Ingresar el valor menor: \n");
	scanf("%d",&val2);
	
	if(val1>val2){
		res = val1-val2;
		printf("La resta es de %d \n",res);
	}else{
		printf("Ingreso mal los valores");
	}
return 0;
}
	
