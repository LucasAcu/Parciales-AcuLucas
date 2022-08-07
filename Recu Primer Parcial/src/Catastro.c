/*
 * Catastro.c
 *
 *  Created on: 23 jun. 2022
 *      Author: Padrino
 */


typedef struct
{
	int idCastro;
	char localidad;
	char manzana;
	int parcela;
}Catastro;

void cargarCatastro(Catastro arreglo[4])
{
	for(int i=0; i<1;i++)
	{
		printf("Ingrese el id del Catastro");
		fflush(stdin);
		scanf("%i",&arreglo[i].idCastro);
		printf("Ingrese la localidad");
		scabf("%c",&arreglo[i].localidad);
		printf("Ingrese la manzana");
		scanf("%c",&arreglo[i].manzana);
		printf("Ingrese la parcela");
		scanf("%i",&arreglo[i].parcela);
	}
}
