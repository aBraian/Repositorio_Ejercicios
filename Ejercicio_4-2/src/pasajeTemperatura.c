/*
 * pasajeTemperatura.c
 *
 *  Created on: 3 sep. 2022
 *      Author: braia
 */

#include <stdio.h>
#include <stdlib.h>

void pasajeACelsius(float temperaturaIngresada, char * mensaje){
	float gradosCelsius;
	gradosCelsius = (temperaturaIngresada - 32) / 1.8;
	printf("\n");
	printf("%s%.2f", mensaje, gradosCelsius);
}

void pasajeAFarenheit(float temperaturaIngresada, char * mensaje){
	float gradosFarenheit;
	gradosFarenheit = temperaturaIngresada * 1.8 + 32;
	printf("\n");
	printf("%s%.2f", mensaje, gradosFarenheit);
}
