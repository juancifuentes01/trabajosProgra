#include <iostream>
#include <math.h>
#include<cmath>
#define PI 3.14159265
using namespace std;

void funcionpolarreferencia(double entrada1, float &salida1, float &salida2);

int main()
{
    double entrada1;
    float salida1, salida2;
    
    cout<<"este programa calcula el cambio de pesos a dolares y euros"<<endl;
    cout<<"por favor ingrese el valor en pesos que quiere cambiar"<<endl;
    cin>>entrada1;
   
    funcionpolarreferencia(entrada1,salida1,salida2);
    cout<<"el cambio en dolares es "<< salida1<<endl;
    cout<<"el cambio en euros es "<<salida2<<endl;
    

}
void funcionpolarreferencia(double entrada1, float &salida1, float &salida2)
{
    salida1=entrada1/(3535);
    
    salida2=entrada1/(4275);
    

}

