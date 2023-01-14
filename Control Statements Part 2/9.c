#include<stdio.h>
int main(){
	int x;
	printf("Dame un numero y te dare los n primeros numeros y sus cuadrados\n");
	scanf("%d",&x);
	printf("Numero\tCuadrado\n");
	for(int i=1;i<=x;i++){
		printf("%d\t%d\n",i,i*i);
	}
}
