#include<stdio.h>
int main (){
	char c1,c2,c3;
	printf("Dame una letra\n");
	scanf(" %c", &c3);
	printf("Dame una letra\n");
	scanf(" %c", &c2);
	printf("Dame una letra\n");
	scanf(" %c", &c1);
	if(c1==c2 || c2==c3 || c3==c1){
		printf("Existen al menos dos letras iguales");
	}
	else{
		printf("Las letras son diferentes");
	}
}
