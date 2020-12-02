#include<iostream>
#include<math.h>

using namespace std;

int nfactorial(int numero);

int main ()
{
   int n=0,f=0;
   cout<< " Ingrese el valor al que desea calcular el factorial =  "<<endl;
   cin>>n;
   f=n;
   for (int i = n-1; i>=1; i--)
   {
       f=f*i;

   }
cout<<"el factorial es "<< nfactorial(n) <<endl;


}

int nfactorial(int numero)
{
    int factorial=numero;
for (int i = numero-1; i>=1; i--)
   {
    
    factorial=factorial*i;

   }
   return factorial;
}