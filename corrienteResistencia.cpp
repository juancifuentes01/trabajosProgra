#include <iostream>
#include <math.h>
using namespace std;

float corriente (float v , float r);

int main() 
{
    float vol,R;
    cout<<"Calcular corriente en una resistencia"<<endl;
    cout<<"Dijite el voltaje en voltios"<<endl;
    cin>>vol;
    cout<<"Dijite la resistencia en ohmnios"<<endl;
    cin>>R;
   cout<<corriente(vol,R)<<"A"<<endl;
}

float corriente (float v , float r)
{
float i = v/r;
return i;

}
