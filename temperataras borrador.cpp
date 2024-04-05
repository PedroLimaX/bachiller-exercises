/*Programa para almacenas temperaturas de los ultihmmos 50 años de los 32 estados*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{int x,y,z,a[3][3][5],tem,c,nea,neb,nm,nmes,an,mayor73,menor85,prommay,promanual,prom,may,men,mayor,es;
c=0;
for(x=0;x<3;x++)   //Pedir y almacenar en el arreglo
 {printf("Estado %i",x+1);
  for(y=0;y<3;y++)
  {printf("\na\xA4o %i",y+1);   //\xA4 es para mostrar la ñ al ejecutar
   for(z=0;z<5;z++)
   {printf("\nmes %i",z+1);
   printf("\nTemperatura :");
   scanf("%i",&tem);
   a[x][y][z]=tem;
   }
  }
 }
prom=0;
prommay=0;
for(x=0;x<3;x++)         //inciso a
 {for(y=0;y<3;y++)
  {for(z=0;z<5;z++)
   {prom=prom+a[x][y][z];
   }
   promanual=prom/5;
   if(promanual>prommay)
   {prommay=promanual;
   nea=x+1;
   }
  }
 }
printf("\nEl estado que tuvo en promedio la mayor temperatura durante los ultimos 3 a\xA4os fue el estado %i y su promedio fue: %i",nea,prommay);
men=100;               //inciso b
for(x=0;x<3;x++) 
 {for(y=0;y<3;y++)
  {for(z=0;z<5;z++)
    {if(z<5)
	prom=prom+a[x][y][z];
    else 
	{promanual=prom/5;
	if(y==2)
     {if(promanual<men)
       {
	   men=promanual;
        neb=x+1;
	   }
     }
    }
   }
  }
}
printf("\nEl estado que tuvo en promedio la menor temperatura en el ultimo a\xA4o fue el estado %i y su promedio fue: %i",neb,men);
mayor73=0;              //inciso c
 for(x=0;x<3;x++) 
 {for(y=0;y<3;y++)
  {for(z=0;z<5;z++)
    {if(x=0&&y==0)
	  {if(a[x][y][z]>mayor73)
       {mayor73=a[x][y][z];
       nm=z+1;
	   }
      }
	}
   }
  }
printf("\nEl mes que tuvo en promedio la mayor temperatura en el estado 1 del a\xA4o 1 fue el mes %i y su promedio fue: %i\n",nm,mayor73);
menor85=100;              //inciso d
 for(x=0;x<3;x++) 
 {for(y=0;y<3;y++)
  {for(z=0;z<5;z++)
    {if(y==1)
     {if(a[x][y][z]<menor85)
       {menor85=a[x][y][z];
       nmes=z+1;
       es=x+1;
	   }
     }
   }
  }
 }
printf("\nEl mes que tuvo en promedio la menor temperatura del a\xA4o 2 fue el mes %i del estado %i y su promedio fue: %i\n",nmes,es,menor85);
system("pause");
}

