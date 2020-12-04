#include<iostream>
#include<math.h>

using namespace std;

void cash(double entrada1,float &salida1,float &salida2);

int main()
{
double peso;
float dolar,euro;
cout<<"conversor de pesos a dolares y euros"<<endl;
cout<<"ingrese su valor en pesos"<<endl;
cin>>peso;
cash(peso,dolar,euro);
cout<<"Dolar "<<dolar<<endl;
cout<<"Euro "<<euro<<endl;

}

void cash(double entrada1,float &salida1,float &salida2)
{
salida1=entrada1/3468,50;
salida2=entrada1/4215,58;

}
