#include <iostream>
#include <math.h>
#include<cmath>
#define PI 3.14159265
using namespace std;

void funcionareacirculoreferencia(double entrada1, double entrada2, float &salida1);

int main()
{
    double entrada1, entrada2;
    float salida1;
    
    cout<<"este programa le da el area de un circulo"<<endl;
    cout<<"por favor ingrese el radio del circulo"<<endl;
    cin>>entrada1;
    
    funcionareacirculoreferencia(entrada1,entrada2,salida1);
    cout<<"el area es "<< salida1<<endl;
    

}
void funcionareacirculoreferencia(double entrada1, double entrada2, float &salida1)
{
    salida1=(PI*(entrada1*entrada1));
    
    

}
