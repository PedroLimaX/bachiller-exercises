/*Programa para almacenas temperaturas de los ultihmmos 50 años de los 32 estados*/
#include<stdio.h>
#include<conio.h>
#include<string>
main()
{int x,y,z,a[3][3][5],tem,c,nea,neb,nm,nmes,an,mayor73,menor85,prommay,promanual[3][3],prom[3],may,men,mayor,es;
system("color 0a");
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


prommay=-100;
for(x=0;x<3;x++)
{for(y=0;y<3;y++)         //inciso a
 {for(y=0;y<3;y++)
  prom[y]=0;
  prom[y]=0;

  {for(z=0;z<5;z++)
   {switch(y)
    {
    case 0: {prom[y]=0;
             prom[y]=prom[y]+a[x][y][z];}
    break;
    case 1: {prom[y]=0;
             prom[y]=prom[y]+a[x][y][z];}
    break;
    case 2: {prom[y]=0;
             prom[y]=prom[y]+a[x][y][z];}
    break;
    }
	if(prom[0]>prommay)
	 {prommay=prom[0];
	  nea=x+1;}
	if(prom[1]>prommay)
	 {prommay=prom[1];
	  nea=x+1;}
	if(prom[2]>prommay)
	 {prommay=prom[2];
  	 nea=x+1;}
  }
 }
}
printf("\nEl estado que tuvo en promedio la mayor temperatura durante los ultimos 3 a\xA4os fue el estado y su promedio fue: %i",nea,prommay/5);
men=100;
for(x=0;x<3;x++)
 {for(y=0;y<3;y++)       //inciso b    
  {for(z=0;z<5;z++)
  switch(y)
    {
    case 0: {prom[y]=0;
             prom[y]=prom[y]+a[x][y][z];}
    break;
    case 1: {prom[y]=0;
             prom[y]=prom[y]+a[x][y][z];}
    break;
    case 2: {prom[y]=0;
             prom[y]=prom[y]+a[x][y][z];}
    break;
    }
  }
}
}
      
for(x=0;x<3;x++)
  {if(prom[0]<men)
    {men=prom[0];
	  neb=x+1;}
	if(prom[1]<men)
	 {men=prom[1];
	  neb=x+1;}
	if(prom[2]<men)
	 {men=prom[2];
	  neb=x+1;}
   }
printf("\nEl estado que tuvo en promedio la menor temperatura en el ultimo a\xA4o fue el estado %i y su promedio fue: %i",neb,men/5);
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

