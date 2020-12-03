#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int n=4,m=5;

    

    int matrizA[n][m];
     
    
    srand (time(NULL));
    cout<<endl<<endl<<"matriz ="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            matrizA[0][0] = 0;
            matrizA[0][1] = 1;
            
            matrizA[i][j]= matrizA[i-1][j-1]+matrizA[i-2][j-2];
           
            
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