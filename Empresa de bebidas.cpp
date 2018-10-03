//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet: RE18012
// Problema: Una empresa necesita calcular la produccion diaria de bebidas y los insumos requeridos para la elaboracion 
//Librerias que se utilizan en el programa 
#include<iostream>//Libreria que provee los elementos fundamentales para la entrada y salida en C++
#include<conio.h> //permite utilizar getch()


using namespace std; //Cuerpo del programa 


int ask_datasoda( int cantidad);
int ask_datajugo( int cantidad); 
//funcion declarada para SODAS
float aguaSoda(float soda);
float azucarSoda(float soda);
//funciones declaradas para JUGOS
float aguaJugo(float jugo);
float azucarJugo(float jugo);



int main(){
	system("color 50 "); //Para los colores de la interfaz 
	
	//Se declaran las variables 
	int sodas;
	int jugos;
	int taguasoda;
	int tazucarsoda;
	int taguajugo;
	int tazucarjugo;
	
	cout<<"El presente programa calcula el total de insumos requeridos para la produccion de bebidas \n";
	cout<<"Para producir 1 Soda se requieren:  Agua=500mL   Azucar=800gramos  \n";
	cout<<"Para producir 1 jugo se requieren:  Agua=600mL   Azucar=700gramos \n \n";
	cout<<"Ingrese la cantidad de bebidas que desea producir. \n";
	 
	sodas = ask_datasoda(sodas);
	jugos = ask_datajugo(jugos);
	
	
	taguasoda=aguaSoda(sodas);
	
		tazucarsoda=azucarSoda(sodas);
		
	taguajugo=aguaJugo(jugos);
	
		tazucarjugo=azucarJugo(jugos);
		
	cout<<"El total de insumos requeridos para producir las Sodas es de: \n";
		cout<<"Agua= "<< taguasoda <<" mL \n";
		cout<<"Azucar= "<< tazucarsoda <<" gramos \n";
	cout<<"El total de insumos requeridos para producir los Jugos es de: \n";
		cout<<"Agua= "<< taguajugo <<" mL\n";
		cout<<"Azucar= "<< tazucarjugo <<" gramos\n";

system("pause");

}

int ask_datasoda( int cantidad){
	
		//Verifica que los datos sean correctos 
	
	do{
			cout<<"Sodas "; cin>>cantidad;
			
				if(cin.fail() || cantidad < 1)
			{
				cout<<"El valor es incorrecto";
				getch();
				cin.clear();
				cin.ignore();
				system("cls");
			}
	}while(cantidad < 1);
	return cantidad;
}

int ask_datajugo( int cantidad ){
	//Verifica que los datos sean correctos 
	do{
			cout<<"Jugos "; cin>>cantidad;
			
				if(cin.fail() || cantidad < 1)
			{
				cout<<"El valor es incorrecto";
				getch();
				cin.clear();
				cin.ignore();
				system("cls");
			}
	}while(cantidad < 1);
	return cantidad;
}
	
//definicion Insumo de agua para SODAS
float aguaSoda(float soda){
			int cantAg;
			cantAg = soda * 500;
		
		return cantAg;//Valor que retorna 

}
//definicion de insumo azucar para SODAS
float azucarSoda(float soda){
			int cantAz;
	 		cantAz = soda * 800;
						
		return cantAz;//Valor de retorno

}
//definicion de funcion para Insumos de Jugos 
float aguaJugo(float jugo)
{
		int cantAg2;
		cantAg2 = jugo * 600;
		return cantAg2;
		
}
//definicion de funcion para insumos de jugos
float azucarJugo(float jugo)
{
		int cantAz2;
		cantAz2= jugo * 700;
		return cantAz2;	
}
