#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
#include <time.h>

using namespace std;  

//Crear un arreglo bidimensional de 5x5

//2) Inicializar cada elemento del arreglo con valores random

//3) Sumar todos los valores del arreglo bidimensional y mostrar un mensaje "Total Suma: "

int main()
{
	srand (time(NULL));	
	int TSuma = 0;
	int a[5][5]; // directrices bidimencional 5*5//
	
	        //valores randoms //
	         
	  
	   
	a[0][0] = rand () % 20 + 1;
	a[0][1] = rand () % 20 + 1;
	a[0][2] = rand () % 20 + 1;
	a[0][3] = rand () % 20 + 1;
	a[0][4] = rand () % 20 + 1;
	
	
	
	a[1][0] = rand () % 20 + 1;
	a[1][1] = rand () % 20 + 1;
	a[1][2] = rand () % 20 + 1;
	a[1][3] = rand () % 20 + 1;
	a[1][4] = rand () % 20 + 1;
	

	
	a[2][0] = rand () % 20 + 1;
	a[2][1] = rand () % 20 + 1;
	a[2][2] = rand () % 20 + 1;
	a[2][3] = rand () % 20 + 1;
	a[2][4] = rand () % 20 + 1;
	
	
	a[3][0] = rand () % 20 + 1;
	a[3][1] = rand () % 20 + 1;
	a[3][2] = rand () % 20 + 1;
	a[3][3] = rand () % 20 + 1;
	a[3][4] = rand () % 20 + 1;
	
	
	a[4][0] = rand () % 20 + 1;
	a[4][1] = rand () % 20 + 1;
	a[4][2] = rand () % 20 + 1;
	a[4][3] = rand () % 20 + 1;
	a[4][4] = rand () % 20 + 1;
	
	
    for (int y = 0;y < 5;y++)   //condicionantes 
    {
    	for(int x = 0;x < 5;x++)
    	{
    		cout<<"Y: "<<y <<" | " <<"X: "<<x<<endl;
    		cout<<a[y][x] <<endl;
    		TSuma = TSuma + a[y][x];
    		cout<<endl<<endl;
		}
	}
	
	
	cout<<" Suma total los valores del arreglo bidimensional : "<<TSuma<<endl;
	
	return 0;
}
