/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión:
 * 
 * Nombre de la Clase:
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
        cout<<"La cantidad actual de monedas de $ 20 es:"<<marranito.getCant20()<<endl;
        
        marranito.setCant100(2);
        cout<<"La cantidad actual de monedas de $ 100 es:"<<marranito.getCant100()<<endl;
                
                      
	marranito.mostrarCantidades ();
	marranito.mostrarTotal ();
        marranito.romperAlcancia();
        
                
	//cout<<"El marranito tiene:"<<marranito.mostrarTotal()<<end;
}
