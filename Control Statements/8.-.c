#include<stdio.h>
int main (){
	float n1,n2,n3,n4,n5;
	printf("Dame un numero\n");
	scanf("%f", &n1);
	printf("Dame otro numero\n");
	scanf("%f", &n2);
	printf("Dame otro numero\n");
	scanf("%f", &n3);
	printf("Dame otro numero\n");
	scanf("%f", &n4);
	printf("Dame otro numero\n");
	scanf("%f", &n5);
	if (n1<n2 && n2<n3 && n3<n4 && n4<n5){
		printf("Estan en orden creciente");
	}
	else{
		printf("No estan en orden creciente");
	}
	}
