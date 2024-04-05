/*programa para realizar operaciones con diferentes operadores*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

class OperacionesBasicas
{
	public:
	void basicas(int tipo){
	}
	
};


void basicas(int tipo){
	char * tipoFuncion="";
	
	switch(tipo){
	case 1: tipoFuncion = "Suma";
	break;
	case 2: tipoFuncion = "Resta";
	break;
	case 3: tipoFuncion = "Multiplicaci%cn",162;
	break;
	case 4: tipoFuncion = "Divisi%cn",162;
	break;
	printf("%s\n", tipoFuncion);
	}
	float r,num1,num2;
	printf("Primer N%cmero:",163);
    scanf("%f",&num1);
    printf("Segundo N%cmero:", 163);
    scanf("%f",&num2);  
	switch(tipo){
		case 1: r=num1+num2;
    		printf("El resultado de la %s de %.1f y %.1f =%.1f",tipoFuncion, num1,num2,r);
    		break;
    	case 2: r=num1-num2;
    		printf("El resultado de la %s de %.1f y %.1f =%.1f",tipoFuncion, num1,num2,r);
    	case 3: r=num1*num2;
    		printf("El resultado de la %s de %.1f y %.1f =%.1f",tipoFuncion, num1,num2,r);
    	case 4: r=num1/num2;
    		printf("El resultado de la %s de %.1f y %.1f =%.1f",tipoFuncion, num1,num2,r);
			}
}
void menu()
{
      int op, n1,n2,res;
      float r,num1,num2;
      system ("color 0A");
      printf("Programa para realizar operaciones entre dos n%cmeros con diferentes operadores matem%cticos\nPedro Degante Lima\n\n",163,160);
      printf("%cQu%c operaci%cn quieres realizar?\n1.Suma\n2.Resta\n3.Multiplicaci%cn\n4.Divisi%cn\n5.Potencia\n6.Mod(Residuo de una divisi%cn)\n\n", 168,130,162,162,162,162);
      printf("Opci%cn elegida:",162);
      scanf("%i",&op);
      switch(op)
      {
      		case 1:
      			basicas(1);
				menu();
				break;
			case 2: 
				basicas(2);
				menu();
				break;
			case 3: 
				basicas(3);
				menu();
				break;
			case 4:
				basicas(4);
				menu();
				break;
			case 5: {
				printf("Potencia:\nN%cmero que quieres elevar:",163);
                scanf("%i",&n1);
                printf("Exponente:");
                           scanf("%i",&n2);
                           res=pow(n1,n2);
                           printf("%i%c%i es = %i",n1,94,n2, res);
					}
				break;
			case 6:{
				printf("Residuo de una divisi%cn:\nN%cmero que deseas dividir:",162,163);
       			scanf("%i",&n1);
       			printf("Entre cu%cnto lo quieres dividir:", 160);
       			scanf("%i",&n2);  
            	res=n1%n2;
                printf("El residuo al dividir %i/%i es:%i",n1,n2,res);
				menu();

					}
				break;
			default: printf ("Opcion equivocada");
      }
      getch();
}

int main() 
{
	menu();
	return 0;
}
