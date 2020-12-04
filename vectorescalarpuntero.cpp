#include<iostream>

using namespace std;

int main()
{
    int n=50;
    int a;
    int arregloa[n];
    int *parregloa= &arregloa[0];
    cout<<"Ingrese el escalar"<<endl;
    cin>>a;
    for (int i = 0; i < n ; i++)
    {
        
        int parregloa=i*a;

        cout<<i<<"x"<<a<<"="<<parregloa<<endl;
    }
    
}