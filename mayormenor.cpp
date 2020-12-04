#include <iostream>


using namespace std;

void funcionnm(double entrada1, double entrada2, double entrada3, float &salida1, float &salida2, float &salida3,float &salida4);

int main()
{
    double n1, n2, n3;
    float s1, s2, s3, s4;
    
  
   
    cout<<"por favor ingrese el primer numero "<<endl;
    cin>>n1;
    cout<<"por favor ingrese el primer numero "<<endl;
    cin>>n2;
    cout<<"por favor ingrese el primer numero "<<endl;
    cin>>n3;

    
    funcionnm(n1,n2,n3,s1,s2,s3, s4);
    cout<<"el mayor es "<< s4<<endl;
    cout<<"el menor es "<< s2<<endl;
    
    

}
void funcionnm(double entrada1, double entrada2, double entrada3, float &salida1, float &salida2, float &salida3, float &salida4)
{
  
    if (salida1>salida2)
    {
        salida1=entrada1;
        salida2=entrada2;
    }
    else
    {
        salida1=entrada2;
        salida2=entrada1;
    }
    if (salida1>entrada3)
    {
        if (salida2>entrada3)
        {
            salida3=salida2;
            salida2=entrada3;
        }
        else
        {
            salida3=salida2;
        }
        
        
    }
    else
    {
        salida3=salida4;
        salida4=entrada3;
    }
    
    
    
    

}
