#include <iostream>
#include <math.h>
#include<cmath>
#define PI 3.14159265
using namespace std;

void funcionpolarreferencia(double entrada1, double entrada2, double entrada3, float &salida1, float &salida2);

int main()
{
    double entrada1, entrada2, entrada3;
    float salida1, salida2;
    
    cout<<"este programa cambia las coordenas rectangulares a polares"<<endl;
    cout<<"por favor ingrese el primer numero de las coordenadas(x)"<<endl;
    cin>>entrada1;
    cout<<"por favor ingrese el segundo numero de las coordenadas(y)"<<endl;
    cin>>entrada2;
    funcionpolarreferencia(entrada1,entrada2,entrada3,salida1,salida2);
    cout<<"el radio es "<< salida1<<endl;
    cout<<"el angulo es "<<salida2<<endl;
    

}
void funcionpolarreferencia(double entrada1, double entrada2, double entrada3, float &salida1, float &salida2)
{
    salida1=sqrt(pow (entrada1, 2.) +pow (entrada2, 2.));
    entrada3=entrada2/entrada1;
    salida2= atan(entrada3)* 180 / PI;;
    

}

