/*Programa para calcular el area de un trapecio*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float basemayor, basemenor, altura, area;
	system("color 02");
	printf("Programa para calcular el area de un trapecio\n");
	printf("Dame el valor de la base mayor: ");
	scanf("%f",&basemayor);
	printf("Dame el valor de la base menor:");
	scanf("%f",&basemenor);
	printf("Dame el valor de la altura:");
	scanf("%f",&altura);
	area=(basemayor+basemenor)/2*altura;
	system("cls");
	printf("Informacion del trapecio:\nBase mayor:%.0f\nBase menor:%.0f\nAltura:%.0f\nArea:%.2f",basemayor,basemenor,altura,area );
	getch();
	return 0;
}

