//Catedra:  Programacion I   
//Catedratica: Ing.Ligia Astrid Hern�ndez 
//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet: RE18012

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

				//cuerpo del programa
using namespace std;

int main (){

	int matriz[4][5] = {{1,5,9,13,17},{2,6,10,14,18},{3,7,11,15,19},{4,8,12,16,20}};
	
	for (int i=0; i<4; i++){
		
		for (int j=0; j<5; j++){
		
			cout<<matriz[i][j]<<" ";
			
		}
		cout<<" "<<endl;
	}
		

system("pause");
return EXIT_SUCCESS;

}

