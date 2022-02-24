#include <iostream>
using namespace std;
int main (){
	
	int vari1=0, vari2=0, total1=0,total2=0,total3=0,total4=0;
	
	cout<<"Digite un valor"<<endl;
	cin>>vari1;
	
	cout<<"Digite siguiente  valor"<<endl;
	cin>>vari2;
	
	total1=vari1+vari2;
	total2=vari1*vari2;
	total3=vari1-vari2;
	total4=vari1/vari2;
	cout<<"el valor total de la suma es:"<<total1<<endl;
	cout<<"el valor total de la multiplicacion es:"<<total2<<endl;
	cout<<"el valor total de la resta es:"<<total3<<endl;
	cout<<"el valor total de la divicion es:"<<total4<<endl;
	return 0;
}
