/*Programa para realizar operaciones entre dos numeros, si el primero es igual al segundo, se multiplican, si el primero es mayor al segundo, se restan, si el primero es menor, se dividen*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iomanip>
//Operadores aritmeticos
using namespace std;
int main()
{float num1,num2,res;
system("color 80");
//peticion de datos
/*El usuario debe oprimir la tecla entrada*/
cout<<"Programa para realizar operaciones entre dos numeros\nSi el primero es igual al segundo, se multiplican\nSi el primero es mayor al segundo, se restan\nSi el primero es menor, se dividen\n";
cout<<"Dame el primer numero: ";
cin>>num1;
cout<<"Dame el segundo numero: ";
cin>>num2;
//Comparacion de datos recibidos
if(num1==num2)
res=num1*num2;
else
    if(num1>num2)
      res=num1-num2;
    else res=num1/num2;
cout<<"\n\nEl resultado es: "<<setprecision(3)<<res<<endl;
system ("pause");
}

