#include<iostream>

using namespace std;
int main()
{
    int arreglo[50];
    for (int i = 0; i < 49; i++)
    {
        arreglo[i]= i*3;
        
    }
    for (int i = 0; i < 49; i++)
    {
        cout<<arreglo[i]<<" ";
        
    }
}