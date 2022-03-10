
#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto = 0;
	switch (opcion)
	{
		case 1:
		{
			cout<<"Bebidas calientes"<<endl;
		    cout<<"*****************"<<endl;
		    cout<<"1 - Capuccino "<<endl;
		    cout<<"2 - Expresso" <<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Capuccino - L.40.00",1,40);
					break;
				case 2:
					agregarProducto("1 Expresso - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado a la cuenta "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 2:
		{
			cout<<"Bebidas frias"<<endl;
			cout<<"*************"<<endl;
			cout<<"1 - Cafe helado "<<endl;
		    cout<<"2 - Limonada " <<endl;
		    cout<<"3 - Jugo de pina"<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Cafe helado - L.25.00",1,25);
					break;
				case 2:
					agregarProducto("1 Limonada - L.20.00",1,20);
					break;
				case 3:
					agregarProducto("1 Jugo de pina - L.20.00",1,20);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado a la cuenta "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 3:
		{
			cout<<"Reposteria"<<endl;
			cout<<"**********"<<endl;
			cout<<"1 - Pastel de fresa "<<endl;
		    cout<<"2 - Pastel de mora " <<endl;
		    cout<<"3 - Pastel de manzana "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Pastel de fresa - L.30.00",1,30);
					break;
				case 2:
					agregarProducto("1 Pastel de mora - L.30.00",1,30);
					break;
				case 3:
					agregarProducto("1 Patel de manzana - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado a la cuenta "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		{
			default:
			break;
		}
		
	}
}
