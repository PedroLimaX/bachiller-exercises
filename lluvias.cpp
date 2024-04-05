/*programa para almacenar las lluvias de 4 estados del a? pasado e indicar cual es el que tuvo mas lluvias en promedio*/
#include<stdio.h>
#include<conio.h>
main()
{int e,m,es[12],a[4],lluvias,c,estado;
float prom,prom_may;
prom_may=0;
for(e=1;e<=4;e++)
   {printf("Dame el nombre del estado:");
    scanf("%d",&estado);
    a[e]=estado;
    c=0;
    for(m=1;m<=12;m++)
       {printf("\nDame la lluvia del mes:");
        scanf("%d",&lluvias);
        es[m]=lluvias;
        printf("\nLas lluvias del mes %d son:%f",m,es[m]);
        c=c+lluvias;
	   }
	prom=c/12;
	printf("\nEl promedio de lluvias del estado %d",estado);
	printf(" es:%f",prom);
	if(prom>prom_may)
	  {prom_may=prom;
	  }
	printf("\nEl estado con mas lluvias es:%d",estado);
	printf(" y las lluvias en promedio son:%f",prom_may);
   }
}

