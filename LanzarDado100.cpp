#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int lanzardado();
void Histograma(int dato);

int main()
{
    srand(time(0));
    int dado,dato;
    int  vec[6]={0};
    for(int i=0; i<=100; i++)
    {
        vec[lanzardado()-1]++;
    }
    for(int i=0; i<=5; i++)
    {
        cout<<i+1<<" Toco "<<vec[i]<<" ";Histograma(vec[i]);cout<<endl;
    }
    
    
    return 0;
}

int lanzardado()
{
    int res=0;
    res=1+rand()%6;
    return res;
}

void Histograma(int dato)
{
    for(int i=0; i<=dato; i++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
}
