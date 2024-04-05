/*Programa para almacenas temperaturas de los ultihmmos 50 años de los 32 estados*/
#include<stdio.h>
#include<conio.h>
#include<string>
main()
{int x,y,z,a[3][3][5],tem,c,nea,neb,nm,nmes,an,mayor73,menor85,prommay,promanual[2][2],prom[5],may,men,mayor,es;
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
printf("\nEl mes que tuvo en promedio la menor temperatura del a\xA4o 2 fue el mes %i del estado %i y su promedio fue: %i\n",nmes,es,menor85);
getch();
return 0;
}

