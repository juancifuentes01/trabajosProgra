#include<iostream>
#include<math.h>

using namespace std;

void raices (float entrada1,float entrada2 ,float entrada3,float &salida1,float &salida2);

int main()
{
float a,b,c;
float x1,x2;
cout<<"Programa para calcular las raices de un polinomio de la forma a*x^2 +b*x + c = 0"<<endl;
cout<<"Ingrese el valor de a"<<endl;
cin>>a;
cout<<"Ingrese el valor de b"<<endl;
cin>>b;
cout<<"Ingrese el valor de c"<<endl;
cin>>c;
raices(a,b,c,x1,x2);
cout<< " x1 = " << x1 <<endl;
cout<< " x2 = " << x2 <<endl;
}

void raices (float entrada1,float entrada2 ,float entrada3,float &salida1,float &salida2)
{
salida1= (-entrada2+sqrt(pow(entrada2,2)-4*entrada1*entrada3))/(2*entrada1);
salida2= (-entrada2-sqrt(pow(entrada2,2)-4*entrada1*entrada3))/(2*entrada1);
}