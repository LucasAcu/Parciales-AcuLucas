/*
 * Catastro.c
 *
 *  Created on: 23 jun. 2022
 *      Author: Padrino
 */
#include <stdio.h>

typedef struct
{
	int idCatastro;
	char localidad;
	char manzana;
	int parcela;
}Catastro;

void cargarCatastro(Catastro arreglo[4])
{
	for(int i=0; i<4;i++)
	{
		printf("Ingrese el id del catastro");
		scanf("%i",&arreglo[i].idCatastro);
		printf("Ingrese la localidad");
		scanf("%c",&arreglo[i].localidad);
		printf("Ingrese el nombre de la manzana");
		scanf("%c",&arreglo[i].manzana);
		printf("ingrese la parcela");
		scanf("%i",&arreglo[i].parcela);
	}
}
