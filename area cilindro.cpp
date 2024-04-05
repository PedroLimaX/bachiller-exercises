/*Programa para hacer una derivada simple*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define PI 3.1416
main(){
	system("color 02");
	float areaCirculo,radio,altura,resultado;
	radio=1;
	printf("Ingrese el valor del radio:");
	scanf("%f",&radio);
	printf("Ingrese el valor de la altura:");
	scanf("%f",&altura);
	areaCirculo=(radio*radio)*PI;
	resultado=(areaCirculo*altura);
	printf("El area del cilindro es: %f",resultado);
getch();
return 0;	
}

