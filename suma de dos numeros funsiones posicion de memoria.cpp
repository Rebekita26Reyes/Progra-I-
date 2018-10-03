//Catedra:  Programacion I   
//Catedratica: Ing.Ligia Astrid Hernández 
//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet: RE18012

				//librerias obligatorias utilizadas
#include <cstdlib>
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.

				//cuerpo del programa
using namespace std;

void pedirNumeros(); /*sin importar donde esta la funcion 
					no dara problema de compilacion*/

//int main (int argc, char *argv[])
int main (){
	
pedirNumeros();
system ("pause"); //esta en la libreria iostream
return 0;

}

float sumar (float &x, float &y)
{
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	return x+y;
}

void pedirNumeros()
{	float x;
	float y;
	float res;
	
	cout<<"Ingrese un numero"<<endl;
	cin >> x;
	cout<<"Ingrese un numero"<<endl;
	cin >> y;
	res=sumar(x,y);
	
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	cout<<"El resultado es: "<<res<<endl;
	
}

