#include <iostream>
#include <cstdlib>




using namespace std;
int main()//funciones principales 
{
	float a;
	float b;
	float suma;
	float resta;
	float multi;
	float division;
	cout<<"Ingrese su primer valor:"<<endl;
	cin>>a;
	cout<<"Ingrese su segundo valor:"<<endl;
	cin>>b;
	suma=a+b;
	resta=a-b;
	multi=a*b;
	division=a/b;
	cout<<"El valor de la suma es:"<<suma<<endl;
	cout<<"El valor de la resta es:"<<resta<<endl;
	cout<<"El valor de la multiplicacion es:"<<multi<<endl;
	cout<<"El valor de la division es:"<<division<<endl;
	
	system("pause");
	return 0;
	}
