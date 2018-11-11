//Este programa fue hecho por: Cesia Rebeca Reyes Escobar 
//Carnet:RE18012
//Librerias utilizadas
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>

using namespace std; 

//estructura para los datos del empleado
struct Empleado{
	char cod[5]; 
	char nombre[50];
	int edad;
	float salbase;
	float salliquido;
	float isss;
	float afp;
	float renta;
	float totalprestamo;
	char departamento[60];
	char puesto[60] ;  
	};
	
 //estructura para la sucursal de la empresa
	struct Sucursal{
		
		int numsucursal;
		char nombresucursal[60];
	};
	
	
    //calcula el descuento de ISSS
	float calisss(float sal,float tope);
	//calcula el descuento de AFP
	float calAfp (float sal, float tope); 
	// Calcula el descuento del Impuesto sonbre la renta
	float calRenta (float isss, float afp, float sal);
	void lim();
	
	
int main(){
	int n;
	//numero de empleados
	cout << "--------------------------" <<endl;
	cout << "Cuantos empleados tiene?: "<<endl;
	cout << "--------------------------" <<endl;
	cin>>n;
	
	// se llama la estructura y se identifica
	Empleado e[n];
	// se llama la estructura sucursal
	Sucursal s;
	int cp;
	int contador;
	
		//ciclo para aumentar el numero del empleado
		for(int i=0;i<n;i++)
			{
				cout<<"------EMPLEADO No.------"<<i+1<<endl;
				//imprime el dato que se esta pidiendo
				cout <<"Cod: ";
				// guarda el dato digitado en las variables de la estructura y segun el numero del empleado
				cin>>e[i].cod;
				
				cout << "Nombre: " ;
				cin>>e[i].nombre;
				cout << "Edad: ";
				cin>>e[i].edad; 
				cout << "Salbase: ";
				cin>>e[i].salbase; 
				//se llama la funcion del calculo del ISS
				e[i].isss=calisss(e[i].salbase,0.03);
				//se llama la funcion del calculo del Afp
				e[i].afp=calAfp(e[i].salbase,0.0725);
				//se llama la funcion del calculo del la Renta
				e[i].renta=calRenta(e[i].isss, e[i].afp, e[i].salbase);			
			}
			//llama la funcion limpiar pantalla
			lim();	
			 
		//recorre el numero de empleados para imprimir resultados	 
		for(int i=0; i<n;i++)
				{
					// se imprimen los resultados
					cout<<"------EMPLEADO No.------ "<<i+1<<endl;
					cout<<"Codigo: "<<e[i].cod<<endl;
					cout<<"Nombre: "<<e[i].nombre<<endl;
					cout<<"Edad: "<<e[i].edad<<endl;
					cout<<"Salario Base: "<<e[i].salbase<<endl;
					cout<<"Descuento del ISSS: "<<fixed<<setprecision(2)<<e[i].isss<<endl;// se imprime con dos decimales
					cout<<"Descuento del AFP: "<<fixed<<setprecision(2)<<e[i].afp<<endl;// se imprime con dos decimales
					cout<<"Descuento de la Renta: "<<fixed<<setprecision(2)<<e[i].renta<<endl;// se imprime con dos decimales
					cout<<endl;
				}
		
system ("pause");
}


//------------------- Funciones ------------------- //


void lim(){
	system ("cls");
}

float calisss (float sal, float tope)
	{
		//condicion para calcular el isss segun la tabla vigente del 30% que no sobrepase de 1000
		int isss=0;
		if(sal>=1000)
		isss=30;
		else
		isss=sal*0.03;
		return isss;
	}	

float calAfp  (float sal, float tope)
	{
		//condicion para calcular el AFP segun la tabla vigente
		int afp;
		afp= sal*0.0725;
		return afp;
	}	

float calRenta (float isss, float afp, float sal)
{
	float salNeto;
	float renta;
	// se calcula el salario base menos los descuentos del isss y el afp
	salNeto=sal-(isss+afp);
	//condicion para calcular la renta segun la tabla vigente
	if (salNeto>472 && salNeto<895.25){
		renta=((salNeto-472)*0.10)+17.67;
	}
	else if (salNeto>895.25 && salNeto<2038.11){
		renta=((salNeto-895.24)*0.20)+60;
	}
	else if (salNeto>2038.11){
		renta=((salNeto-2038.11)*.30)+288.57;
	}
	else{
		renta=0;
	}
	return renta;
}


