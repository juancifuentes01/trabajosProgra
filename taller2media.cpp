#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cout<<"por favor diga con cuantos numeros va a sacar la media aritmetica"<<endl;
    cin>>n;

    float arreglo[n], resultado, numeros, contador;
     
    cout<<"por favor digite los numeros a los que quiere sacar la media"<<endl;

    for (float  i = 0; i < n; i++)
    {
        cout<<"por favor digite el numero "<< i+1 <<endl;
        cin>>arreglo[n];
        contador=contador+arreglo[n];

    }
    resultado= contador/n;

    cout<<"la media es "<<resultado<<endl;

    
    
    



}