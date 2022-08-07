/*
 ============================================================================
 Name        : Recu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Vivienda.h"
#include "Vivienda.c"
#include "Censista.h"
#include "Censista.c"
#include "Catastro.h"
#include "Catastro.c"

int main(void) {

	int opcion;

	do{

		printf("Menu\n");
		printf("1.Alta Viviendas\n");
		printf("2.Modificar Viviendas\n");
		printf("3.Baja Viviendas\n");
		printf("4.Listar Viviendas\n");
		printf("5.Listar Censistas\n");
		printf("6.Salir");

		switch(opcion)
		{
		case 1: void cargarViviendas(Vivienda arreglo[7]);
			break;
		case 2: void modificarVivienda(Vivienda arreglo[7]);
			break;
		case 3: void bajaViviendas(Vivienda arreglo[7]);
			break;
		case 4: void listarViviendas(Vivienda arreglo[7]);
			break;
		case 5: void listarCensistas(Censista arreglo[4]);
			break;
		case 6:
			break;
		}
		system("cls");
	}while(opcion == 6);
	return EXIT_SUCCESS;
}
