#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int n=3;

    

    int matrizA[n][n];
    srand (time(NULL));
    cout<<endl<<endl<<"matriz ="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrizA[i][j] =  rand() % 10 + 1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrizA[i][j]<<" ";

            
        }cout<<endl;
    }

    int menor=matrizA[0][0];

    for (int i = 0; i < n; i++)
    {
       
        for(int j=0;j<n;j++)
        {
            if (matrizA[i][j]< menor)
            {
                menor=matrizA[i][j];
                
            }
            
        }
      
            
        
    }
    cout<<"el numero menor es "<< menor<<endl;
    cout<<endl;
    
    

}