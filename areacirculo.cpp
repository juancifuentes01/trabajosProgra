#include<iostream>
#include<math.h>

using namespace std;

float area( float radio);

int main ()
{
    float radio;
    cout<<"con este programa puede calcular el area de un circulo"<<endl;
    cout<<"por favor escriba el valor del radio"<<endl;
    cin>>radio;

    cout<<"el area del circulo es "<<area(radio);
    
   
}
float area( float radio)
{
    float are=(3.14*(radio*radio));
    return are;
}


