/*
 * ingresarKM.c
 *
 *  Created on: 8 abr. 2022
 *      Author: Bushi
 */

#include <stdio.h>
#include <stdlib.h>

int ingresarKM(void){
	setbuf(stdout,NULL);
	int x;
	printf("KiloMetros ingresados: ");
	scanf("%d",&x);

	return x;
	// retornar la x para operarla
}
