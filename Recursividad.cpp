#include<iostream>

using namespace std;

int funcion(int x);

int main()
{
    for(int i=1; i<=5; i++) 
        cout<<i<<"\t"<<funcion(i)<<endl;
    return 0;
}

int funcion(int x)

{   
    if(x<1)
    {
    return 1;
    }
    else
    return x*funcion(x-1);
}