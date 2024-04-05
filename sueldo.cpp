/*Programa para calcular elsueldo dependiendo de las horas trabajadas*/
#include<stdio.h>
#include<conio.h>
int main()
{
      float sueldo,pago,hrs,ex,hex;
      printf("Dame tus horas trabajadas:");
      scanf("%f",&hrs);
      printf("Dame tu pago por hora:");
      scanf("%f",&pago);
      if (hrs > 50)
      { ex= hrs-50;
      sueldo= ex*pago*3+10*2*pago+40*pago;
      printf("tu sueldo es: %.2f",sueldo);
      }
      else {
           if (hrs>40)
                {
                 hex=hrs-40;
                 sueldo = hex*pago*2+pago*40;
                 printf("tu sueldo es:%.2f", sueldo);
                 }
            else{
			    sueldo=hrs*pago;
                printf("tu sueldo es:%.2f", sueldo);
                }
            }
      getch();
      return 0;
}

