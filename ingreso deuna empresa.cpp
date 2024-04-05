/*programa para calcular intereses de una empresa*/
/*programa para calcular intereses de una empresa*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iomanip>

#define ansi_color_yellow  "\x1b[33m"
#define ansi_color_green  "\x1b[32m"
#define ansi_color_red  "\x1b[31m"
#define ansi_color_cyan  "\x1b[36m"
using namespace std;
int main()
{int x,y,nc,z,g,i,p;
float ingreso[3][100],gasto[3][100],lim[100],lim2[100],gastos,cant,totali,totalg,pagoiva,intereses,isr;
system("color 0a");
p=0;
cout<<"INGRESOS DE LA EMPRESA: \n\n"ansi_color_red "PRESIONA 0 PARA TERMINAR\n"ansi_color_green;
for(x=0;x<3;x++)
{cout<<"Dia "<<x+1<<": ";
y=0;
cant=1;
while(cant!=0)
 {cout<<"\nCliente "<<y+1<<": ";
  cin>>cant;
  ingreso[x][y]=cant;
  totali=totali+ingreso[x][y];
  lim[p]=y;
  y++;
  p++;
  }
 }

 p=0;
cout<<ansi_color_yellow "GASTOS DE LA EMPRESA: \nPRESIONA 0 PARA TERMINAR\n";
for(x=0;x<3;x++)
{cout<<"Dia "<<x+1<<": ";
 z=0;
cant=1;
while(cant!=0)
 {cout<<"\nGasto "<<z+1<<": ";
 cin>>cant;
 gasto[x][z]=cant;
  totalg=totalg+gasto[x][z];
  lim2[p]=z;
  p++;
  z++;
 }
}
intereses=(totali-totalg);



 cout<<ansi_color_green"\nLos ingresos diarios fueron:\n";
for(x=0;x<3;x++)
{cout<<"\nDia "<<x+1<<": ";
 for(i=0;i<lim[p];i++)
 {cout<<ingreso[x][i];
}
}

cout<<ansi_color_cyan"\n\nLos gastos diarios fueron:\n";
for(x=0;x<3;x++)
{cout<<"\nDia "<<x+1<<": ";
 for(g=0;g<lim2[p];g++)    
 {cout<<gasto[x][g];
 }
}
pagoiva=(totali*.16);
isr=intereses*.30;
cout<<ansi_color_red"\nEl total de iva que se pagara es de: "<<pagoiva<<endl;
cout<<ansi_color_yellow"\nEl total de gastos de la empresa son: "<<totalg<<endl;
cout<<ansi_color_green"\n\nLos intereses fueron: "<<intereses<<endl;
cout<<ansi_color_cyan"\nY el impuesto sobre la renta (ISR) es:"<<isr<<endl;
system("pause");
}


