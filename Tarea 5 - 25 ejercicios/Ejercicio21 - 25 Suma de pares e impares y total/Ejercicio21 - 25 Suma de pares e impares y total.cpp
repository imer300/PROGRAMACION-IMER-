#include  <iostream>
using namespace std;
int main(){
	int par = 0, impar = 0, suma = 0; //en este proyecto simplificaremos el programa EL METODO UNO RESULTO TENER MUCHAS CUMPLICACIONES  //
	
	for (int i = 1; i <= 10; i++) 
	{
		if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10)  //proceso de filtrado uno para numeros pares 
		{
			par = par + i;
		}
		cout << i << " "<<endl<<endl;
		
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9) //proceso de filtrado uno para  numeros impares 
		{
			impar = impar + i;
		}
	}
	
	suma = par + impar;
	cout << " SUMA DE PARES : " <<par <<endl;  //Resultados 
	cout << " SUMA DE IMPARES: "<<impar <<endl;
	cout << " LA SUMA TOTAL: "<<suma <<endl;

return 0;
}
