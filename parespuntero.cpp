#include<iostream>

using namespace std;

int main()
{
    int n=100;
    int arregloa[n];
    int *parregloa= &arregloa[0];

    for (int i = 0; i < n ; i+=2)
    {
        int parregloa=i;

        cout<<parregloa<<endl;
    }
    
}