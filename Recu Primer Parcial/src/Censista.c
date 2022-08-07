/*
 * Censista.c
 *
 *  Created on: 23 jun. 2022
 *      Author: Padrino
 */


typedef struct
{
	int legajoCensista;
	char nombre;
	int edad;
	int telefono;
}Censista;

void cargarCensistas(Censista arreglo[4])
{
	for(int i =0; i<1;i++)
	{
		printf("Ingrese el legajo del censita");
		fflush(stdin);
		scanf("%i",&arreglo[i].legajoCensista);
		printf("Ingrese el nombre del censista");
		scanf("%c",&arreglo[i].nombre);
		printf("Ingrese la edad");
		scanf("%i",&arreglo[i].edad);
		printf("Ingrese el numero de telefono");
		scanf("%i",&arreglo[i].telefono);
	}
}

void modificarCensistas()
{

}
