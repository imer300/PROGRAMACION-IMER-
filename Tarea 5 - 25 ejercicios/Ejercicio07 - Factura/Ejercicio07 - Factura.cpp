#include <iostream>
using namespace std;
int main (){
	
	int vari1=0, vari2=0, total1=0,total2=0;
	
	cout<<"Digite el valor de su compra"<<endl;
	cin>>vari1;
	

	
	
	total2=0.15*vari1;
	total1=total2+vari1;

	cout<<"el subtotal de la compra es:"<<vari1<<endl;
	cout<<"el valor total de la compra con impuesto 15% es:"<<total1<<endl;

	return 0;
}
