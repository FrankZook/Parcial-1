#include<iostream>
#include <math.h>

using namespace std;

int fg(int a, int b, int c, float &x1, float &x2);

int main()
{
    int a, b, c;
    float x1, x2;
    
    cout<<"Leer el valor de A: ";
    cin>>a;
    cout<<"Leer el valor de B: ";
    cin>>b;
    cout<<"Leer el valor de C: ";
    cin>>c;
    if(fg(a,b,c,x1,x2)==0)
        cout<<"Error";
    else
        cout<<"Si hay solucuion"<<x1<<"  "<<x2;
    return 0;
}

int fg(int a, int b, int c, float &x1, float &x2)

{
    float d;
    d=b*b-4*a*c;
    if(d<0)
    {
        return 0;
    }
    else
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        return 1;
    }
    
}



