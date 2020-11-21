#include<iostream>

using namespace std;
int main()
{
    int arreglo[51];
    for (int i = 0; i < 50; i++)
    {
        arreglo[i]= i+ (i+2);
        
    }
    for (int i = 0; i < 50; i++)
    {
        cout<<arreglo[i]<<" ";
        
    }
}