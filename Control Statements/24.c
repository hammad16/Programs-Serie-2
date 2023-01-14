#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int numero,n2;
	srand(time(NULL));
	numero=rand() ;
	printf("Dame un numero\n");
	scanf("%d",&n2);
	if(numero==n2){
		printf("adivinaste el numero");
	}
	else{
		printf("No adivinaste el numero tu numero es %d y el de la maquina es %d",n2,numero);
	}
	}
