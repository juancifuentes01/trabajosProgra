#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main ()
{
int fila,columna; 
cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>fila;

cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>columna;   

int matrizA [fila][columna],i,j,igual=0,contador=0;
srand (time(NULL));
cout<<" Llene su mtariz indicada= " <<endl;

for ( i = 0; i < fila; i++)
{
    for ( j = 0; j < columna; j++)
    {
         matrizA[i][j] = rand() % 10+1;
    }
}
cout<< "impresion de la matriz= " <<endl;
for ( i = 0; i < fila; i++)
{
    for ( j = 0; j < columna; j++)
    {
        cout<< matrizA[i][j] << " ";
    }
    cout<<" "<<endl;
}

igual = matrizA [0][0];
 for ( i = 0; i < fila; i++)
{
    for ( j = 0; j < columna; j++)
    {
        if (igual == matrizA[i][j])
        {
            
            igual= matrizA[i][j];
            contador++;
            
        }
       
    }
}
    cout<<" El numero repetido es = " << igual<< endl;
    cout<<"El numero se repite = " <<contador<< "veces" <<endl;

system ("PAUSE");
return 0;
} 