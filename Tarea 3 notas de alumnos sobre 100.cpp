//imer Brock 20182030387

#include <iostream >
using namespace std;

int main ()

{
	int  nota=0;
	
	//CALIFICACIONES DE ESTUDIANTES DE LA UNAH-VS POR METODO EXTRANGERO//
	cout<<"INGRESE LA CALIFICACION DEL ALUMNO EN RANGO DE 0 A 100:";
	cin >>  nota;
	
	if (nota > 100 || nota < 0) 
	{
		cout << "LA CALIFICACION INGRESADA ES INCORRECTA EL RANGO DEBE SER DE 0 A 100 :"; 
		return 0;
	}
	else
	if (nota == 100) 
	{
		cout<< " La calificacion es  A++"<<endl; 
	}
	else
	if (nota >= 95 && nota <= 99)
	{
		cout<< " La calificacion es  A+ " <<endl;
	}
	else
	if (nota >= 90 && nota <= 94)
	{
		cout<< " La calificacion es  A " <<endl;
	}
	else
	if (nota >= 85 && nota <= 89)
	{
		cout<< " La calificacion es  A- " <<endl;
	}
	else
	if (nota >= 80 && nota <= 84)
	{
		cout<< " La calificacion es  B+ " <<endl;
	}
	else
	if (nota >= 75 && nota <= 79)
	{
		cout<< " La calificacion es  B " <<endl;
	}
	else
	if (nota >= 70 && nota <= 74)
	{
		cout<< " La calificacion es  B- " <<endl;
	}
	else
	if (nota >= 65 && nota <= 69)
	{
		cout<< " La calificacion es  C+ " <<endl;
	}
	else
	if (nota >= 60 && nota <= 64)
	{
		cout<< " La calificacion es  C " <<endl;
	}
	else
	if (nota >= 55 && nota <= 59)
	{
		cout<< " La calificacion es  C- " <<endl;
	}
	else
	if (nota >= 50 && nota <= 54)
	{
		cout<< " La calificacion es  D+ " <<endl;
	}
	else
	if (nota >= 45 && nota <= 49)
	{
		cout<< " La calificacion es  D " <<endl;
	}
	else
	if (nota >= 40 && nota <= 44)
	{
		cout<< " La calificacion es  D- " <<endl;
	}
	else
	if (nota >= 35 && nota <= 39)
	{
		cout<< " La calificacion es  E+ " <<endl;
	}
	else
	if (nota >= 30 && nota <= 34)
	{
		cout<< " La calificacion es  E " <<endl;
	}
	else
	if (nota >= 25 && nota <= 29)
	{
		cout<< " La calificacion es  E- " <<endl;
	}
	else
	if (nota >= 20 && nota <= 24)
	{
		cout<< " La calificacion es  F+ " <<endl;
	}
	else
	if (nota >= 15 && nota <= 19)
	{
		cout<< " La calificacion es  F " <<endl;
	}
	else
	if (nota >= 10 && nota <= 14)
	{
		cout<< " La calificacion es  F " <<endl;
	}
	else
	if (nota >= 5 && nota <= 9)
	{
		cout<< " La calificacion es  F- " <<endl;
	}
	else
	if (nota >= 0 && nota <= 4)
	{
		cout<< " La calificacion es  F-- " <<endl;
	}
	system("pause");
	return 0;
	
}
