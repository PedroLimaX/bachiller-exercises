/*Programa para convertir centimetros a metros, kilometros y a milimetros*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    double cm;
		system ("color 80");
		printf("Programa para convertir centimetros a metros, kilometros y milimetros\n");
		printf("Escribe los centimetros que desea pasar a metros, kilometros y milimetros:");
		scanf("%lf",&cm);
		printf("Los metros son:%lf",cm/100);
		printf("\nLos kilometros son:%lf",cm/100000);
		printf("\nlos milimetros son:%lf",cm*10);
		getch();
		return 0;
    }

