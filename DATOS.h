#include <iostream> // Incluir la librería necesaria
#include <windows.h>
#include "SALIDA.h"
using namespace std; 

#ifndef DATOS  
#define DATOS

// Variabes Globales
long int MontoF=220000, MontoL=180000, MontoP=100000; // Monto de precio de Autos (Ferrari, Lamborghini, Porsche)

// Funcion en forma de menu 
void Datos() 
{
	int CodSucur;  // Varibble de las Sucursales: 1. Estados Unidos, 2. Francia, 3. Italia. 
		
	// Variables de la Sucursal de Estado Unidos 
	char CodMarc1;                              // Variable del codigo por marca. 
	int  Cantidad1F, Cantidad1L, Cantidad1P;    // Cantidad de Autos por marca.
	long int Total1F=0, Total1L=0, Total1P=0;   // Precio Total de la compra por marca, cantidad por monto.  
	long int Acum1CF=0, Acum1CL=0, Acum1CP=0;   // Acumulador de Cantidad de Autos. 
	
	// Variables de la Sucursal de Francias
	char CodMarc2;                               
	int Cantidad2F, Cantidad2L, Cantidad2P;     
	long int Total2F=0, Total2L=0, Total2P=0;   
 	long int Acum2CF=0, Acum2CL=0, Acum2CP=0; 
	   
	// Variables de de la Sucursal de Italia
	char CodMarc3;                              
	int Cantidad3F, Cantidad3L, Cantidad3P;    
	long int Total3F=0, Total3L=0, Total3P=0; 
	long int Acum3CF=0, Acum3CL=0, Acum3CP=0;   
	
	
	while (CodSucur != 5)	// Repetir mientras no sea igual que 5
	{
		cout << "************************** Sucursales ********************************" << endl;
		cout << "USA [1], Francia [2], Italia [3], Informe [4], Salir[5]" << endl;	
		cout << "Ingrese el codigo de la Surcusal que desea: "; cin >> CodSucur;  /* Codsucur (Codigo de sucursal) 
		Variable de control para la estructura casos */
		switch  (CodSucur)
		{
			case 1:  //  Caso 1 (Estados UInidos)
				system ("CLS");
				while (CodMarc1 != 'M') // Repetir mientras no sea igual 'M'.
				{
					cout << "               Codigos de Marcas" << endl;
					cout << "Ferrari [F], Lamborghini [L] Porsche [P], Menu [M]"<< endl;  
					cout << "Ingrese el codigo de la marca que desea: "; cin >> CodMarc1; 
					switch (CodMarc1) // CodMarc1 (Codigos de marca para Estados Unidos)
					{
						case 'F': // Caso para Ferrari. 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad1F; // Cantidad de Ferraris. 
							Acum1CF = Acum1CF + Cantidad1F; // Acumulador de Cantidades de Ferraris. 
							Total1F = MontoF*Acum1CF; // Total de conpras de Ferraris
							system ("CLS");
						break;
			
						case 'L': // Caso para Lamborghini 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad1L; // Cantidad de Lamborghinis. 
							Acum1CL = Acum1CL + Cantidad1L; // Acumulador de Cantidades de Lamborghinis. 
							Total1L = MontoL*Acum1CL; // Total de compras de Lamborghini
							system ("CLS");
						break;
			
						case 'P': // Caso para Porsche. 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad1P; // Cantidad de Porsches. 
							Acum1CP = Acum1CP + Cantidad1P; // Acumulador de Cantidades de Porsches.
							Total1P = MontoP*Acum1CP; // Total de compras de Porsche 
						system ("CLS");
						break;
						
						case 'M': // Caso para salir al Menu
							system ("CLS");
							cout << "Saliendo al menu principal :)" << endl; 
							system ("pause");
							system ("CLS");
						break;
						
						default: // Caso si se teclea un valor que no corresponda a ningun caso. 
							system ("CLS");
							cout << "Ingreso un codigo incorrecto teclee otro" << endl; 
							system ("pause");
							system ("CLS");
						break;	
					}
					cout << "************************** Compras Totales ********************************" << endl;
					cout << "Ferrari: " << Total1F << "$||Lamborghini: " << Total1L << "$||Porsche: " << Total1P << "$" << endl;
					cout << "" << endl;
					cout << "Si desea hacer otra comprar tecle el codigo de la marca o regrese al menu" << endl;
				}
				system ("CLS");
			break;		
				
			case 2: // Caso 2 (Francia)
				system ("CLS");
				while (CodMarc2 != 'M') // Repetir mientras no sea igual 'M'.
				{
						cout << "               Codigos de Marcas" << endl;
					cout << "Ferrari [F], Lamborghini [L] Porsche [P], Menu [M]"<< endl;
					cout << "Ingrese el codigo de la marca que desea: "; cin >> CodMarc2; 
					switch (CodMarc2) // CodMarc1 (Codigos de marca para Francia)
					{	
						case 'F': // Caso para Ferrari. 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad2F; // Cantidad de Ferraris. 
							Acum2CF = Acum2CF + Cantidad2F;  // Acumulador de Cantidades de Ferraris. 
							Total2F = MontoF*Acum2CF; // Total de conpras de Ferraris
							system ("CLS");
						break;
			
						case 'L': // Caso para Lamborghini 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad2L; // Cantidad de Lamborghinis. 
							Acum2CL = Acum2CL + Cantidad2L; // Acumulador de Cantidades de Lamborghinis. 
							Total2L = MontoL*Acum2CL; // Total de compras de Lamborghini
							system ("CLS");
						break;
			
						case 'P': // Caso para Porsche. 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad2P; // Cantidad de Porsches. 
							Acum2CP = Acum2CP + Cantidad2P; // Acumulador de Cantidades de Porsches.
							Total2P = MontoP*Acum2CP; // Total de compras de Porsche 
							system ("CLS");
						break;
				
						case 'M': // Caso para salir al Menu 
							system ("CLS");
							cout << "Saliendo al menu principal :)" << endl;
							system ("pause");
							system ("CLS");
						break;
						
						default: // Caso si se teclea un valor que no corresponda a ningun caso. 
							system ("CLS");
							cout << "Ingreso un codigo incorrecto teclee otro" << endl;
							system ("pause");
							system ("CLS");
						break;		
					}	
					cout << "************************** Compras Totales ********************************" << endl;
					cout << "Ferrari: " << Total2F << "$||Lamborghini: " << Total2L << "$||Porsche: " << Total2P << "$" << endl;
					cout << "" << endl;
					cout << "Si desea hacer otra comprar tecle el codigo de la marca o regrese al menu" << endl;
				}
				system ("CLS");
			break;
			
			case 3: // Caso 3 (Italia)
				system ("CLS");
				while (CodMarc3 != 'M') // Repetir mientras no sea igual 'M'.
				{
					cout << "               Codigos de Marcas" << endl;
					cout << "Ferrari [F], Lamborghini [L] Porsche [P], Menu [M]"<< endl;
					cout << "Ingrese el codigo de la marca que desea: "; cin >> CodMarc3;
					switch (CodMarc3) // CodMarc1 (Codigos de marca para Italia)
					{	
						case 'F': // Caso para Ferrari. 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad3F; // Cantidad de Ferraris. 
							Acum3CF = Acum3CF + Cantidad3F; // Acumulador de Cantidades de Ferraris. 
							Total3F = MontoF*Acum3CF; // Total de conpras de Ferraris 
							system ("CLS");
						break;
			
						case 'L': // Caso para Lamborghini
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad3L; // Cantidad de Lamborghinis. 
							Acum3CL = Acum3CL + Cantidad3L; // Acumulador de Cantidades de Lamborghinis. 
							Total3L = MontoL*Acum3CL; // Total de compras de Lamborghini
							system ("CLS");
						break;
			
						case 'P': // Caso para Porsche. 
							system ("CLS");
							cout << "Ingrese la cantidad de autos que desea: "; cin >> Cantidad3P; // Cantidad de Porsches. 
							Acum3CP = Acum3CP + Cantidad3P;  // Acumulador de Cantidades de Porsches.
							Total3P = MontoP*Acum3CP; // Total de compras de Porsche
							system ("CLS");
						break;
				
						case 'M': // Caso para salir al Menu 
							system ("CLS");
							cout << "Saliendo al menu principal :)" << endl;
							system ("pause");
							system ("CLS");
						break;
						
						default: // Caso si se teclea un valor que no corresponda a ningun caso. 
							system ("CLS");
							cout << "Ingreso un codigo incorrecto teclee otro" << endl;
							system ("pause");
							system ("CLS");
						break;		
					}	
					cout << "************************** Compras Totales ********************************" << endl;
					cout << "Ferrari: " << Total3F << "$||Lamborghini: " << Total3L << "$||Porsche: " << Total3P << "$" << endl;
					cout << "" << endl;
					cout << "Si desea hacer otra comprar tecle el codigo de la marca o regrese al menu" << endl;
				}
				system ("CLS");	
			break;
			
			case 4: // Informe de ventas por sucursales y marcas.
				system ("CLS"); 
				Salida(Acum1CF,Acum1CL,Acum1CP,Total1F,Total1L,Total1P,Acum2CF,Acum2CL,Acum2CP,Total2F,Total2L,Total2P,Acum3CF,Acum3CL,Acum3CP,Total3F,Total3L,Total3P);
				cout << " " << endl;  // llamado del metodo salida pasando parametros. 
				system ("pause");
				system ("CLS");
			break;
			
			case 5:
				system ("CLS");
				cout << "Saliendo del sistema ...." << endl;
				system ("pause");
				system ("CLS");
			break;
			
			default: // Caso si se teclea un valor que no corresponda a ningun caso. 
				system ("CLS");
				cout << "Ingreso un codigo incorrecto teclee otro" << endl;
				system ("pause");
				system ("CLS");
			break;		
		}
	}
}

#endif
