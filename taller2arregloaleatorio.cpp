#include<iostream>

using namespace std;
int main()
{
    int arregloaleatorio[15];

    for (int i = 0; i < 15; i++)
    {
        arregloaleatorio[i]= rand ()% 15+1;

    }
    for (int i = 0; i < 15; i++)
    {
       cout<<arregloaleatorio[i]<<" ";
    }
    
}