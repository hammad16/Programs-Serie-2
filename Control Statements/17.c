#include<stdio.h>
#include<cmath>
int main (){
	int calculadora;
	float base,altura,radio;
	printf("Que necesitas calcular?\n1.-area de un triangulo\n2.-area de un rectangulo\n3.-area de un circulo\n");
	scanf("%d", &calculadora);
	switch (calculadora)
	{
		case 1 :{
			printf("Dame la base\n");
			scanf("%f", &base);
			printf("Dame la altura\n");
			scanf("%f", &altura);
			printf("%.2f",base*altura/2);
			break;
		}
		case 2 :{
			printf("Dame la base\n");
			scanf("%f", &base);
			printf("Dame la altura\n");
			scanf("%f", &altura);
			printf("%.2f",base*altura);
			break;
		}
		case 3:{
			printf("Dame el radio\n");
			scanf("%f", &radio);
			printf("%.2f",M_PI*radio*radio);
			break;
		}
	}
}
