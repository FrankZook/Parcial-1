using namespace std;
#include<iostream>
#include<conio.h>
main()
{
	char Opm;
	int num, i, base, exp, d, a, b, n1, n2;
	int fact=1;
	int potencia=1;
	
	{
	  cout<<"---Menu---\n";		
      cout<<"[A]Problema1 [B]Problema2 [C]Problema3 [S]alir\n";Opm=getch();
      switch(Opm)
      {
      	case 'A': case 'a':
      		cout<<"Ingrese numero: "; 
			cin>>num;
			for(i=1;i<num+1;i++)
			{
				fact=i*fact;
			}	
				cout<<fact;
			break;
		case 'B': case 'b':
			cout<<"Ingrese la base: ";
			cin>>base;
			cout<<"Ingrese el exponente: ";
			cin>>exp;
			for(i=1; i<=exp; i++)
			{
				potencia=potencia*base;
			}
			cout<<"El resultado es: "<<potencia;
			break;
		case 'C': case 'c':
			int i=0;
            cout<<"Ingresa la poblacion de A (menor que B): ";
            cin>>a;
            cout<<"Ingresa la poblacion de B (mayor que A): ";
            cin>>b;
            if(b<=a && a>=b)
            	cout<<"No valido"<<endl;
            else
            {
            	while(a<=b)
            	{
            		n1=(a*6)/100;
            		n2=(b*3)/100;
            		a=(a+n1);
            		b=(b+n2);
            		i++;
            		cout<<"La poblacion de A"<<" en el año "<<i<<" es: "<<a<<endl;
            		cout<<"La poblacion de B"<<" en el año "<<i<<" es: "<<b<<endl;
				}
				cout<<"El tiempo que paso para que A fuera mayor que B es: "<<i<<" años";
			}
			break;	
	  }
	}
	  
}
