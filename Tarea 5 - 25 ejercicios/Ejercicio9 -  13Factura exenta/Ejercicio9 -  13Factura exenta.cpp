#include<iostream>
using namespace std;
int main(){
	int precio=0,subtotal=0,total=0,descuento=0,v=0;
	
	cout<<"ingreser el precio de la compra : "; cin>>precio;
	cout<<"si la persona esta exenta de impuesto o no esta tendra impuesto del 15% :"<<endl;
	
	cout<<" si es verdadero precion 2 y si es falso precione 1 :";
	cin>>v;
	
	if(v==1){
		subtotal=precio*0.015;
		total=precio-subtotal;
		cout<<"el total de su compra con descuento es : "<<total;

	}	
	else{
		cout<<"el total de su compra con es : "<<precio;
	}	

	
	return 0;
}
