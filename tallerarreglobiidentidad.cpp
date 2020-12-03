#include <iostream>
       

using namespace std;

int main()
{
    int n=4;

    

    int matrizA[n][n];
    
    cout<<endl<<endl<<"matriz ="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrizA[i][j] = 0;
            if (i==j)
            {
                matrizA[i][j]=1;
            }
            
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrizA[i][j]<<" ";

            
        }cout<<endl;
    }

   
    
    

}