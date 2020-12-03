#include <iostream>

using namespace std;

int main()
{
    int n = 4, contador=0;
    int arregloA[n][n],arregloB[n][n],arregloC[n][n], arregloD[n][n], arregloE[n][n];
  

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           arregloA[i ][j]  = 4;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           arregloB[i][j]  = contador++;
        }
    }
   

       
    cout<<"Arreglo A"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           cout<<arregloA[ i][j ]<<" ";  
        }cout<<endl;
    }
    cout<<"Arreglo B"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           cout<<arregloB[ i][ j ]<<" ";  
        }cout<<endl;
    }
    int s;
    cout<<"escriba 1 para suma, 2 para resta, 3 para matriz por escalar "<<endl;
    cin>>s;
 if (s=1)
 {

     
 
 
     for(int i = 0; i < n; i++)
     {
        for(int j = 0;j < n; j++)
        {
            arregloC[i][j] = arregloA[i][j]+arregloB[i][j];
        }
     }
     cout<<"Arreglo C"<<endl;
     for(int i = 0; i < n; i++)
     {
        for(int j = 0;j < n; j++)
        {
           cout<<arregloC[ i][ j ]<<" ";  
        }cout<<endl;
     }
     
     
 } 
 if (s=2)
 {
 
      for(int i = 0; i < n; i++)
     {
        for(int j = 0;j < n; j++)
        {
            arregloD[i][j] = arregloA[i][j]-arregloB[i][j];
        }
     }
     cout<<"Arreglo D"<<endl;
     for(int i = 0; i < n; i++)
     {
        for(int j = 0;j < n; j++)
        {
           cout<<arregloD[ i][ j ]<<" ";  
        }cout<<endl;
     }
     
     
 }
 if (s=3)
 {
     int k=5;
      for(int i = 0; i < n; i++)
     {
        for(int j = 0;j < n; j++)
        {
            arregloE[i][j] = arregloA[i][j]*k;
        }
     }
     cout<<"Arreglo D"<<endl;
     for(int i = 0; i < n; i++)
     {
        for(int j = 0;j < n; j++)
        {
           cout<<arregloE[ i][ j ]<<" ";  
        }cout<<endl;
     }
 }
 



}