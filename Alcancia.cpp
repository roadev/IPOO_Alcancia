/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 02/09/14
 * Versión: 0.71
 * 
 * Nombre del archivo: Alcancia.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Alcancia.h"

Alcancia::Alcancia() //construtor, inicializa las variables
{
    cant20 = 0;
    cant50 = 0;
    cant100 = 0;
    cant200 = 0;
    cant500 = 0;
    totalCop = 0;
    totalBtc = 0;
    totalAlcancia = 0;
    valorBtcCop = 1 * 1967 * 402.00; //Precio del bitcoin en Pesos al 22/09/14, fuente: bitstamp.net
}

Alcancia::~Alcancia()
{
	//Método destructor

}

void Alcancia::agregar20(){
	cant20 = cant20 + 1; //Se incrementa la cantidad de monedas de 20 en 1.
	
}

void Alcancia::agregar50(){
	cant50 = cant50 + 1; //Se incrementa la cantidad de monedas de 50 en 1.
}

void Alcancia::agregar100(){
	cant100 = cant100 + 1; //Se incrementa la cantidad de monedas de 100 en 1.
}

void Alcancia::agregar200(){
	cant200 = cant200 + 1; //Se incrementa la cantidad de monedas de 200 en 1.
}

void Alcancia::agregar500(){
	cant500 = cant500 + 1; //Se incrementa la cantidad de monedas de 500 en 1.
}
void Alcancia::agregarBitCoins(){
         bitcoin++; // Agrega una unidad de Bitcoin, para cifras menores (decimales, usar SET).
}

void Alcancia::ingresarMarca(string brand){
    marca = brand;
}

void Alcancia::calcularTotalCop(){
        totalCop = (cant20 * 20) + (cant50 * 50) + (cant100 * 100) + (cant200 * 200) + (cant500 * 500);
	cout<<"La cantidad total de dinero en pesos es:"" " "$ "<<totalCop<<" pesos"<<endl;
}

void Alcancia::calcularCantidadesCop(){
	cout<<"La cantidad total de monedas de $ 20 es:"" " <<cant20<<endl;
	cout<<"La cantidad total de monedas de $ 50 es:"" " <<cant50<<endl;
	cout<<"La cantidad total de monedas de $ 100 es:"" " <<cant100<<endl;
	cout<<"La cantidad total de monedas de $ 200 es:"" " <<cant200<<endl;
	cout<<"La cantidad total de monedas de $ 500 es:"" " <<cant500<<endl;
}
void Alcancia::calcularTotalBtc(){
       cout<<"La cantidad total de dinero en BitCoins es:"" "<<bitcoin<<endl;
}

void Alcancia::calcularTotalAlcancia()
{
    totalAlcancia = (valorBtcCop*bitcoin) + totalCop ;
}

void Alcancia::calcular3X1000(){
    tresXmil = (totalAlcancia*0.003);
}

void Alcancia::romperAlcancia(){
        cant20 = 0;
        cant50 = 0;
        cant100 = 0;
        cant200 = 0;
        cant500 = 0;
        totalBtc = 0;
	totalCop = 0;
        bitcoin = 0;
        totalAlcancia = 0;
        
        cout<<"Ha roto su Alcancía :(, La cantidad total de dinero en la Alcancía es de:"" $"" "<<totalAlcancia
                <<endl;
}

void Alcancia::estadoAlcancia(){
    if(totalAlcancia == 0){
        cout <<"La Alcancía está rota, después de almacenar dinero, la suma total es igual a cero."<<endl;
    }
    else{
        cout<<"La Alcancía no está rota"<<endl;
    }
}

/*void Alcancia::estadoAlcancia(){
       if (totalAlcancia = 0){
            cout <<"La Alcancía está rota, después de almacenar dinero, la suma total es igual a cero."<<endl;                  
       }
       else{
            cout <<"La Alcancía no está rota."<<endl;
       }
}*/

//get devuelve un valor dado

int Alcancia::getCant20 (){
	return cant20;
}

int Alcancia::getCant50 (){
	return cant50;
}

int Alcancia::getCant100 (){
	return cant100;
}

int Alcancia::getCant200 (){
	return cant200;
}

int Alcancia::getCant500 (){
	return cant500;
}

double Alcancia::getBitcoin(){
    return bitcoin;
}

double Alcancia::getTotalAlcancia()
{
    return totalAlcancia;
}

double Alcancia::getTresXmil(){
    return tresXmil;
}

string Alcancia::getMarca(){
    return marca;
}

// SET modifica un valor a uno deseado

void Alcancia::setCant20(int cant){
        cant20 = cant20 + cant;
}

void Alcancia::setCant50(int cant){
        cant50 = cant50 + cant;
}

void Alcancia::setCant100(int cant){
        cant100 = cant100 + cant;
}
void Alcancia::setCant200(int cant)
{
        cant200 = cant200 + cant;
}
void Alcancia::setCant500(int cant){
        cant500 = cant500 + cant;
}

void Alcancia::setBitcoin(double btc){
    bitcoin = bitcoin + btc ;
}