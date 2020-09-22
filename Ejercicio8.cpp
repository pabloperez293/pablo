#include<stdio.h>
#include<conio.h>
#include<math.h>
//8. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad
int main(){
	int edad1 = 0 ;
	int altura1 = 0 ;
	int persona1 = 0 ;
	int edad2 = 0 ;
	int altura2 = 0 ;
	int persona2 = 0 ;
	
	printf("Ingresar la edad de la primer persona: \n");
	scanf("%d",&edad1);
	printf("Ingresar la altura de la primer persona:  \n");
	scanf("%d",&altura1);
	printf("Ingresar la edad de la segunda persona: \n");
	scanf("%d",&edad2);
	printf("Ingresar la altura de la segunda persona:  \n");
	scanf("%d",&altura2);
	
	if(edad1>edad2){
		printf("La primer persona tiene una estatura de : %d",altura1);
	}else{
		printf("La segunda persona tiene una estatura de : %d ",altura2);
	}
return 0;
}


