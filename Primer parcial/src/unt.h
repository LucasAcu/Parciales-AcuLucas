/*
 * unt.h
 *
 *  Created on: 22 may. 2022
 *      Author: Padrino
 */

#ifndef UTN_H_
#define UTN_H_


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

void leer();
void mostrar();
void menu();

static int myGets(char* cadena,int longitud)
{

	return -1;
}

#endif /* UTN_H_ */
