/*
 * funciones1.c
 *
 *  Created on: 8 abr. 2022
 *      Author: Bushi
 */

int validarKmPositivo(void){
	int x;
	printf("Ingrese km: ");
	scanf("%d",&x);
	while(x<1){
		printf("Kilometros no validos");
		scanf("%d",&x);
	}
	return x;
}

int validarAerolineasPositivo(void){
	int y;
	printf("Ingrese precio aerolineas: ");
	scanf("%d",&y);
	while(y<1){
		printf("Precio no validos");
		scanf("%d",&y);
	}
	return y;
}

int validarLatamPositivo(void){
	int z;
	printf("Ingrese precio latam: ");
	scanf("%d",&z);
	while(z<1){
		printf("Precio no validos");
		scanf("%d",&z);
	}
	return z;
}

