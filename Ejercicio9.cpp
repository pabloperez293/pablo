#include<stdio.h>
#include<conio.h>
#include<math.h>
//9. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y
// si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo
int main(){
	int hora = 0;
	int tiempo = 0;
	int empleado = 0 ;
	int sueldo = 0;
	
	printf("Ingresar las horas trabajadas: \n");
	scanf("%d",&hora);
	printf("Ingresar el tiempo trabajado: \n");
	scanf("%d",&tiempo);
	
	if (hora>=50&& hora<=150){	
		sueldo = 100 +tiempo*50;
		printf("Su sueldo es de: %d",sueldo);
	}else if(hora>150){
		sueldo = 200 +tiempo*50;
		printf("Su sueldo es de: %d",sueldo);
	}else{
		printf("No recibe premio.");
	}
return 0;
}
