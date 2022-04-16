/*
 * operaciones.c
 *
 *  Created on: 16 abr 2022
 *      Author: matia
 */
#include <stdio.h>
#include <stdlib.h>

int  dividir(float operador1, float operador2, float* resultado)
{
	int retorno= -1;
	if(operador2 != 0)
	{
		*resultado = operador1/operador2;
		retorno = 0;
	}
	return retorno;
}
int descuento(float operador1,float* pResultado)
{
	float descuento;
	float resultado;
	int retorno= -1;
	if(pResultado!=NULL)
		{
			descuento = (10*operador1)/100;
			resultado = operador1 - descuento;
			*pResultado= resultado;
			retorno= 0;
		}
	return retorno;
}
int  interes(float operador1,float* pResultado)
{
	float resultado;
	int interes;
	int retorno= -1;
	if(pResultado!=NULL)
			{
				interes = (25*operador1)/100;
				resultado = operador1 + interes;
				*pResultado= resultado;
				retorno= 0;
			}
	return retorno;
}
int  restar(float operador1,float operador2, float* pResultado)
{
	float resultado;
	int retorno= -1;
	if(pResultado!=NULL && operador1>operador2)
	{
		resultado=operador1-operador2;
		*pResultado=resultado;
	}
	if(pResultado!=NULL && operador2>operador1)
	{
		resultado=operador2-operador1;
		*pResultado=resultado;
	}
	return retorno;
}
