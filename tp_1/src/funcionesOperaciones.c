/*
 * funciones2.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Bushi
 */

int descuento(int a, int b){
	int x,descuento;
	x = (b*a)/100;
	descuento=a-x;
	return descuento;
}

int incremento(int a, int b){
	int x,incremento;
	x = (b*a)/100;
	incremento=a+x;
	return incremento;
}

float BTC(int a){
	float btc, btcPrecio;
	btcPrecio = 4606954.55;
	btc = btcPrecio/a;
	return btc;
}

float precioKmUnitario(int a,int b){
	float Km;
	Km = a/b;
	return Km;
}

int diferencia(int aerolineas, int latam){
	int resultado;
	if(aerolineas>latam||aerolineas==latam){
		resultado = aerolineas-latam;
		return resultado;
	}else{
		resultado = latam-aerolineas;
		return resultado;
	}
}
