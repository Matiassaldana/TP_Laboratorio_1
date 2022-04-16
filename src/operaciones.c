/*
 * operaciones.c
 *
 *  Created on: 16 abr 2022
 *      Author: Matias Saldaña
 */
#include <stdio.h>
#include <stdlib.h>

// Brief Realiza la division entre dos numeros y devuelve el resultado.
//param operador1 Es uno de los numeros solicitados.
//param operador2 Es uno de los numeros solicitador.
//param resultado Es donde se va a almacenar el resultado.
//
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
// Brief Realiza el descuento deseado de un numero ingresado.
//param operador1 El numero solicitado.
//param pResultado Es donde se va a almacenar el resultado.
//
int descuento(float operador1,float* pResultado)
{
	float descuento=10;
	float resultado;
	int retorno= -1;
	if(pResultado!=NULL)
		{
			descuento = (descuento*operador1)/100;
			resultado = operador1 - descuento;
			*pResultado= resultado;
			retorno= 0;
		}
	return retorno;
}
// Brief Realiza el incremento deseado de un numero ingresado.
//param operador1 El numero solicitado.
//param pResultado Es donde se va a almacenar el resultado.
//
int  interes(float operador1,float* pResultado)
{
	float resultado;
	int interes=25;
	int retorno= -1;
	if(pResultado!=NULL)
			{
				interes = (interes*operador1)/100;
				resultado = operador1 + interes;
				*pResultado= resultado;
				retorno= 0;
			}
	return retorno;
}
// Brief Realiza la resta entre dos numeros y devuelve el resultado.
//param operador1 Es uno de los numeros solicitados.
//param operador2 Es uno de los numeros solicitador.
//param resultado Es donde se va a almacenar el resultado.
//
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
