#include <iostream>


using namespace std;

void funcionmenormayorreferencia(double entrada1, double entrada2, double entrada3, float &salida1, float &salida2, float &salida3,float &salida4);

int main()
{
    double entrada1, entrada2, entrada3;
    float salida1, salida2, salida3, salida4;
    
    cout<<"este programa le permite ingresar 3 numeros y se le dira el mayor y el menor"<<endl;
   
    cout<<"por favor ingrese el primer numero "<<endl;
    cin>>entrada1;
    cout<<"por favor ingrese el primer numero "<<endl;
    cin>>entrada2;
    cout<<"por favor ingrese el primer numero "<<endl;
    cin>>entrada3;

    
    funcionmenormayorreferencia(entrada1,entrada2,entrada3,salida1,salida2,salida3, salida4);
    cout<<"el mayor es "<< salida4<<endl;
    cout<<"el menor es "<< salida2<<endl;
    
    

}
void funcionmenormayorreferencia(double entrada1, double entrada2, double entrada3, float &salida1, float &salida2, float &salida3, float &salida4)
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