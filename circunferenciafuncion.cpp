#include<iostream>
#include<math.h>

using namespace std;

void cash(double entrada1,float &salida1,float &salida2);

int main()
{
double diam;
float r,a;
cout<<"Radio y area de un circulo"<<endl;
cout<<"ingrese el diametro"<<endl;
cin>>diam;
cash(diam,r,a);
cout<<"Radio "<<r<<endl;
cout<<"Area "<<a<<endl;

}

void cash(double entrada1,float &salida1,float &salida2)
{
salida1=entrada1/2;
salida2= M_PI * pow (entrada1/2,2);

}

