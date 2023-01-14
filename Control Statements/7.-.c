#include<stdio.h>
int main (){
	float n1,n2,n3,n4;
	printf("Dame un numero\n");
	scanf("%f", &n1);
	printf("Dame otro numero\n");
	scanf("%f", &n2);
	printf("Dame otro numero\n");
	scanf("%f", &n3);
	printf("Dame otro numero\n");
	scanf("%f", &n4);
	if (n1==n2 && n2==n3 && n3==n4){
		printf("Los numeros son iguales");
	}
	else if (n1<=n2 && n1<=n3 && n1<=n4 ){
		printf("El numero menor es %f",n1);
	}
	else if (n2<=n1 && n2<=n3 && n2<=n4 ){
		printf("El numero menor es %f",n2);
	}
	else if (n3<=n1 && n3<=n2 && n3<=n4 ){
		printf("El numero menor es %f",n3);
	}
	else{
		printf("El numero menor es %f",n4);
	}
	}
