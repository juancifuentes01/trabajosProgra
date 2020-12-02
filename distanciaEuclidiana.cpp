#include <iostream>
#include <math.h>

using namespace std;
float distancia (float x1,float x2,float y1,float y2);

int main ()

{
float a,b,c,d;
cout<<"Calcule la distancia euclidiana"<<endl;
cout<< "Ingrese los puntos"<<endl;
cout<<"x1"<<endl;
cin>>a;
cout<<"x2"<<endl;
cin>>b;
cout<<"y1"<<endl;
cin>>c;
cout<<"y2"<<endl;
cin>>d;
cout<< " la distancia euclidiana es = " << distancia(a,b,c,d) <<endl;
}
float distancia (float x1,float x2,float y1,float y2)
{

float e= sqrt(pow (x2-x1, 2.) + pow (y2-y1, 2.));
return e;

}