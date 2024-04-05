/*programa para almacenar las lluvias de 4 estados del a? pasado e indicar cual es el que tuvo mas lluvias en promedio*/
#include<stdio.h>
#include<conio.h>

main()
{int x,y,a[4][12],lluvias,c,mes,estado;
float prom,may;
char* letra="estado";
for(x=0;x<4;x++)
    {printf("\nDame el nombre del estado: ");
    scanf("%letra",&estado);
    may=0;
	c=0;
    mes=1;
    for(y=0;y<12;y++)
       {printf("\nDame la lluvia del mes %i",mes);
        scanf("%i",&lluvias);
        a[x][y]=lluvias;
        c=c+lluvias;
        mes++;
       }
    prom=c/12;
    if(prom>may)
      {printf("\nEl estado con mas lluvias es el de %i",estado);
       printf(" y su promedio es:%.2f",may);
       may=prom;
      }
    }
for(x=0;x<4;x++)
   {for(y=0;y<12;y++)
       {printf("\nlas lluvias son:%i",a[x][y]);
        
       }
   }
getch();
return 0;
}

