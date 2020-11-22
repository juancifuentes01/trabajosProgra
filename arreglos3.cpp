#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
int n;
float arreglo1[50];
cout<<"Ingrese el valor del escalar por el cual desee multiplicar"<<endl <<endl;
cin>>n;
for (int i = 0; i < 49; i++)
{
    arreglo1[i]=i*n;
    cout<<arreglo1[i]<<endl;
}
getch();
return 0;
}





