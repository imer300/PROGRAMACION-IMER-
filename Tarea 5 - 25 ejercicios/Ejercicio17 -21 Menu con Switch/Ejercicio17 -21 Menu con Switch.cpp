#include <iostream>
using namespace std;
int main (){

int saldoinicial=1000,op;
float extra,saldo=30,retiro=0;

   cout<<"\t Bienvenido a pollos POWER RANGERS.."<<endl;
   cout<<"1) QUIERE EL COMBO DE POLLO ENTERO CON PAPAS Y UN REFRESCO:"<<endl;
   cout<<"2) COMBO DE POLLO FRITO CON ENSALADA Y PAQUETE DE TORTILLAS :"<<endl;
   cout<<"3) Salir:"<<endl;
   cout<<"Opcion: ";
   cin>>op;
   
   switch(op){
   	case 1:
   	 cout<<"SU COMBO ESTARA LISTO EN 30 MINUTOS:"<<endl;  
   	 cout<<"su total a pagar es de 300 lempiras";break;
   	case 2:
   	cout<<"SU COMBO ESTARA LISTO EN 45 MINUTOS:"<<endl;
   	cout<<"su total a pagar es de 150 lempiras  "; break;
   	
   	
   	case 3: break;
   	
   }
	

	
return 0;	
}
