/*
 * menuPrincipal.c
 *
 *  Created on: 8 abr. 2022
 *      Author: Bushi
 */

#include <stdio.h>
#include <stdlib.h>
#include "ingresarKM.h"

void menuPrincipal(void){

	setbuf(stdout,NULL);

	int option;

	do{
		printf("1-Ingrese kilometros \n");
		printf("2-Ingrese precio de vuelos \n");
		printf("3-Calcular todos los costos \n");
		printf("4-Informar resultados\n");
		printf("5-Carga forzada de datos\n");
		printf("6-Salir\n");

		scanf("%d",&option);

		switch(option){
			case 1:
				ingresarKM();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				printf("Error");
				break;
		}

	}while(option!=6);
}
