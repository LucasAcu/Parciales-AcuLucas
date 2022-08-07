/*
 * Vivienda.c
 *
 *  Created on: 23 jun. 2022
 *      Author: Padrino
 */


typedef struct
{
	int idVivienda;
	char calle[25];
	int cantidadPersonas;
	int cantidadHabitaciones;
	char tipoVivienda;
	char legajoCensista;
	int idCatastro;
}Vivienda;

void cargarViviendas(Vivienda arreglo[7])
{
	for(int i = 0; i < i<7;i++)
	{
		printf("ingrese el id de la vivienda");
		fflush(stdin);
		scanf("%id", &arreglo[i].idVivienda);
		printf("Ingrese el nombre de la calle");
		gets(arreglo[i].calle);
		printf("ingrese la cantidad de personas");
		scanf("%i",&arreglo[i].cantidadPersonas);
		printf("Ingrese la cantidad de habitaciones");
		scanf("%i",&arreglo[i].cantidadHabitaciones);
		printf("Ingrese el tipo de vivienda");
		scanf("%c",&arreglo[i].tipoVivienda);
		printf("Ingrese el legajo del cencista");
		scanf("%c",&arreglo[i].legajoCensista);
		printf("Ingrese el id del catastro");
		scanf("%i",&arreglo[i].idCatastro);

	}
}

void modificarVivienda(Vivienda arreglo[])
{

}
