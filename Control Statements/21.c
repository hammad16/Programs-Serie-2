#include<stdio.h>
int main (){
	int numero;
	printf("Dame un numero\n");
	scanf("%d",&numero);
	if(numero%2==0 && numero%5==0){
		printf("si es multiplo de 2 y de 5");
	}
	else{
		printf("no es multiplo de 2 y de 5");
	}
}
