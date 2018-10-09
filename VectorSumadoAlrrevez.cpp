#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int vector[10];
    int num;
    int suma=0;
    
    //Llenar
    
    cout<<"Ingresa un numero: ";
    cin>>num;
    
    for(int i=0; i<10; i++)
        vector[i]=num++;
    for(int i=0; i<10; i++)
        cout<<i<<" "<<vector[i]<<endl;
    
    //SUMA
    
    for(int i=0; i<10; i++)
        {
        suma+=vector[i];
        }
        cout<<"Suma: "<<suma<<endl;
    //Alreves
    
    for(int i=9; i>=0; i--)
        cout<<i<<" "<<vector[i]<<endl;
    
    return 0;
}
