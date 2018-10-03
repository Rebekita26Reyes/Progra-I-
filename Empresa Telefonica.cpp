//Catedra:  Programacion I   
//Catedratica: Ing.Ligia Astrid Hernández 
//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet: RE18012
// Problema: Una empresa de telefonia necesita calcular el total a pagar de cada cliente .
//Librerias que se utilizan en el programa 
#include<iostream> //Libreria que provee los elementos fundamentales para la entrada y salida en C++
#include<conio.h>//permite utilizar getch()
#include <iomanip>//Libreria especial para facilitar el formateo y salida, así como la base utilizada cuando se formatean enteros y los valores precisión o punto flotante


using namespace std;  //Cuerpo del programa 

 
int ask_data(int minutos);

//funcion declarada 

float CostoMinutos(int minutos); 
//Se declaran las variables 
int main()
{
	float total; //total de minutos 
	int minutos; //varible minutos 
	system("color 31"); //Para los colores de la interfaz 
	minutos = ask_data(minutos);
	int continuar = 1;
	total = CostoMinutos(minutos);
	cout<<"El total a pagar por el Usuario es: \n";
	cout<<"$ "<<total<<" \n";
	cout<<"Gracias por su preferencia" <<endl;
	
system("pause");
return 0;
}
//FUncion minutos
int ask_data(int minutos){
	do{
	cout<<"El presente programa calcula el total a pagar de un cliente segun los minutos utilizados \n";
	cout<<"De 1 a 10 minutos =$0.05 \n";
	cout<<"De 11 a 15 minutos =$0.08 \n";
	cout<<"Mas de 15 minutos =$0.10 \n";
	cout<<"Ingrese la cantidad de minutos utilizados por el cliente \n"; //pedimos al usuario que ingrese la cantidad de minutos 
	cin>>minutos;
	
		//Verifica que los datos sean correctos 
	if(cin.fail() || minutos < 1)
			{
				cout<<"El valor es incorrecto";
				getch();
				cin.clear();
				cin.ignore();
				system("cls");
			}
	}while(minutos < 1);
	
	return minutos;
}
	
	
//definicion de la funcion
float CostoMinutos(int minutos){
	
	float costo;
	
	do{
		//Designa el costo de la llamada segun el tiempo 
		if(minutos >= 1 && minutos <= 10) //hacemos uso de la funcion if para delimitar el calculo de los minutos  entre 1 y 10
		
		{
		costo = minutos*0.05; 
			}
			else if(minutos > 10 && minutos <= 15) //hacemos uso de la funcion else if  para delimitar el calculo de los minutos mayores que 10 y menores o iguales a 15
			{
				costo = minutos * 0.08;
			}
			else // si el dato es mayor que 15 se aplica el 0.10%
			{
				costo = minutos * 0.10;
			}
			
	}
	//Se verifica que los numeros que ingrese el usuario no sean menores a uno 
	while(minutos<1);

	
	return costo;//Valor que retorna 

}
