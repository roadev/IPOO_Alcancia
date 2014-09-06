/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión:
 * 
 * Nombre de la Clase: Alcancia
 * Responsabilidad: 
 * Colaboración: 

 */

#include "alcancia.h"
#include <iostream>
using namespace std;

Alcancia::Alcancia()
{
	cant20 = 0;
	cant50 = 0;
	cant100 = 0;
	cant200 = 0;
	cant500 = 0;
	totalDinero = 0;
}

Alcancia::~Alcancia()
{
	//Método destructor

}

void Alcancia::agregar20()
{
	cant20 = cant20 + 1; //Se incrementa la cantidad de monedas de 20 en 1.
	
}

void Alcancia::agregar50()
{
	cant50 = cant50 + 1; //Se incrementa la cantidad de monedas de 50 en 1.
	
}

void Alcancia::agregar100()
{
	cant100 = cant100 + 1; //Se incrementa la cantidad de monedas de 100 en 1.
	
}

void Alcancia::agregar200()
{
	cant200 = cant200 + 1; //Se incrementa la cantidad de monedas de 200 en 1.
	
}

void Alcancia::agregar500()
{
	cant500 = cant500 + 1; //Se incrementa la cantidad de monedas de 500 en 1.
	
}

void Alcancia::mostrarTotal()
{
        totalDinero = (cant20 * 20) + (cant50 * 50) + (cant100 * 100) + (cant200 * 200) + (cant500 * 500);
	cout<<"La cantidad total de dinero es:"<<totalDinero<<endl;
}

void Alcancia::mostrarCantidades()
{
	cout<<"La cantidad total de monedas de 20 es:"<<cant20<<endl;
	cout<<"La cantidad total de monedas de 50 es:"<<cant50<<endl;
	cout<<"La cantidad total de monedas de 100 es:"<<cant100<<endl;
	cout<<"La cantidad total de monedas de 200 es:"<<cant200<<endl;
	cout<<"La cantidad total de monedas de 500 es:"<<cant500<<endl;
}

void Alcancia::romperAlcancia()
{

        cant20 = 0;
        cant50 = 0;
        cant100 = 0;
        cant200 = 0;
        cant500 = 0;
	totalDinero = 0;
        cout<<"Ha roto su Alcancía :(, La cantidad total de dinero es:"<<totalDinero;

}

//get

int Alcancia::getCant20 ()
{
	return cant20;
}

int Alcancia::getCant50 ()
{
	return cant50;
}

int Alcancia::getCant100 ()
{
	return cant100;
}

int Alcancia::getCant200 ()
{
	return cant200;
}

int Alcancia::getCant500 ()
{
	return cant500;
}

// SET

void Alcancia::setCant20(int cant)
{
//cant20 = cant * cant20;
cant20 = cant;
}

void Alcancia::setCant50(int cant)
{
cant50 = cant;
}

void Alcancia::setCant100(int cant)
{
cant100 = cant * cant100;
}
void Alcancia::setCant200(int cant)
{
cant200 = cant;
}
void Alcancia::setCant500(int cant)
{
cant500 = cant;
}