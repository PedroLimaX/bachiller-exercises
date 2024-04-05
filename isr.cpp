/*programa para calcular intereses de una empresa*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iomanip>
using namespace std;
int main()
{int x,y,nc,z;
float may,totali,totalg,ingreso[3][100],gas[3][100],gasto,pagoiva,isr,intereses,diamay,cant;
system("color 0a");
totali=0;
totalg=0;
may=0;
cout<<"Dame los ingresos: \n\nPRESIONA 0 PARA TERMINAR";
cant=1;
for(y=0;y<3;y++)
{x=0;
while(cant!=0)
 {cout<<"\n\acliente "<<x+1<<": ";
  cin>>cant;
  ingreso[y][x]=cant;
  if(ingreso[y][x]>may)
  {may=ingreso[y][x];
   nc=x+1;
  }
  totali=totali+ingreso[y][x];
 }
}
cout<<"Dame los gastos: \nPRESIONA 0 PARA TERMINAR\n";
cant=1;
for(y=0;y<3;y++)
{z=0;
while(cant!=0)
 {cout<<"\n\agasto "<<z+1<<": ";
 cin>>cant;
 gas[y][z]=cant;

 z++;
 }
}
pagoiva=(totali*.16);
intereses=(totali-totalg);
if(intereses>=0.01&&intereses<=496.07)
isr=0.00;
else
  if(intereses<=4210.41)
   isr=9.52;
  else
    if(intereses<=7399.42)
     isr=247.24;
    else
      if(intereses<=8601.50)
       isr=594.21;
      else
        if(intereses<=10298.35)
         isr=786.54;
        else
          if(intereses<=20770.29)
           isr=1090.61;
          else
            if(intereses<=32736.83)
             isr=3327.42;
            else
              if(intereses<=62500)
               isr=6141.95;
              else
                if(intereses<=83333.33)
                 isr=15070.90;
                else
                  if(intereses<=250000)
                   isr=21737.57;
                  else
                    isr=78404.23;

cout<<"\nLos ingresos dados fueron:\n";
for(y=0;y<x;y++)
{cout<<y+1<<":"<<ingreso[y][x]<<endl;
}
cout<<"\nLos gastos dados fueron:\n";
for(y=0;y<z;y++)
{cout<<y+1<<":"<<gas[y][z]<<endl;
}
cout<<"\nEl total de iva que se pagara es de: "<<pagoiva<<endl;
cout<<"\n\nLos intereses fueron: "<<intereses<<" y el impuesto sobre la renta (ISR) es:"<<isr<<endl;
cout<<"\nEl mayor ingreso fue:"<<may<<" y el cliente fue : "<<nc<<endl;
system("pause");
}

