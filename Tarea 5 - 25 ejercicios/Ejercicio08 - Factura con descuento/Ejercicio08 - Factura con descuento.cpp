#include<iostream>
using namespace std;
int main(){
	int precio=0,subtotal=0,total=0,descuento=0,v=0;
	
	cout<<"ingreser el precio de la compra : "; cin>>precio;
	cout<<"si la persona es de la tercera edad tendra acceso a un descuento del 20% :"<<endl;
	
	cout<<"es de la tercera edad si es verdadero precion 1 y si es falso precione 2 :";
	cin>>v;
	
	if(v==1){
		subtotal=precio*0.020;
		total=precio-subtotal;
		cout<<"el total de su compra con descuento es : "<<total;

	}	
	else{
		cout<<"el total de su compra con es : "<<precio;
	}	

	
	return 0;
}
