/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión: 0.7
 * 
 * Nombre del archivo: Alcancia.h
 * Responsabilidad: 
 * Colaboración: 

 */
#include <iostream>
#include <string>
using namespace std;

#ifndef ALCANCIA_H
#define	ALCANCIA_H


class Alcancia {// aquí se crea la clase Alcancia
public://metodos
    Alcancia();//constructor
   ~Alcancia();// destructor
    void agregar20();
    void agregar50();
    void agregar100();
    void agregar200();
    void agregar500();
    void agregarBitCoins ();
    void ingresarMarca(string brand);
    void calcularTotalCop();
    void calcularTotalBtc();
    void calcularCantidadesCop();
    void calcularTotalAlcancia();
    void calcular3X1000();
    void estadoAlcancia();
    void romperAlcancia();
    void setCant20(int cant);
    void setCant50(int cant);
    void setCant100(int cant);
    void setCant200(int cant);
    void setCant500(int cant);
    void setBitcoin (double btc );
    int getCant20();
    int getCant50();	
    int getCant100();
    int getCant200();
    int getCant500(); 
    double getBitcoin();
    double getTotalAlcancia();
    double getTresXmil();
    string getEstadoAlcancia();
    string getMarca();
    
    
    
private://atributos de la clase
    int cant20;
    int cant50;
    int cant100;
    int cant200;
    int cant500;
    int totalDinero;
    double bitcoin;
    int totalBtc;// totalBtc es la cantidad de pesos en Bitcoins.
    int totalCop;//totalCop es la cantidad total de dinero en pesos colombianos.
    double valorBtcCop;
    double totalAlcancia;
    double tresXmil;
    string marca;

};

#endif	/* ALCANCIA_H */
