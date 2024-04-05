/*programa que recibe las calificaciones de 15 alumnos calcular el promedio del grupo*/
#include <stdio.h>
#include <conio.h> 
#include<stdlib.h>
main()
{
system("color 80");
int sc,a,cal[15],prom,c,may,na,men,posmen,menor,b;
sc=0;
printf("Registro de calificaciones de 15 alumnos\n");
for(a=0;a<15;a++)
   {printf("Alumno %i : ",a+1);
   scanf("%i",&c);
   cal[a]=c;
   }
for(a=0;a<15;a++)
   {sc=sc+cal[a];
   }
prom=sc/15;
printf("El promedio del grupo es:%i",prom);
may=0;
for(a=0;a<15;a++)
{if(may<cal[a])
   {may=cal[a];
   na=a;
   }
}
printf("\n\nLa calificacion mayor es:%i",may);
printf("\nel numero de lista del alumno es:%i",na+1);
men=10;
for(a=0;a<15;a++)
{if(men>cal[a])
   {men=cal[a];
   posmen=a;
   }
}
printf("\n\nLa calificacion menor es:%i",men);
printf("\nel numero de lista del alumno es:%i",posmen+1);
printf("\n\nLa calificaciones ordenadas de menor a mayor son:");
for(b=0;b<15;b++)
{for(a=0;a<b;a++)
 {if(cal[a]>=cal[a+1])
   {menor=cal[a];
   cal[a]=cal[a+1];
   cal[a+1]=menor;
   }
 }
}
for(a=0;a<15;a++)
{printf("\n%i",cal[a]);
}
getch();
return 0;
}

