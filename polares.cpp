#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void polar (double entrada1,double entrada2,double entrada3,float &salida1,float &salida2);

int main ()

{
double x,y,z;
float r,a;
cout<<"programa para pasar de (x,y) a (r,teta)"<<endl;
cout<<"ingrese el valor de (x)"<<endl;
cin>>x;
cout<<"ingrese el valor de (y)"<<endl;
cin>>y;
polar(x,y,z,r,a);
cout<<"La conversion a polar es: "<<endl;
cout<<"("<<r<<","<<a<<")"<<endl;

}

void polar (double entrada1,double entrada2,double entrada3,float &salida1,float &salida2)
{
 entrada3= entrada2/entrada1;
 salida1= sqrt(pow (entrada1, 2.) + pow (entrada2, 2.));
 salida2= atan(entrada3)* 180 / M_PI;
}

