#include <iostream> 
#include <math.h>

using namespace std; 

float FunUno (int tmay);
float FunDos (int x1, int x2);
float FunTres (int x);
float tabular(int tmay);
float tabu (int uno, int cinco);

int main() 
{ 
     int a, b, tmay;
     int op;

     do
     {
     cout<<"¿Que funcion desea aplicar? \n- 1era Funcion - 2nda Funcion - 3ra Funcion \nSI DESEA SALIR INGRESE EL NUMERO 0\n "; 
	 cout<<"Elija su opcion: ";cin>>op; 
     
     switch (op)
     
     {
         case 0:
         cout<<"Elegiste Salir\n";
         break;
         
         case 1:
         cout<<"Usted eligio la 1era Funcion\n";
         cout<< "Ingrese el limite a tabular: \n";
         cin>>tmay;
         FunUno(tmay);
         break;
         
         case 2:
         cout<<"Usted eligio  la 2nda Funcion\n";
         cout << "Ingrese el valor de x: \n"; 
         tabu(1,5);
         break;
         
         case 3:
         cout<< "Ingrese el limite a tabular: \n";
         cin>>tmay;
         tabular(tmay);
         break;
         
         default:
         cout<<"No Compylation!\n";
         break;
     }
     
     }while(op!=0); 
     return op;
} 

float FunUno(int tmay)

{
    float a;
    float b;
    float res=0;
  
    for(int x=0; x<=tmay; x++)
    {
    a=sqrt(2*(x*x));
    b=pow(a,.333);
    res=b/((2*x)-3);
   cout<<"f("<<x<<") "<<res<<endl;
    }
}

float tabu (int uno, int cinco)

{
    int x,y;
    for(x=1; x<=5; x++)
    {
        for(y=1; y<=5; y++)
        {
            cout<<"f("<<x<<y<<")\t"<<FunDos(x,y)<<endl;
        }
    }
}

float FunDos (int x1, int x2)

{
    int res;
    res=(2*(x1*x2))-3*x2;
    return res;
}

float tabular(int tmay)

{
    for(int x=0; x<=tmay; x++)
    {
       	    cout<<"f("<<x<<")\t"<<FunTres(x)<<endl;
    }
}

float FunTres(int x)

{
   if(x<=0)
        return 3*pow(x,2);
    else
        return 2*pow(x,3);
}
