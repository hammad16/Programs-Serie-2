#include<stdio.h>
int main (){
	float n1,n2,n3,n4,mayor,menor;
	printf("Dame un numero\n");
	scanf("%f", &n1);
	printf("Dame otro numero\n");
	scanf("%f", &n2);
	printf("Dame otro numero\n");
	scanf("%f", &n3);
	if (n1>=n2 && n1>=n3){
		mayor=n1;
	}
	else if (n2>=n1 && n2>=n3){
		mayor=n2;
	}
	else if (n3>=n1 && n3>=n2){
		mayor=n3;
	}
	if (n1<=n2 && n1<=n3){
		menor=n1;
	}
	else if (n2<=n1 && n2<=n3){
		menor=n2;
	}
	else if (n3<=n2 && n3<=n1){
		menor=n3;
	}
	if (n1==n2 && n2==n3){
		printf("Los numeros son iguales");
	}
	else{
		printf("El menor es %f y el mayor es %f",menor,mayor);
	}
	}
