#include<iostream>
using namespace std;

int main ()
{
int arreglo1[20];
int a = 1, b = 0, lim, init;
  cout << "Ingrese un numero para la sucesion de fibonacci: ";
  cin >> lim;
  if(lim > 0) 
  {
    for(init = 1; init <= lim; init++) 
    {
      a += b; 
      b = a - b;
      arreglo1[init]=b;
       cout << arreglo1[init] << endl ;
    }
  }
   else 
   {
    cout << "El numero debe ser mayor a cero!!" << endl;
  }
  cout << "\n";
  return 0;








}

