#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
int f,c; 
cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>f;

cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>c;   

int matrizA [f][c],i,j,menor=0;

cout<<" Llene su mtariz indicada= " <<endl;

for ( i = 0; i < f; i++)
{
    for ( j = 0; j < c; j++)
    {
        cin>> matrizA[i][j];
    }
}
cout<< "impresion de la matriz= " <<endl;
for ( i = 0; i < f; i++)
{
    for ( j = 0; j < c; j++)
    {
        cout<< matrizA[i][j];
    }
    cout<<" "<<endl;
}
 menor = matrizA [0][0];
 for ( i = 0; i < f; i++)
{
    for ( j = 0; j < c; j++)
    {
        if (menor>matrizA[i][j])
        {
            menor=matrizA[i][j];
        }
        
    }

}
cout<<" \n El valor menor es = " << menor << endl;
system ("PAUSE");
return 0;
}
