#include<iostream>

using namespace std;

void suma(int num)
{
	int cociente;
	int mod;
	
	
	if(num<10)
	{
		cout<<num;
	}
	else
	{
		cociente=num/10;
		mod=(num%10);
		
		
		cout<<mod;
		suma(cociente);
    }
	
}
main()
{
	int num;
	
    cout<<"Ingresa Un Numero"<<endl;
    cin>>num;
	
	cout<<"\nEl Numero Invertido Es"<<endl;
	suma(num);
	
	cout<<"\n"<<endl;
	system("pause");
	return 0;	
}
