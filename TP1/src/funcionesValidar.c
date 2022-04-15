/*
 * funcionesValidar.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Bushi
 */


int validarEntero(int a){
	int b;
	if(a<1){
		do{
			printf("ingrese positivo");
			scanf("%d",&b);
		}while(b<1);
		return b;
	}else{
		return a;
	}
}
