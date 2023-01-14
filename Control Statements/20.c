#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int bolita;
	float importe;
	srand(time(NULL));
	bolita=rand()%2 ;
	printf("Cuanto quieres apostar?\n");
	scanf("%f",&importe);
	switch(bolita){
		case 0:{
			printf("Cruz\n");
			printf("Perdiste");
			break;
		}
		case 1:{
			printf("Cara\n");
			printf("Felicidades ganaste %2.f",importe*2);
			break;
		}
	}
}
