#include<iostream>
using namespace std;

int main ()
{
int n;
cout<<"ingrese el escalar a multiplicar"<< endl;
cin>>n;
int arreglo1[50];

for (int i = 0; i <49; i++)
{
   arreglo1[i]= i*n ;
   cout<<arreglo1[i]<<endl;
}
}