#include<stdio.h>
#include<conio.h>
#include<math.h>
//10. Ingresar tres valores correspondientes al d�a, mes y a�o de una fecha, indicar si es v�lida,considerar los a�os bisiestos 
int main(){
	int dia = 0 ;
	int mes = 0 ;
	int years = 0 ; 
	
	printf("Ingresar el dia porfavor: \n");
	scanf("%d",&dia);
	printf("Ingresar el mes porfavor: \n");
	scanf("%d",&mes);
	printf("Ingresar el a�o porfavor: \n");
	scanf("%d",&years);
	
	if(years%4 != 0 || (years%100 ==0 && years %400 !=0) ){
		printf("No es un a�o bisiesto");
	}else{
		printf("Es un a�o bisiesto");
	}
return 0;
}
