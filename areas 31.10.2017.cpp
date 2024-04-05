#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

#define ansi_color_red     "\x1b[31m"
#define ansi_color_green	"\x1b[32m"
using namespace std;
int  i=0,area=0,cant;
 float base, altura, radio, resultado;
struct figura{
	int op;
 	float base;
 	float altura;
 	float radio;
 	float area;
	}
datosfig[4];
int nombrefig(){
	system("color 0a");
	cout<<"Elige una figura"<<"\n1. circulo\n2. cuadrado\n3. rectangulo\n4. triangulo\n\n";
	for(i=0;i<1;i++){
	cin>>datosfig[0].op;
	if(datosfig[0].op==1){
		cout<<"\nMedida del radio: ";
 		cin>>radio;
 		resultado=3.14*(radio*radio);
 		datosfig[0].area=resultado;
		}
	else
 		if(datosfig[0].op==2){
			cout<<"Medida de un lado: ";
 			cin>>base;
 			resultado=(base*base);
 			datosfig[0].area=resultado;
 			}
 		else
 			 if(datosfig[0].op==3){
			  	cout<<"Medida de la base: ";
  				cin>>base;
  				cout<<"Medida de la altura: ";
  				cin>>altura;
  				resultado=(base*altura);
  				datosfig[0].area=resultado;
  				}
 			else
 				if(datosfig[0].op==4){
				 	cout<<"Medida de la base: ";
 					 cin>>base;
 					 cout<<"Medida de la altura: ";
  					cin>>altura;
  					resultado=(base*altura)/2;
 					datosfig[0].area=resultado;
 					}
 				else {
				 	cout<<ansi_color_red "Opcion equivocada, vuelve a elegir\n\n"ansi_color_green;
  					cout<<"\nESCRBE 0 PARA SALIR\n";
  					cin>>datosfig[0].op;
    			   i--;
   				   }
 fflush(stdin);
	}
return (0);
}
int escriberesultado()
{ cout<<"\nDetalles de la figura elegida: \n\n";
 cout<<" Nombre:        area:  \n";
if(datosfig[0].op==1)
 {cout<<endl<<"Circulo\t\t"<<resultado<<"\n\n";
}
if(datosfig[0].op==2)
 {cout<<endl<<"Cuadrado\t"<<resultado<<"\n\n";
}
if(datosfig[0].op==3)
 {cout<<endl<<"Rectangulo\t"<<resultado<<"\n\n";
}
if(datosfig[0].op==4)
 {cout<<endl<<"Triangulo\t"<<resultado<<"\n\n";
 }
if(datosfig[0].op==0)
{cout<<"\nESCRIBE 0 PARA SALIR\n";
  nombrefig();   
  escriberesultado();
  system ("pause"); 
 }
cout<<"\nESCRIBE 0 PARA SALIR\n";
cin>>datosfig[0].op;
return (0);
}
int repetir()
{while(datosfig[0].op!=0)
 {nombrefig();   
 escriberesultado();
 repetir();
 system ("pause"); 
}
return(0);
}
int main()
{nombrefig();   
 system("cls");
 escriberesultado();
 repetir();
 system ("pause");  
}

