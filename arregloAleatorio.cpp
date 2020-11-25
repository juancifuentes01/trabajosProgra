#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main ()

{

int arregloAleatorio[10];
srand (time(NULL));
for (int i = 0; i <10; i++)
{
    arregloAleatorio[i] = rand() % 10+1;
}
for (int i = 0; i <10; i++)
{
   cout<< arregloAleatorio[i]<<" "<<endl;
}

}