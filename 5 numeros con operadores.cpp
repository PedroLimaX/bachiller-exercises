/*Programa para ordenar 5 numeros*/
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <vector>

main()
{
std::vector<int> prueba;
prueba.push_back(1);

int a,b,c;
float s[5],r[5],m[5],d[5],num1[5],num2[5],n1,n2; 
system ("color 02");
printf("Programa para realizar operaciones aritmeticas basicas entre 2 series de 5 numeros cada uno\n\n");
for(a=0;a<5;a++){
	printf("Dame el %i numero: ",a+1);
	scanf("%f",&n1);
	num1[a]=n1;
	}
printf("\nDame otros 5 n%cmeros\n",163);
for(b=0;b<5;b++){
	printf("Dame el %i n%cmero: ",b+1,163);
	scanf("%f",&n2);
	num2[b]=n2;
	}
a=0;
b=0;
system("cls");
for(c=0;c<5;c++){
	s[c]=(num1[a])+(num2[b]);
	r[c]=(num1[a])-(num2[b]);
	m[c]=(num1[a])*(num2[b]);
	d[c]=(num1[a])/(num2[b]);
	a++;
	b++;
	}
printf("\nLos primeros numeros dados son:\n");
for(a=0;a<5;a++){
	printf("\t%.0f",num1[a]);
	}
printf("\n\nLos segundos numeros son:\n");
for(b=0;b<5;b++){
	printf("\t%.0f",num2[b]);
	}
a=0;
b=0;
for(c=0;c<5;c++){
	printf("\n\nOperaciones entre los %ios numeros dados: \n",c+1);
	printf("\nSuma: %.0f+%.0f=",num1[a],num2[b]);
	printf("%.2f",s[c]);
	printf("\nResta: %.0f-%.0f=",num1[a],num2[b]);
	printf("%.2f",r[c]);
	printf("\nMultiplicacion: %.0f*%.0f=",num1[a],num2[b]);
	printf("%.2f",m[c]);
	printf("\nDivision: %.0f/%.0f=",num1[a],num2[b]);
	printf("%.2f\n",d[c]);
	a++;
	b++;
	}
getch();
return 0;
}

