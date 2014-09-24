/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión: 0.1.4.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#include "alcancia.h"
#include <iostream>
using namespace std;

int main()
{
	
	Alcancia marranito; //Se crea - Instancia un objeto

	marranito.agregar20(); // Se agrega una moneda de 20
	marranito.agregar50(); // Se agrega una moneda de 50
	marranito.agregar100(); // Se agrega una moneda de 100
	marranito.agregar200(); // Se agrega una moneda de 200
	marranito.agregar500(); // Se agrega una moneda de 500
               
        marranito.setCant20(10);
        cout<<"Se introducen: "<<marranito.getCant20()<<" monedas de $ 20"<<endl;
        marranito.setCant50(3);
        cout<<"Se introducen: "<<marranito.getCant50()<<" monedas de $ 50"<<endl;
        marranito.setCant100(8);
        cout<<"Se introducen: "<<marranito.getCant100()<<" monedas de $ 100"<<endl;
        marranito.setCant200(18);
        cout<<"Se introducen: "<<marranito.getCant200()<<" monedas de $ 200"<<endl;        
        marranito.setCant500(5);
        cout<<"Se introducen: "<<marranito.getCant500()<<" monedas de $ 500"<<endl;            
	
        marranito.mostrarCantidades ();
	marranito.mostrarTotal ();
        marranito.romperAlcancia();
        
                
	//cout<<"El marranito tiene:"<<marranito.mostrarTotal()<<end;
}