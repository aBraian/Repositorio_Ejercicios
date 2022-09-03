/*
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120
*/

#include <stdio.h>
#include <stdlib.h>
#include "pedirNumero.h"

#define MAXIMO 10
#define MINIMO -10

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int numeroIngresado;
	int numeroFactorial;
	int flagNegativo;
	numeroFactorial = 1;
	flagNegativo = 0;
	numeroIngresado = pedirEntero(MAXIMO, MINIMO);
	if(numeroIngresado < 0){
		numeroIngresado *= -1;
		flagNegativo = 1;
	}
	for(i = 1; i <= numeroIngresado; i++){
		if(!numeroIngresado){
			break;
		}
		else{
			numeroFactorial *= i;
		}
	}
	if(flagNegativo){
		numeroFactorial *= -1;
	}
	printf("Factorial de %d! = %d", numeroIngresado, numeroFactorial);
	return EXIT_SUCCESS;
}
