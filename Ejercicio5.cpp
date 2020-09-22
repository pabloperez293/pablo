#include<stdio.h>
#include<conio.h>
#include<math.h>
//5. Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es
int main() 
{
	int lad1 =0;
	int lad2 =0;
	int lad3 =0;
	
	printf("Ingresar el primer lado: \n");
	scanf("%d",&lad1);
	printf("Ingresar el segundo lado: \n");
	scanf("%d",&lad2);
	printf("Ingresar el tercer lado: \n");
	scanf("%d",&lad3);
	
	if( lad1 == lad2 && lad2 ==lad3)
	{
		printf("El triangulo es equilatero \n");
	}else if(lad1 == lad2 || lad1 ==lad3 || lad2== lad3){
		printf("El triangulo es isosceles \n");
	}else if( lad1 != lad2 && lad1 != lad3 && lad3 != lad2){
		printf("El triangulo es escaleno \n");
	}
return 0;	
}
