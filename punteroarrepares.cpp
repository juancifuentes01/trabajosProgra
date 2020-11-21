#include<iostream>
using namespace std;

int main()
{
    int n=50, suma=0;
    int arregloa[n];
    int *parregloa= &arregloa[0];

  
    for (int i = 0; i < n ; i++)
    {
        int parregloa=i+(i+2);

        cout<<parregloa<<" ";
    }
    
   
    
}