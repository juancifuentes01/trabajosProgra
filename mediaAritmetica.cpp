#include <iostream>
#include <math.h>
using namespace std;
int main ()

{

int a;
cout<< "ingrse el numero de datos a evaluar"<<endl;
cin>>a;
float tamanoDatos[a] , num1 , suma;
for (int i = 0; i < a; i++)
{
    cout<<" Ingrese el dato "<< i+1 << endl;
    cin>>tamanoDatos[a];
    suma = suma + tamanoDatos[a];
}

cout<<"La media de los datos es : " << suma/a << endl;

}