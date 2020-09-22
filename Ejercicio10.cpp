#include<stdio.h>
#include<conio.h>
#include<math.h>
//10. Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida,considerar los años bisiestos 
int main(){
	int dia = 0 ;
	int mes = 0 ;
	int years = 0 ; 
	
	printf("Ingresar el dia porfavor: \n");
	scanf("%d",&dia);
	printf("Ingresar el mes porfavor: \n");
	scanf("%d",&mes);
	printf("Ingresar el año porfavor: \n");
	scanf("%d",&years);
	
	if(years%4 != 0 || (years%100 ==0 && years %400 !=0) ){
		printf("No es un año bisiesto");
	}else{
		printf("Es un año bisiesto");
	}
return 0;
}
