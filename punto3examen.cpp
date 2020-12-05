#include<iostream>

using namespace std;

int ecuacion1(int s)
{
    if(s<2)
        return 1;
    else
        return s * ecuacion1(s-1);
}

int ecuacion2(int s, int t)
{
    if(t==1)
        return s;
    else
    {
        if(s==t)
            return 1;
        else
            return ecuacion1(s) / (ecuacion1(t) * ecuacion1(s- t));
    }
}

int main()
{
    int filas,suma, desde, hasta, sumat;
    cout<<"por favor escriba el numero de filas que quiere ver del triangulo de pascal que quiere ver"<<endl;
    cin>>filas;

    for(int i=0; i<=filas-1; i++)
    {
        for(int j=0; j<=i; j++)
           
      cout << ecuacion2(i, j) << "  ";
        cout << endl;
    }

    
    cout<<"por favor escriba desde que fila quiere hacer la sumar"<<endl;
    cin>>desde;
    cout<<"por favor escriba hasta que fila quiere hacer la sumar"<<endl;
    cin>>hasta;

    for(int i=desde-1; i<=hasta-1; i++)
    {
        for(int j=0; j<=i; j++)

        suma=suma+ecuacion2(i,j);
        

           
      
    }
    
    cout <<"la suma es "<< suma << "  ";
        cout << endl;

    
    return 0;
}