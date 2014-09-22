/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión: 0.57
 * 
 * Nombre del archivo: Alcancia.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Alcancia.h"

int main()
{
	
	Alcancia marranito; //Se Instancia un objeto marranito de la clase Alcancia

	marranito.agregar20(); // Se agrega una moneda de 20
	marranito.agregar50(); // Se agrega una moneda de 50
	marranito.agregar100(); // Se agrega una moneda de 100
	marranito.agregar200(); // Se agrega una moneda de 200
	marranito.agregar500(); // Se agrega una moneda de 500
        marranito.agregarBitCoins(); // se agrega una unidad de Bitcoin
        
               
        marranito.setCant20(10);
        cout<<"Se introducen: "<<marranito.getCant20()<<" monedas de $ 20"<<endl;//muestra en pantalla
        marranito.setCant50(3);
        cout<<"Se introducen: "<<marranito.getCant50()<<" monedas de $ 50"<<endl;
        marranito.setCant100(8);
        cout<<"Se introducen: "<<marranito.getCant100()<<" monedas de $ 100"<<endl;//muestra en pantalla
        marranito.setCant200(18);
        cout<<"Se introducen: "<<marranito.getCant200()<<" monedas de $ 200"<<endl; //muestra en pantalla       
        marranito.setCant500(5);
        cout<<"Se introducen: "<<marranito.getCant500()<<" monedas de $ 500"<<endl;  //muestra en pantalla  
        marranito.setBitcoin(1.5);
        cout<<"Se introducen: "<<marranito.getBitcoin()<<" unidades de Bitcoin"<<endl;//muestra en pantalla
	
        
        marranito.calcularCantidadesCop ();
        marranito.calcularTotalCop ();
        marranito.calcularTotalBtc();
        marranito.calcularTotalAlcancia();
        cout << "El total de la Alcancía en Pesos (incluido la cantidad de Bitcoin convertidos) "//muestra en pantalla
                <<endl;
        cout<<"es de: $ "<<marranito.getTotalAlcancia()<<" Pesos"<<endl;
        marranito.romperAlcancia ();
        marranito.estadoAlcancia();
        
                
	//cout<<"El marranito tiene:"<<marranito.mostrarTotal()<<end;
}