#include <iostream>
#include<stdlib.h>

using namespace std;

int lanzarDado();

int main()
{
    srand(time(NULL));
    for(int i=1; i<=50; i++)
    {
    cout<<lanzarDado()<<"  ";
    }
    return 0;
}

int lanzarDado()

{
    int dado;
    
    dado=1+rand()%6;
    
    return dado; 

}
//lANZAR UN DADO DE 6 CARAS 50 VECES