#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main ()

{
int i,num1;
float var=0, desv=0,med=0,suma=0;
float arreglo1[num1];

cout<< " Ingrese los datos a evaluar " << endl;
cin>>num1;
for ( i = 0; i <num1 ; i++)
{
    cin>>arreglo1[i];

}
for ( i = 0; i < num1; i++)
{
    suma += arreglo1[i];
}

med = suma/num1;

for (i = 0; i < num1; i++)
{
    var = var + pow ((arreglo1[i]-med),2);
}

desv = sqrt (var/(num1-1));
cout<<" La desviacion estandar de los valores es = " << desv <<endl;

}