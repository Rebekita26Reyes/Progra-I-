//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet: RE18012
// Problema: Una empresa comercializadora contrata vendedores a los cuales les paga un salario que va de acuerdo al total de ventas realizadas en el mes.
//Librerias que se utilizan en el programa 
#include <cstdlib>//
#include <iostream> //Libreria que provee los elementos fundamentales para la entrada y salida en C++
#include <iomanip> //Libreria especial para facilitar el formateo y salida, así como la base utilizada cuando se formatean enteros y los valores precisión o punto flotante
#include <windows.h> // es un archivo cabecera específico de Windows para la programación en lenguaje C/C++


//Cuerpo del programa 
using namespace std;

	int main(){ 
	 system("color 17");
	
	
		float ventas;
		float salario;
		
		//Agregar do y while para evitar numeros menores de cero 
			do {
				cout <<"BIENVENIDOS A NUESTRA EMPRESA COMERCIALIZADORA"<<endl; 
				
				cout <<"Ingrese la cantidad de ventas:";
		  		cin >> ventas; // se pide que muestre la cantidad de ventas en pantalla 
		  
	 //Se agrega el ciclo while para evitar que el usuario ingrese un dato incorrecto 	  
	 while(cin.fail()){
	 	
        //El cin.clear se utiliza para limpiar el buffer de los datos ingresados 
        cin.clear();
        
        //Se agrega cin.ignore para que ignore los primeros 1000 caracteres 
        cin.ignore(1000,'\n');
        
        //Se imprimira un mensaje de error 
        cout << "El dato ingresado no es correcto" << endl;
        
        //Se agrega cin.get para leer lo que imprime y el programa no se cierre 
        cin.get();
        }
		  
	    }
		while (ventas <=0); //Se agrega para hacer la repeticion de ingreso de ventas  
		
        
	    if ( ventas > 0 && ventas <= 500000 ){ //condicion #1 para cumplir en el total de las ventas y mostrar el salario que le corresponde 
			 	salario = 80.000; 
			    cout <<"El salario  del empleado es de: $"  <<fixed<<setprecision(3)<< salario <<endl;
			    cout << '\a';
	    }
	    
		else if  ( ventas > 500000 && ventas <= 1000000 ){ //condicion #2 para cumplir en el total de las ventas y mostrar el salario que le corresponde 
				salario = 160.000;
				cout <<"El salario  del empleado es de: $"  <<fixed<<setprecision(3)<<salario<<endl;
				cout << '\a';
		}
		
		else if  ( ventas > 1000000 && ventas <= 1500000 ){//condicion #3 para cumplir en el total de las ventas 
			 	salario = 320.000;
				cout <<"El salario  del empleado es de: $" <<fixed<<setprecision(3)<<salario<<endl;
			 	cout << '\a';	
		}
		
		else if  ( ventas > 1500000 && ventas <= 2500000 ){//condicion #4 para cumplir en el total de las ventas 
			 	salario = 450.000;
			 	cout <<"El salario  del empleado es de: $"  <<fixed<<setprecision(3)<<salario<<endl;
			 	cout << '\a';
		}
		
		else if  ( ventas > 2500000 && ventas <= 4000000 ){//condicion #5 para cumplir en el total de las ventas 
			 	salario = 550.000;
			 	cout <<"El salario  del empleado es de: $" <<fixed<<setprecision(3)<<salario<<endl; 
			 	cout << '\a';
    	}
    	
		else {
				salario = ventas * 0.20; //Si la venta es mayor a 4000000 hacer descuento del 20%
				cout <<"El salario  del empleado es de: $" <<fixed<<setprecision(3)<<salario<<endl;
				cout << '\a';	
		}
	    
			 return (0);
        
		} 
