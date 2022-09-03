/*
 * pedirNumero.c
 *
 *  Created on: 3 sep. 2022
 *      Author: braia
 */

#include <stdio.h>
#include <stdlib.h>

int pedirEntero(int maximo, int minimo){
	int numeroIngresado;
	if(maximo >= minimo){
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);
		fflush(stdin);
		while(numeroIngresado > maximo || numeroIngresado < minimo){
			printf("Fuera de rango. Vuelva a ingresar un numero: ");
			scanf("%d", &numeroIngresado);
			fflush(stdin);
		}
	}
	return numeroIngresado;
}

