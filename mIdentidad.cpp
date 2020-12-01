#include <iostream>
 using namespace std;

 int main ()

 {
   
   int f,c;
cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>f;

cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>c;   

   int matrizA[f][c],i,j;

 cout<<"matriz identidad ="<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            matrizA[i][j] = 0;
            if (i==j)
            {
                matrizA[i][j]=1;
            }
            
        }
    }

    for(i=0;i<f;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<matrizA[i][j]<<" ";

            
        }cout<<endl;
    }

   
    
    

}



 