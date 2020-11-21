#include<iostream>
#include<math.h>

using namespace std;

float corriente(float tension, float valor);

int main ()
{
    float tension,valor;
    cout<<"con este programa puede calcular el valor de la corriente en una resistencia"<<endl;
    cout<<"por favor escriba el valor de la tension en voltios"<<endl;
    cin>>tension;
    cout<<"por favor escriva el valor de la resistencia en ohmios"<<endl;
    cin>>valor;
   cout<<corriente(tension,valor)<<endl;
   
}

float corriente(float tension, float valor)
{
    float corri= tension/valor;

    return corri;
}