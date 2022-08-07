/*
 * unt.c
 *
 *  Created on: 22 may. 2022
 *      Author: Padrino
 */
#include <stdio.h>
#include <stdio.h>


typedef struct{
	char idVivienda; //(comienza en 20000,autoincremental)
	char calle[25]; //(Maximo 25 caracteres)
	int cantidadPersonas;
	int cantidadHabitaciones;
	char tipoVivienda; //1.Casa 2.Departamento 3.Casilla 4.Rancho
	char legajoCensista; //(Inicializar)
}eVivienda;

eVivienda *puntero;
eVivienda *lt;

void leer()
{
	int i;

	system("cls");

	for(i=0; i<3;i++)
	{
		printf("-----------------------------\n");
		printf("\nDatos de vivienda",i+1);
		printf("idVivienda");
		scanf("%s",&puntero[i].idVivienda);
		printf("calle");
		scanf("%s",&puntero[i].calle);
		printf("cantidadPersona");
		scanf("%d",&puntero[i].cantidadPersonas);
		printf("cantidadHabitaciones");
		scanf("%d",&puntero[i].cantidadHabitaciones);
		printf("tipoVivienda");
		scanf("%s",&puntero[i].tipoVivienda);
		printf("legajoCensista");
		scanf("%s",&puntero[i].legajoCensista);

	}
}

void mostrar()
{
	system("cls");
	for(int i=0; i<3; i++)
	{
		printf("-------------------------\n");
		printf("\n\nDatos de vivienda",i+1);
		printf("La id de la vivienda es: \n",&puntero[i].idVivienda);
		printf("La calle es: \n",&puntero[i].calle);
		printf("La cantidad de personas es: \n",&puntero[i].cantidadPersonas);
		printf("La cantidad de habitaciones es: \n",&puntero[i].cantidadHabitaciones);
		printf("El tipo de vivienda es: \n",&puntero[i].tipoVivienda);
		printf("El legajo del censista es: \n",&puntero[i].legajoCensista);
		printf("-------------------------------\n");
	}
	system("pause");
}

void menu()
{
	int select;

	system("cls");

	printf("-------------------------\n");
	printf("Opciones disponibles:\n");
	printf("1.IdVivienda \n");
	printf("2.Calle \n");
	printf("3.Cantidad de personas \n");
	printf("4.Cantidad de habitaciones \n");
	printf("5.Tipo de vivienda \n");
	printf("6.Legajo del censista \n");
	printf("----------------------\n");
	printf("Seleccione: \n");
	scanf("%d",&select);

	do
	{
		switch(select)
		{
			case 1:
			{
				leer();
				menu();
				break;
			}
			case 2:
			{
				mostrar();
				menu();
				break;
			}
			case 3:
			{
				printf("exit");
				break;
			}
			default:
			{
				printf("La opcion que usted ha seleccionado no esta disponible\n");
				printf("Por favor, vuelva a intentarlo\n");
				system("pause");
				menu();
			}
		}
	}while(select == 3);
}

typedef struct{
	char legajoCensista;
	char nombre;
	int edad;
	int telefono;
}eCensista;







