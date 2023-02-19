/*Escribir un programa que, a partir del ingreso de un n�mero entero, y mediante la utilizaci�n de una 
funci�n recursiva verEnBinario, permita visualizar el n�mero binario equivalente por pantalla. */

#include <stdio.h>
#include <math.h>

void ingresarEntero();
int verEnBinario(int);

int entero;

int main(){
	ingresarEntero();
	printf("El numero convertido a binario es: ");
	verEnBinario(entero);
	return 0;
}

void ingresarEntero(){
	printf("Ingrese un numero entero: ");
	scanf("%d", &entero);
}

int verEnBinario(int pNum){
	if( pNum >= 1 ){	
		verEnBinario(pNum/2);	
		printf("%d", pNum%2 );
	}
}
