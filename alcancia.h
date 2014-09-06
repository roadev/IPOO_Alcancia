/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión: 0.1.4.1
 * 
 * Nombre de la Clase: Alcancia
 * Responsabilidad: 
 * Colaboración: 

 */

#ifndef _ALCANCIA_H_
#define _ALCANCIA_H_

class Alcancia
{
public: // Métodos
	Alcancia();
	~Alcancia();
	void agregar20();
	void agregar50();
	void agregar100();
	void agregar200();
	void agregar500();
	void mostrarTotal();
	void mostrarCantidades();
	void romperAlcancia();
	void setCant20(int cant);
	void setCant50(int cant);
	void setCant100(int cant);
	void setCant200(int cant);
	void setCant500(int cant);
	int getCant20();
	int getCant50();	
	int getCant100();
	int getCant200();
	int getCant500();
	
protected:

private: // Atributos
	int cant20;
	int cant50;
	int cant100;
	int cant200;
	int cant500;
	int totalDinero;

};

#endif // _ALCANCIA_H_
