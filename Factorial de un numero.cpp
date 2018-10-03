//Ingenieria de Sistemas Informaticos   
//Catedra:  Programacion I   
//Catedratica: Ing.Ligia Astrid Hernández 
//Alumna: Cesia Rebeca Reyes Escobar
//Tarea: Hacer un programa que calcule el factorial de un numero (0 - 9), y validar que no se puedan ingresar datos tipo texto
// y valores menores a cero. 
#include<iostream>
#include<stdlib.h>
#include <windows.h>

using namespace std;

int main(){
		 system("color 81");
	int numero, factorial = 1; //declaramos variables a utilizar 
		do {
		  
	cout<<"Digite un numero: "; cin>>numero; //pedimos al usuario el ingreso de la variable numero 
	}
		while (numero <=0); //Se agrega para hacer la repeticion de ingreso de ventas  
		
	if(numero>=1&&numero<=9){ //hacemos uso de la funcion if para delimitar el calculo de factorial entre 1 y 9
		for(int i=1; i<=numero;i++){ //si lo anterior se cumple procedemos al calculo del factorial
			 factorial = factorial * i; 
		}
	cout<<"\n El factorial del numero es: "<<factorial<<endl;// imprimimos el resultado del proceso de calculo de factorial			
	}else{//Si el usuario ingresa un dato incorrecto el proceso se salta hasta esta fila 
		cout<<"\n El numero es incorrecto\n";//cuando el proceso no se cumple se prcede a imprimir lo siguiente
	}
	system("pause");
	return 0;
}
