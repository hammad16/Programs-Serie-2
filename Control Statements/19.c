#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int bolita,respuesta,d;
	float importe;
	srand(time(NULL));
	printf("Quieres sacar una bolita\n 1.-si 2.-no\n");
	scanf("%d", &respuesta);
	switch (respuesta)
	{
		case 1 :{
			bolita=rand()%5 + 1 ;
			switch (bolita)
			{
				case 1 :{
					printf("Tu bolita es de color negro tu descuento es de 10%\n") ;
					d=10;
					break;
				}
				case 2 :{
					printf("Tu bolita es de color verde tu descuento es de 25%\n");
					d=4;
					break;
				}
				case 3 :{
					printf("Tu bolita es de color amarillo tu descuento es de 50%\n");
					d=2;
					break;
				}
				case 4 :{
					printf("Tu bolita es de color azul tu descuento es de 75%\n");
					d=4/3;
					break;
				}
				case 5 :{
					printf("Tu bolita es de color rojo tu descuento es de 100%\n");
					d=1;
					break;
				}
			}
			break;
		}
		case 2 :{
			printf("Adios");
			break;
		}
	}
	printf("Teclea el importe de la cuenta total del cliente\n");
	scanf("%f",&importe);
	printf("Tu cantidad a pagar es %2f\n",importe-importe/d);
}
