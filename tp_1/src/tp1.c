/*
 ============================================================================
 Name        : tp1.c
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
				scanf("%d",&km);
				km = validarEntero(km);
				printf("km ingresados: %d\n",km);
				break;
			case 2:
				printf("ingrese precio aerolineas: \n");
				scanf("%d",&precioAerolineas);
				precioAerolineas = validarEntero(precioAerolineas);
				printf("precio de aerolineas ingresado: %d\n",precioAerolineas);
				printf("ingrese precio latam\n");
				scanf("%d",&precioLatam);
				precioLatam = validarEntero(precioLatam);
				printf("precio de latam ingresado: %d\n",precioLatam);
				break;
			case 3:
				tarjetaDebitoA = descuento(precioAerolineas,10);
				tarjetaDebitoL = descuento(precioLatam,10);
				tarjetaCreditoA	= incremento(precioAerolineas,25);
				tarjetaCreditoL	= incremento(precioLatam,25);
				bitcoinA = BTC(precioAerolineas);
				bitcoinL = BTC(precioLatam);
				precioKmA = precioKmUnitario(km,precioAerolineas);
				precioKmL = precioKmUnitario(km,precioLatam);
				diferenciaDinero = diferencia(precioAerolineas,precioLatam);
				break;
			case 4:
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
			case 10:
				break;
			default:
				printf("Error\n");
				break;
		}

	}while(menu!=10);

	return EXIT_SUCCESS;
}
