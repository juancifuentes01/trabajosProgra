#include<iostream>
using namespace std;

int main()
{
    int n=4, suma=0;
    int arregloa[n];
    int *parregloa= &arregloa[0];
    
    

  
    for (int i = 0; i < n ; i++)
    {
        int parregloa=i+(i+1);
        
        cout<<parregloa<<" ";
        cout<<endl;
       suma=suma+parregloa;
       
        
    }cout<<suma;
    
 
    
   
    
}