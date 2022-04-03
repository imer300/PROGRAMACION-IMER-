
#include<iostream>   
#include "juego.h" 

using namespace std;

int main()
{
	char tecla;
	int puntos=0;
	int xPos=30, yPos=20;

	inicializarArreglo();
	dificultad();	
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);
    cout<<(char)4;	

	while(tecla != 27 && gameover() )
	{
	    proceso(tecla, puntos);
	}

	if ( !gameover())
	{
		MessageBoxA(NULL,"Has Perdido","Perdedor", MB_OK);  //ANUNCIO FINAL//
		system("cls");
	}

	system("pause>NULL");
	return 0;
}

