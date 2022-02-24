#include <iostream>
using namespace std;
int main (){

int saldoinicial=1000,op;
float extra,saldo=0,retiro=0;

   cout<<"\t Bienvenido al carejo de Banco los pumas.."<<endl;
   cout<<"1) Ingresar dinero de la cuenta:"<<endl;
   cout<<"Retitar dinero de la cuenta :"<<endl;
   cout<<"Salir:"<<endl;
   cout<<"Opcion"<<endl;
   
   switch(op){
   	case 1:
   	cout<<"Digite la cantidad de dinero a ingresar:"<<endl;
   	cin>>extra;
   	 saldo=saldoinicial+extra;
   	 cout<<"Dinero en cuenta es:"<<saldo;break;
   	
   	case 2:
   	cout<<"Digite la cantidad de dinero que quiere retirar:"<<endl;
   	cin>>retiro
   		if(retiro>saldoinicial){
   			cout<<"No tiene esacantidad de dinero no puede retirar esa cantida de dinero:"<<endl;
		   }
		   else{
		   	saldo=saldoinicial-retiro;
		   	cout<<"El dinero en su cuenta acual es :"<<saldo;
		   }
   	
   	
   	case 3: break;
   	
   }
	

	
return 0;	
}
