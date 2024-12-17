#include <iostream> // Incluir la librería necesaria
#include <windows.h>
using namespace std; 

#ifndef SALIDA 
#define SALIDA

// Funcion retorno del monto total
int MT(int MontoUSA, int MontoFrans, int MontoIta) 
{
	int MontoTotal=0; 
	MontoTotal = MontoUSA + MontoFrans + MontoIta; 
	return MontoTotal; 
}


void Salida(int Acum1CF,int Acum1CL,int Acum1CP,int Total1F,int Total1L,int Total1P,int Acum2CF,int Acum2CL,int Acum2CP,int Total2F,int Total2L,int Total2P,int Acum3CF,int Acum3CL,int Acum3CP,int Total3F,int Total3L,int Total3P)
{ 
	int CantUSA, CantFrans, CantIta; // Cantidad total de autos por Sucursal
	long int MontoUSA, MontoFrans, MontoIta; // Monto total de ventas por Sucursal.
	
	int VectorF[3], VectorL[3], VectorP[3]; // Vectores de montos de Ferrari, Lamborghini, Porsche. 
	int SumaF=0, SumaL=0, SumaP=0; // Acumuladores de Valor de Vectores de Monto por Auto. 
	
	int VectorCF[3], VectorCL[3], VectorCP[3]; // Vectore de Cantidad de Autos Ferrari, Lamborghini, Porsche. 
	int SumaCanF=0, SumaCanL=0, SumaCanP=0; // Acumuladores de Valor de Vectores de Cantidad por Auto.
	
	int MatrisCant[3][3]; // Matris 3*3 de Total de Cantidades 
	int SumaCanT=0; // Acumulador de Sumatoria de Cantidades Totales

	cout << "             Sport Autos" << endl;
	cout << "Informe anual por pais y marca de auto" << endl;
	cout << "..............................................." << endl;
	cout << "Nombre de la Sucursal: Estados Unidos" << endl;
	cout << "Marca de auto:" << endl;
	cout << "Ferrari     || Cantidad: #" << Acum1CF << "|| Monto: " << Total1F << "$" << endl; 
	cout << "Lamborghini || Cantidad: #" << Acum1CL << "|| Monto: " << Total1L << "$" << endl;
	cout << "Porsche     || Cantidad: #" << Acum1CP << "|| Monto: " << Total1P << "$" << endl;
   	cout << "Totales de USA" << endl;
   	CantUSA = Acum1CF + Acum1CL + Acum1CP;	// Cantidad de Autos de Estados Unidos. 
   	MontoUSA = Total1F + Total1L + Total1P; // Monto Total de Estados Unidos.
   	cout << "Cantidad: #" << CantUSA << "|| Monto: " << MontoUSA << "$"<< endl;
   	
	cout << "..............................................." << endl;
	cout << "Nombre de la Sucursal: Francia" << endl;
	cout << "Marca de auto:" << endl;
	cout << "Ferrari     || Cantidad: #" << Acum2CF << "|| Monto: " << Total2F << "$" << endl; 
	cout << "Lamborghini || Cantidad: #" << Acum2CL << "|| Monto: " << Total2L << "$" << endl;
	cout << "Porsche     || Cantidad: #" << Acum2CP << "|| Monto: " << Total2P << "$" << endl;
   	cout << "Totales de Francia" << endl;
   	CantFrans = Acum2CF + Acum2CL + Acum2CP; // Cantidad de Autos de Estados Francia
   	MontoFrans = Total2F + Total2L + Total2P; // Monto Total de Francia
   	cout << "Cantidad: #" << CantFrans << "|| Monto: " << MontoFrans << "$"<< endl;
   	
   	cout << "..............................................." << endl;
	cout << "Nombre de la Sucursal: Italia" << endl;
	cout << "Marca de auto:" << endl;
	cout << "Ferrari     || Cantidad: #" << Acum3CF << "|| Monto: " << Total3F << "$" << endl; 
	cout << "Lamborghini || Cantidad: #" << Acum3CL << "|| Monto: " << Total3L << "$" << endl;
	cout << "Porsche     || Cantidad: #" << Acum3CP << "|| Monto: " << Total3P << "$" << endl;
   	cout << "Totales de Italia" << endl;
   	CantIta = Acum3CF + Acum3CL + Acum3CP;	// Cantidad de Autos de Italia. 
   	MontoIta = Total3F + Total3L + Total3P; // Monto Total de Italia
   	cout << "Cantidad: #" << CantIta << "|| Monto: " << MontoIta << "$"<< endl;
   	
   	cout << "..............................................." << endl;
	cout << "T.Auto" << endl;
	VectorF[0] = Total1F; VectorL[0] = Total1L; VectorP[0] = Total1P; // Cargando vectores manualmente de Montos por Marca
	VectorF[1] = Total2F; VectorL[1] = Total2L; VectorP[1] = Total2P;
	VectorF[2] = Total3F; VectorL[2] = Total3L; VectorP[2] = Total3P;
	
	
	// Sumatoria de los Montos por Marca de Auto
	for (int i=0; i<3; i++) 
	{
		SumaF = SumaF + VectorF[i];
	}
	cout << "Ferrari     ||" << SumaF << "$" << endl;
	
	for (int i=0; i<3; i++) 
	{
		SumaL = SumaL + VectorL[i];
	}
	cout << "Lamborghini ||" << SumaL << "$" << endl;
	
	for (int i=0; i<3; i++) 
	{
		SumaP = SumaP + VectorP[i]; 
	}
	cout << "Porsche     ||" << SumaP << "$" << endl;
	
	cout << "..............................................." << endl;
	
	// Condicional para verificar el pais Mayor vendido 
   	if (MontoUSA > MontoFrans && MontoUSA > MontoIta) 
   	{
   		cout << "Pais Mayor vendedor: Estados Unidos" << "|| Cantidad: " << CantUSA << "|| Monto: " << MontoUSA << "$" << endl; 
	}	
	else if (MontoFrans > MontoUSA && MontoFrans > MontoIta) 
   	{
   		cout << "Pais Mayor vendedor: Francia " << "|| Cantidad: " << CantFrans << "|| Monto: " << MontoFrans << "$" << endl; 
	}
	else if (MontoIta > MontoFrans && MontoIta > MontoUSA ) 
   	{
   		cout << "Pais Mayor vendedor: Italia" << "|| Cantidad: " << CantIta << "|| Monto: " << MontoIta << "$" << endl; 
	}
	
	cout << "..............................................." << endl;
	VectorCF[0] = Acum1CF; VectorCL[0] = Acum1CL; VectorCP[0] = Acum1CP; // Cargando Vector manualmente con las cantidades por Marca
	VectorCF[1] = Acum2CF; VectorCL[1] = Acum2CL; VectorCP[1] = Acum2CP;
	VectorCF[2] = Acum3CF; VectorCL[2] = Acum3CL; VectorCP[2] = Acum3CP;
	
	// Sumatoria de las cantidades por Marca 
	for (int i=0; i<3; i++) 
	{
		SumaCanF = SumaCanF + VectorCF[i]; 
	}
	
	for (int i=0; i<3; i++) 
	{
		SumaCanL = SumaCanL + VectorCL[i]; 
	}
	
	for (int i=0; i<3; i++) 
	{
		SumaCanP = SumaCanP + VectorCP[i]; 
	}
	
	
	// Condicional para Marca con mas autos vendidos
	if (SumaCanF > SumaCanL && SumaCanF > SumaCanP) 
   	{
   		cout << "+ Vendido: Ferrari" << "|| Cantidad: " << SumaCanF << "|| Monto: " << SumaF << "$" << endl; 
	}
	
	else if (SumaCanL > SumaCanF && SumaCanL > SumaCanP) 
   	{
   		cout << "+ Vendido: Lamborghini" << "|| Cantidad: " << SumaCanL << "|| Monto: " << SumaL << "$" << endl; 
	}	
	
	else if (SumaCanP > SumaCanF && SumaCanP > SumaCanL) 
   	{
   		cout << "Tipo de Auto + Vendido: Porsche" << "|| Cantidad: " << SumaCanP << "|| Monto: " << SumaP << "$" << endl; 
	}		
	
	cout << "..............................................." << endl;
	MatrisCant[0][0] = Acum1CF; MatrisCant[0][1] = Acum2CF; MatrisCant[0][2] = Acum3CF; // Cargando Matriz Manualmente Con la cantidades por Marca de Auto
	MatrisCant[1][0] = Acum1CL; MatrisCant[1][1] = Acum2CL; MatrisCant[1][2] = Acum3CL;
	MatrisCant[2][0] = Acum1CP; MatrisCant[2][1] = Acum2CP; MatrisCant[2][2] = Acum3CP;
	
	
	// Matirz sumatoria de los cantidad de autos total 
	for (int i=0; i<3; i++) 
	{
		for (int j=0; j<3; j++) // Recorrido de las Columnas
		{
			SumaCanT = SumaCanT + MatrisCant[i][j]; // Acumulador de los valores de la Matris 
		}
	}
	cout << "Cantidad Total de Autos Vendidos: #" << SumaCanT << endl;
	cout << "..............................................." << endl;
	int MontoTotal = MT(MontoUSA, MontoFrans, MontoIta); // lLamado de retorno de valor con paso de parametros 
	cout << "Monto Total de Autos Vendidos: " << MontoTotal << "$" << endl;
}

#endif
