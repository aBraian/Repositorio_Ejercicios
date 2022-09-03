/*
 * validacionTemperatura.c
 *
 *  Created on: 3 sep. 2022
 *      Author: braia
 */

#include <stdio.h>
#include <stdlib.h>

int validacionTemperatura(int maximo, int minimo, float * temperatura, char * mensaje, char * mensajeError){
	float temperaturaIngresada;
	int retorno;
	retorno = -1;
	if(temperatura != NULL && maximo >= minimo){
		printf("%s", mensaje);
		scanf("%f", &temperaturaIngresada);
		fflush(stdin);
		while(temperaturaIngresada > maximo || temperaturaIngresada < minimo){
			printf("%s", mensajeError);
			scanf("%f", &temperaturaIngresada);
			fflush(stdin);
		}
	*temperatura = temperaturaIngresada;
	retorno = 0;
	}
	return retorno;
}
