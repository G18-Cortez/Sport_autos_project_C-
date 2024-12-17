#include <iostream>
#include <windows.h>
#include "TEXTO.h"
#include "DATOS.h"

int main(int argc, char** argv)
{
	string Resp;   // Variable para Controlar la reptecion del programa 
	do 
	{
		// Llamada de la funciones nesesarias
		Texto();	
		Datos();
		cout << "Desea repetir el programa si o no: "; cin >> Resp;
		system ("CLS");		
	}
	while (Resp == "si" || Resp == "Si" ); 	// Condicional para repetir  
	return 0;
}
