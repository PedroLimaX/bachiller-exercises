/*Programa para almacenas temperaturas de los ultihmmos 50 años de los 32 estados*/
#include<stdio.h>
#include<conio.h>
#include<string>
/*a) El estado que tuvo en promedio la mayor temperatura durante los últimos 3 años
b) El estado con menor promedio anual de temperatura en el último año
c) En que mes se registró el mayor promedio de temperaturas en el estado 1 en el año 1
d) En que mes y en que estado se registró el menor promedio de temperaturas en el año 2*/
main()
{int x,y,z,a[3][3][5],tem,nea,neb,nm,nmes,an,mayor73,menor85,prommay,promanual[3][3],promanual2[3][3],prom[3][3],may[3],prommen,es;
system("color 0a");
for(x=0;x<3;x++)   //Pedir y almacenar en el arreglo
 {printf("\nEstado %i",x+1);
  for(y=0;y<3;y++)
  {printf("\n\na\xA4o %i",y+1);   //\xA4 es para mostrar la ñ al ejecutar
   for(z=0;z<5;z++)
   {printf("\nmes %i",z+1);
   printf("\nTemperatura :");
   scanf("%i",&tem);
   a[x][y][z]=tem;
   }
  }
 }
prommay=0;
for(x=0;x<3;x++)
{for(y=0;y<3;y++)         //inciso a
  {prom[x][y]=0;
  for(z=0;z<5;z++)
   {switch(y)
    {
    case 0: prom[x][y]=prom[x][y]+a[x][y][z];
    break;
    case 1: prom[x][y]=prom[x][y]+a[x][y][z];
    break;
    case 2: prom[x][y]=prom[x][y]+a[x][y][z];
    break;
    }
   }
  }
}
for(x=0;x<3;x++)
{for(y=0;y<3;y++)
 {promanual[x][y]=prom[x][y]/5;
 }
}
for(x=0;x<3;x++)
{may[x]=0;
 for(y=0;y<3;y++)
 {may[x]=may[x]+promanual[x][y];
 }
}
for(x=0;x<3;x++)
 {if(may[x]/3>prommay)
    {prommay=may[x]/3;
    nea=x+1;
    }
 }
printf("\nEl estado que tuvo en promedio la mayor temperatura durante los ultimos 3 a\xA4os fue el estado %i y su promedio fue: %i",nea,prommay);
for(x=0;x<3;x++)
{for(y=0;y<3;y++)         //inciso b
  {prom[x][y]=0;
  for(z=0;z<5;z++)
   {switch(y)
    {
    case 0: prom[x][y]=prom[x][y]+a[x][y][z];
    break;
    case 1: prom[x][y]=prom[x][y]+a[x][y][z];
    break;
    case 2: prom[x][y]=prom[x][y]+a[x][y][z];
    break;
    }
   }
  }
}
prommen=100;
for(x=0;x<3;x++)
{for(y=0;y<3;y++)
 {promanual2[x][y]=prom[x][y]/5;
 }
}
for(x=0;x<3;x++)
{for(y=0;y<3;y++)
 {if(promanual2[x][2]<prommen)
   {prommen=promanual2[x][2];
    neb=x+1;
   }
 }
}
printf("\nEl estado que tuvo en promedio la menor temperatura en el ultimo a\xA4o fue el estado %i y su promedio fue: %i",neb,prommen);
mayor73=0;              //inciso c
 for(x=0;x<1;x++) 
 {for(y=0;y<1;y++)
  {for(z=0;z<5;z++)
	  {if(a[x][y][z]>mayor73)
       {mayor73=a[x][y][z];
       nm=z+1;
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
getch();
return 0;
}

