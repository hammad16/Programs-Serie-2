#include<stdio.h>
int main (){
	int n1,n2,n3;
	printf("Dame un numero\n");
	scanf("%d", &n1);
	printf("Dame un numero\n");
	scanf("%d", &n2);
	printf("Dame un numero\n");
	scanf("%d", &n3);
	if(n1==n2 && n2==n3){
		printf("Los numeros son iguales");
	}
	else{
		printf("Los numeros no son iguales");
	}
}
