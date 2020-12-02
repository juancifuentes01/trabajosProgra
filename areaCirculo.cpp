#include <iostream>
#include <math.h>

using namespace std;

float area (float radio);

int main ()
{
float r;
cout<<"ingrese el valor del radio en metros "<<endl;
cin>>r;
cout<<" El area de el circulo es = " << area(r) <<endl;
}

float area (float radio)
{
float a = M_PI * (radio*radio) ;
return a;
}
