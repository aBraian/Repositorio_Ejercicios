/*
Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit,
validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua
para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
Extra:
*/

#include <stdio.h>
#include <stdlib.h>
#include "validacionTemperatura.h"
#include "pasajeTemperatura.h"

#define MAXIMO_CELSIUS 100
#define MINIMO_CELSIUS -43
#define MAXIMO_FARENHEIT 212
#define MINIMO_FARENHEIT -45.4

int main(void) {
	setbuf(stdout, NULL);
	int retornoCelsius;
	int retornoFarenheit;
	float temperaturaCelsius;
	float temperaturaFarenheit;
	retornoCelsius = validacionTemperatura(MAXIMO_CELSIUS, MINIMO_CELSIUS, &temperaturaCelsius,
			         "Ingrese grados celsius: ", "Fuera de rango. Vuelva a ingresar grados celsius: ");
	retornoFarenheit = validacionTemperatura(MAXIMO_FARENHEIT, MINIMO_FARENHEIT, &temperaturaFarenheit,
	         	 	   "Ingrese grados farenheit: ", "Fuera de rango. Vuelva a ingresar grados farenheit: ");
	if(!(retornoCelsius && retornoFarenheit)){
		pasajeAFarenheit(temperaturaCelsius, "Grados Celsius a Farenheit: ");
		pasajeACelsius(temperaturaFarenheit, "Grados Farenheit a Celsius: ");
	}
	return EXIT_SUCCESS;
}
