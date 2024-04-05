/*Programa para los nius*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string>
#include<iomanip>
using namespace std;
int main()   
{string nombre,ap,am;
system("color 80");
cout<<"\nComo se llama tu nombre : ";
cin>>nombre;
system("color 80");
cout<<"\nApellido paterno: ";
cin>>ap;
system("color 80");
cout<<"\nApellido materno: ";
cin>>am;
system("color 80");
system("cls");
cout<<"\nBienvenido a CBTis 61, "<<nombre<<" "<<ap<<" "<<am;
cout<<", chingue usted a su madre :)"<<endl<<right;
system("pause");
}


