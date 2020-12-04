#include<iostream>
#include<time.h>

using namespace std;
int main()
{
    int n=15;
    int arregloaleatorio[n], par=0;
    int *parregloa=&arregloaleatorio[0];

    for (int i = 0; i < n; i++)
    {
    int parregloa = rand ()% n+1;
     cout<<parregloa<<" ";
}