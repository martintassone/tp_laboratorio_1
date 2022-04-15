/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesValidar.h"
#include "funcionesOperaciones.h"


int main(void) {
	setbuf(stdout,NULL);

	int menu, km, precioAerolineas, precioLatam;
	int tarjetaDebitoA, tarjetaCreditoA;
	int tarjetaDebitoL, tarjetaCreditoL;
	int diferenciaDinero;
	float bitcoinA, bitcoinL, precioKmA, precioKmL;
	int banderaUno, banderaDos, banderaTres;

	banderaUno = 0;
	banderaDos = 0;
	banderaTres = 0;

	do{
		printf("1-Ingrese kilometros \n");
		printf("2-Ingrese precio de vuelos \n");
		printf("3-Calcular todos los costos \n");
		printf("4-Informar resultados\n");
		printf("5-Carga forzada de datos\n");
		printf("6-Salir\n");

		scanf("%d",&menu);

		switch(menu){
			case 1:
				printf("Kilometros: \n");
				scanf("%d",&km);
				km = validarEntero(km);
				printf("Kilometros ingresados: %d\n",km);
				banderaUno++;
				break;
			case 2:
				printf("Ingrese precio aerolineas: \n");
				scanf("%d",&precioAerolineas);
				precioAerolineas = validarEntero(precioAerolineas);
				printf("Precio de aerolineas ingresado: %d\n",precioAerolineas);
				printf("Ingrese precio latam: \n");
				scanf("%d",&precioLatam);
				precioLatam = validarEntero(precioLatam);
				printf("Precio de latam ingresado: %d\n",precioLatam);
				banderaDos++;
				break;
			case 3:
				if(banderaUno>=1&&banderaDos>=1){
					tarjetaDebitoA = descuento(precioAerolineas,10);
					tarjetaDebitoL = descuento(precioLatam,10);
					tarjetaCreditoA	= incremento(precioAerolineas,25);
					tarjetaCreditoL	= incremento(precioLatam,25);
					bitcoinA = BTC(precioAerolineas);
					bitcoinL = BTC(precioLatam);
					precioKmA = precioKmUnitario(precioAerolineas,km);
					precioKmL = precioKmUnitario(precioLatam,km);
					diferenciaDinero = diferencia(precioAerolineas,precioLatam);
					banderaTres++;
					banderaUno--;
					banderaDos--;
					printf("Precios calculados\n");
				}else{
					printf("No se puede cacular sin los precios y los kilometros\n");
				}
				break;
			case 4:
				if(banderaTres>=1){
					printf("\nAerolineas: \n");
					printf("Precio con tarjeta de debito: %d\n",tarjetaDebitoA);
					printf("Precio con tarjeta de credito: %d\n",tarjetaCreditoA);
					printf("Precio pagado con Bitcoin: %f\n",bitcoinA);
					printf("Precio unitario: %f\n",precioKmA);
					printf("\nLatam: \n");
					printf("Precio con tarjeta de debito: %d\n",tarjetaDebitoL);
					printf("Precio con tarjeta de credito: %d\n",tarjetaCreditoL);
					printf("Precio pagado con Bitcoin: %f\n",bitcoinL);
					printf("Precio unitario: %f\n",precioKmL);
					printf("\nLa diferencia de precio es: %d\n\n",diferenciaDinero);
					banderaTres--;
				}else{
					printf("No se puede mostrar si no se calculo previamente\n");
				}
				break;
			case 5:
				km = 7090;
				precioAerolineas = 162965;
				precioLatam = 159339;
				tarjetaDebitoA = descuento(precioAerolineas,10);
				tarjetaDebitoL = descuento(precioLatam,10);
				tarjetaCreditoA	= incremento(precioAerolineas,25);
				tarjetaCreditoL	= incremento(precioLatam,25);
				bitcoinA = BTC(precioAerolineas);
				bitcoinL = BTC(precioLatam);
				precioKmA = precioKmUnitario(km,precioAerolineas);
				precioKmL = precioKmUnitario(km,precioLatam);
				diferenciaDinero = diferencia(precioAerolineas,precioLatam);
				printf("\nAerolineas: \n");
				printf("Precio con tarjeta de debito: %d\n",tarjetaDebitoA);
				printf("Precio con tarjeta de credito: %d\n",tarjetaCreditoA);
				printf("Precio pagado con Bitcoin: %f\n",bitcoinA);
				printf("Precio unitario: %f\n",precioKmA);
				printf("\nLatam: \n");
				printf("Precio con tarjeta de debito: %d\n",tarjetaDebitoL);
				printf("Precio con tarjeta de credito: %d\n",tarjetaCreditoL);
				printf("Precio pagado con Bitcoin: %f\n",bitcoinL);
				printf("Precio unitario: %f\n",precioKmL);
				printf("\nLa diferencia de precio es: %d\n",diferenciaDinero);
				break;
			case 6:
				printf("Programa terminado");
				break;
			default:
				printf("Error, inserte opcion valida\n");
				break;
		}

	}while(menu!=6);

	return EXIT_SUCCESS;
}
