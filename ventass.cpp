#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;
int x=0, a,nemay;
float aumento;
double may;
char y,nombremay;

struct empleados
{
int ne;
string nombre;
double venta1;
double venta2;
double venta3;
double venta4;
double venta5;
double venta6;
float sal;
double total;
float salt;
}
datosempleado[100];
float aceptadatos()
{system("color 0a");

y='s';
while(y=='s')
{
cout<<"Clave: ";
cin>>datosempleado[a].ne;
cout<<"\nNombre del empleado: ";
cin>>datosempleado[a].nombre;
cout<<"\nVenta del mes de junio: ";
cin>>datosempleado[a].venta1;
cout<<"\nVenta del mes de julio: ";
cin>>datosempleado[a].venta2;
cout<<"\nVenta del mes de agosto: ";
cin>>datosempleado[a].venta3;
cout<<"\nVenta del mes de septiembre: ";
cin>>datosempleado[a].venta4;
cout<<"\nVenta del mes de octubre: ";
cin>>datosempleado[a].venta5;
cout<<"\nVenta del mes de noviembre: ";
cin>>datosempleado[a].venta6;
cout<<"\nSalario: ";
cin>>datosempleado[a].sal;
datosempleado[a].total = datosempleado[a].venta1 + datosempleado[a].venta2 + datosempleado[a].venta3 + datosempleado[a].venta4 + datosempleado[a].venta5 + datosempleado[a].venta6;
a++;
cout<<"si desea continuar presione s \n n si no desea continuar: \t";
cin>>y;
}
return(0);
}
float ventasmayores()
{string nombremay;
may=0;
for(x=0;x<a;x++)
{
if(may<datosempleado[x].total)
{may=datosempleado[x].total;
nemay=datosempleado[x].ne;
nombremay=datosempleado[x].nombre;
}

}
cout<<"\n LA CLAVE DEL EMPLEADO CON MAYORES VENTAS ES: "<<nemay<<"\t\tEL NOMBRE ES: "<<nombremay<<"\t\tCON UN TOTAL DE: "<<may<<endl;
return(0);
}
float escriberesultado()
{
cout<<"\nLos datos capturados y almacenados en un registro son:\n\n";
cout<<"Clave Nombre  Junio Julio Agosto Septiembre Octubre Noviembre Salario Ventas ";
for(x=0;x<a;x++)
{
cout<<"\n"<<datosempleado[x].ne<<"\t";
cout<<datosempleado[x].nombre<<"\t";
cout<<datosempleado[x].venta1<<"\t"<<datosempleado[x].venta2<<"\t";
cout<<datosempleado[x].venta3<<"\t"<<datosempleado[x].venta4<<"\t";
cout<<datosempleado[x].venta5<<"\t"<<datosempleado[x].venta6<<"\t";
cout<<datosempleado[x].sal<<"\t"<<datosempleado[x].total<<endl;
}
return(0);
}
float incremento()
{ cout<<"Los empleados con incremento de 10% en su salario son :\n";
cout<<"Clave Nombre Salario\n";
for(x=0;x<a;x++)
{ if(datosempleado[x].total>100000)
{ aumento=datosempleado[x].sal*.10;
datosempleado[x].salt=datosempleado[x].sal+aumento;
cout<<datosempleado[x].ne<<"\t"<<datosempleado[x].nombre<<"\t"<<datosempleado[x].salt<<endl;
}

}
return(0);
}
float ventamenor()
{cout<<"Los empleados con ventas menores a 30000 en el mes de agosto fueron:\n";
 cout<<"Clave   Nombre    Venta de Agosoto\n";
for(x=0;x<a;x++)
{if(datosempleado[x].venta3<30000)
cout<<datosempleado[x].ne<<"\t"<<datosempleado[x].nombre<<"\t"<<datosempleado[x].venta3<<endl;
}
return(0);
}
int main()
{
aceptadatos();
system("cls");
escriberesultado();
system("pause");
system("cls");
ventasmayores();
system("pause");
system("cls");
incremento();
system("pause");
system("cls");
ventamenor();
system("pause");
}



