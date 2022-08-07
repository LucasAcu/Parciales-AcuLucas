/*
 * Censista.c
 *
 *  Created on: 23 jun. 2022
 *      Author: Padrino
 */
#include <stdio.h>

typedef struct
{
	int legajoCensista;
	char nombre;
	int edad;
	int telefono;
}Censista;

void cargarCensistas(Censista arreglo[4])
{
	for(int i =0; i<4;i++)
	{
		printf("ingrese el legajo del censista");
		fflush(stdin);
		scanf("%i",&arreglo[i].legajoCensista);
		printf("Ingrese el nombre");
		scanf("%c",&arreglo[i].nombre);
		printf("Ingrese la edad");
		scanf("%i",&arreglo[i].edad);
		printf("ingrese el telefono");
		scanf("%i",&arreglo[i].telefono);
	}
}

void modificarCensistas()
{

}

void listarCensistas(Censista arreglo[4])
{

}
