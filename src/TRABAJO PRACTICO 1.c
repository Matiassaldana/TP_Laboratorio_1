/*
 ============================================================================
 Name        : TRABAJO.c
 Author      : Matias Saldaña
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"


int main(void) {
	setbuf(stdout,NULL);

	float kilometros;
	float precioAerolineas;
	float precioLatam;

	float resultadoCreditoLatam;
	float resultadoCreditoAerolineas;
	float resultadoDebitoLatam;
	float resultadoDebitoAerolineas;
	float precioBitcoin;
	float resultadoViajeLatamBitcoin;
	float resultadoViajeAerolineasBitcoin;
	float resultadoUnitarioLatam;
	float resultadoUnitarioAerolineas;
	float diferenciaPrecios;
	int opcion;
	float descuentoAerolineas;
	float descuentoLatam;
	float bitcoinLatam;
	float bitcoinAerolineas;
	float unitarioLatam;
	float unitarioAerolineas;
	float creditoAerolineas;
	float interesLatam;
	float resultadoDiferenciaPrecios;

	float cargaForzadaDescuentoAerolineas;
	float cargaForzadaDescuentoLatam;
	float cargaForzadaDebitoLatam;
	float cargaForzadaDebitoAerolineas;
	float cargaForzadaCreditoAerolineas;
	float cargaForzadaCreditoLatam;
	float cargaForzadaBitcoinsLatam;
	float cargaForzadaUnitarioAerolineas;

	float cargaForzadaInteresLatam;
	float cargaForzadaInteresAerolineas;
	float cargaForzadaBitcoinsAerolineas;
	float cargaForzadaUnitarioLatam;
	float cargaForzadaDiferenciaDePrecios;


	precioBitcoin= 4623307.68;

	//OPCION 1:

	//OPCION 2


	//PASO 3: CALCULAR

	//PASO 4: MOSTRAR RESULTADOS


	do{
		printf("1.Ingresar kilometros \n");
		printf("2.Ingresar el precio de Aerolineas y Latam \n");
		printf("3.Calcular precios \n");
		printf("4.Mostrar listado de precios \n");
		printf("5.Carga forzada \n");
		printf("6.Salir \n\n");
		printf("Elija una opcion para continuar[1,2,3,4,5,6]\n");
		scanf("%d",&opcion);

	switch (opcion)
	{
	case 1:
		printf("Ingresar Kilometros\n");
		scanf("%f",&kilometros);
		fflush(stdin);
		while(kilometros<100)
				{
					printf("ERROR.Debe ingresar al menos 100 kilometros\n\n");
					printf("Ingresar Kilometros\n");
					scanf("%f",&kilometros);
				}
	break;
	case 2:
		printf("Ingresar el precio de Aerolineas\n");
		scanf("%f",&precioAerolineas);
		printf("Ingresar el precio de Latam\n");
		scanf("%f",&precioLatam);

		while(precioAerolineas==0 || precioLatam==0)
		{
			printf("ERROR.Debe ingresar un precio para ambas aerolineas\n\n");
			printf("Ingresar el precio de Aerolineas\n");
			scanf("%f",&precioAerolineas);
			printf("Ingresar el precio de Latam\n");
			scanf("%f",&precioLatam);
		}
	break;
	case 3:
		descuentoAerolineas= descuento(precioAerolineas,&resultadoDebitoAerolineas);
		descuentoLatam= descuento(precioLatam,&resultadoDebitoLatam);

		creditoAerolineas=interes(precioAerolineas,&resultadoCreditoAerolineas);
		interesLatam=interes(precioLatam,&resultadoCreditoLatam);

		bitcoinAerolineas= dividir(precioAerolineas,precioBitcoin,&resultadoViajeAerolineasBitcoin);
		bitcoinLatam= dividir(precioLatam,precioBitcoin,&resultadoViajeLatamBitcoin);

		unitarioAerolineas= dividir(precioAerolineas,kilometros,&resultadoUnitarioAerolineas);
		unitarioLatam= dividir(precioLatam,kilometros,&resultadoUnitarioLatam);

		diferenciaPrecios= restar(precioLatam,precioAerolineas,&resultadoDiferenciaPrecios);

		if(opcion==3)
			{
				printf("Los precios han sido calculados, presione 4 para mostrar los resultados \n\n");
			}
	break;
	case 4:
		printf("KMS ingresados:%f",kilometros);

		printf("Aerolineas:$ %.2f \n",precioAerolineas);
		printf("Precio con tarjeta de débito :$ %.2f \n",resultadoDebitoAerolineas),
		printf("Precio con tarjeta de crédito :$ %.2f \n",resultadoCreditoAerolineas);
		printf("Precio pagando con bitcoin :BTC %.2f \n",resultadoViajeAerolineasBitcoin);
		printf("Precio unitario :$ %.2f \n\n",resultadoUnitarioAerolineas);
		printf("Latam:$ %.2f \n",precioLatam);

		printf("Precio con tarjeta de débito :$ %.2f \n",resultadoDebitoLatam);
		printf("Precio con tarjeta de crédito :$ %.2f \n",resultadoCreditoLatam);
		printf("Precio pagando con bitcoin :BTC %.2f  \n",resultadoViajeLatamBitcoin);
		printf("Precio unitario :$ %.2f \n\n",resultadoUnitarioLatam);

		printf("La diferencia de precio es de:$ %.2f \n\n",resultadoDiferenciaPrecios);
	break;
	case  5:
		printf("KMS ingresados: 7090 Km\n\n");
		printf("Precio Aerolineas: $162965 \n");

				cargaForzadaDescuentoAerolineas = (10*162965)/100;
				cargaForzadaDebitoAerolineas = 162965 - cargaForzadaDescuentoAerolineas;
		printf("a) Precio con tarjeta de débito:$ %.2f \n",cargaForzadaDebitoAerolineas);

				cargaForzadaInteresAerolineas = (25*162965)/100;
				cargaForzadaCreditoAerolineas = 162965 + cargaForzadaInteresAerolineas;
		printf("b) Precio con tarjeta de crédito:$ %.2f \n",cargaForzadaCreditoAerolineas);

				cargaForzadaBitcoinsAerolineas=162965/precioBitcoin;
		printf("c) Precio pagando con bitcoin:BTC %.2f  \n",cargaForzadaBitcoinsAerolineas);

				cargaForzadaUnitarioAerolineas=162965/7090;
		printf("d) Mostrar precio unitario:$ %.2f \n\n",cargaForzadaUnitarioAerolineas);

		printf("Precio Latam: $159339 \n");

				cargaForzadaDescuentoLatam = (10*159339)/100;
				cargaForzadaDebitoLatam = 159339 - cargaForzadaDescuentoLatam;
		printf("a)Precio con tarjeta de débito :$ %.2f \n",cargaForzadaDebitoLatam),

				cargaForzadaInteresLatam = (25*159339)/100;
				cargaForzadaCreditoLatam = 159339 + cargaForzadaInteresLatam;
		printf("b)Precio con tarjeta de crédito :$ %.2f \n",cargaForzadaCreditoLatam);

				cargaForzadaBitcoinsLatam=159339/precioBitcoin;
		printf("c)Precio pagando con bitcoin :BTC %.2f \n",cargaForzadaBitcoinsLatam);

				cargaForzadaUnitarioLatam=159339/7090;
		printf("d)Mostrar precio unitario :$ %.2f \n\n",cargaForzadaUnitarioLatam);

		cargaForzadaDiferenciaDePrecios=162965-159339;
		printf("La diferencia de precio es de:$ %.2f \n\n",cargaForzadaDiferenciaDePrecios);
     break;
	}
	}while(opcion!=6);

	return EXIT_SUCCESS;
}


