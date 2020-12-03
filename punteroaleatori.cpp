#include<iostream>

using namespace std;
int main()
{
    int arregloaleatorio[15];
    int *parregloa= &arregloaleatorio[0];

    for (int i = 0; i < 15; i++)
    {
        int parregloa = rand ()% 15+1;
        cout<< parregloa <<" ";

    }
    
    
}