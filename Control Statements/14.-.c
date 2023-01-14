#include<stdio.h>
int main (){
	int n1,n2,n3,n4,n5,calculadora;
	printf("Dame un numero\n");
	scanf("%d", &n1);
	printf("Dame otro numero\n");
	scanf("%d", &n2);
	printf("Dame otro numero\n");
	scanf("%d", &n3);
	printf("Dame otro numero\n");
	scanf("%d", &n4);
	printf("Dame otro numero\n");
	scanf("%d", &n5);
	printf("Que operacion requieres?\n1.-Suma 3.-Multiplicacion\n2.-Resta 4.-Division\n");
	scanf("%d", &calculadora);
	switch (calculadora)
	{
		case 1 :{
			printf("%d",n1+n2+n3+n4+n5);
			break;
		}
		case 2 :{
			printf("%d",n1-n2-n3-n4-n5);
			break;
		}
		case 3:{
			printf("%d",n1*n2*n3*n4*n5);
			break;
		}
		case 4:{
			printf("%d",n1/n2/n3/n4/n5);
			break;
		}
			
	}
}
	
