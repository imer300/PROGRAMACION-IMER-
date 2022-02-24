#include<iostream>
using namespace std;
int main(){
	int mate=0,social=0,espa=0,fi=0,promedio=0;
	
	cout<<"ingresar la nota de sociales  : "<<endl; cin>>social;
	cout<<"ingresar la nota de matematicas: "<<endl; cin>>mate;
	cout<<"ingresar la nota de espanol  :"<<endl; cin>>espa;
	cout<<"ingresar la nota de fisica  : "<<endl; cin>>fi;
	
	promedio=(mate+social+espa+fi)/4;
	
    cout<<"el promedio de las notas es:"<<promedio;
	
	return 0;
}
