/* Asignatura: PROGRAMACIÓN ORIENTADA A OBJETOS (IPOO) 750081M
 * Archivo:Alcancia.h
 * Autor: Diana Marcela Cifuentes Potes
 * código: 1332332
 * Verison: 0.1
 * fecha Modificacion 19 de septiembre 
 * ESCUELA DE INGENIERÍA DE SISTEMAS Y COMPUTACIÓN
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
    void calcularTotalCop();
    void calcularTotalBtc();
    void calcularCantidadesCop();
    void calcularTotalAlcancia();
    string estadoAlcancia();
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
    string getEstadoAlcancia();
    double getTotalAlcancia();
    
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

};

#endif	/* ALCANCIA_H */
