#include<stdio.h>
int main(){
	int num;
	float cantidad;
	printf("Que conversion necesitas\n1.-Dolares a Pesos\n2.-Pesos a Dolares\n3.-Pesos a Euros\n");
	printf("4.-Euros a Pesos\n5.-Dolares a Euros\n6.-Euros a Dolares\n");
	scanf("%d",&num);
	printf("Que cantidad quieres convertir?\n");
	scanf("%f",&cantidad);
	switch(num){
		case 1 :{
			printf("La cantidad en dolares es %.2f", cantidad*19.53);
			break;
		}
		case 2 :{
			printf("La cantidad en pesos es %.2f", cantidad/19.53);
			break;
		}
		case 3 :{
			printf("La cantidad en euros es %.2f", cantidad*0.051);
			break;
		}
		case 4 :{
			printf("La cantidad en pesos es %.2f", cantidad/0.051);
			break;
		}
		case 5 :{
			printf("La cantidad en euros es %.2f", cantidad);
			break;
		}
		case 6 :{
			printf("La cantidad en dolares es %.2f", cantidad);
			break;
		}
	}
}
