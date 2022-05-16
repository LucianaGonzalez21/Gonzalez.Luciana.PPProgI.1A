/*
 ============================================================================
 Name        : parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <String.h>


int main(void) {
	setbuf(stdout, NULL);

	return EXIT_SUCCESS;
}


//Ejercicio 1
/*
 * Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto y
 * devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main
 *
 */
float aplicarAumento(float precio)
{
	int todoOk=-1;
	float precioConAumento;

	if(precio>0)
	{
		precioConAumento = precio + precio * .05;
	}

	if(precio<0)
	{
	    return todoOk;
	}
	else
	{
	    return precioConAumento;
	}
}

//Ejercicio 2
/**
 * Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer par�metro,
 * un car�cter como segundo y otro car�cter  como tercero,  la misma deber� reemplazar cada ocurrencia del segundo par�metro por el tercero
 * y devolver la cantidad de veces que se reemplazo ese car�cter  en la cadena
 *
 */

int reemplazarCaracteres(char* cadena, char caracterA, char caracterB)
{
	int contador=0;

	if(cadena!=NULL)
	{
		for(int i=0; i<strlen(cadena);i++)
		{
			if(cadena[i] == caracterA)
			{
				cadena[i] = caracterB;
				contador++;
			}
		}
	}

	return contador;
}


//Ejercicio 3
/**
 * Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha estructura por tipo.
 * Ante igualdad de tipo deber� ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.
 */

typedef struct{
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;


int ordenarPorTipo(eVacuna* vacunas, int tam)
{
    int todoOk=0;
    eVacuna aux;

    if(vacunas!=NULL && tam>0)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(vacunas[i].tipo>vacunas[j].tipo ||
                    (vacunas[i].tipo == vacunas[j].tipo && vacunas[i].efectividad>vacunas[j].efectividad))
                    {
                        aux = vacunas[i];
                        vacunas[i] = vacunas [j];
                        vacunas[j] = aux;
                    }
            }
        }
    }

    return todoOk;
}
