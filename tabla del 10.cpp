//Catedra:  Programacion I   
//Catedratica: Ing.Ligia Astrid Hernández 
//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet: RE18012
				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h>

				//cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

int i=10;
int j;

cout<<("La tabla del 10 es ")<<endl;
 	
for (int j=1;j<=10;j++)
{				

cout<<i<<"x"<<j<<"="<<i*j<<endl;

 }

system("pause");
return EXIT_SUCCESS;

}

