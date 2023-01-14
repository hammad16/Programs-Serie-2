#include<stdio.h>
int main (){
	float x,y,z;
	printf("Dame la temperatura mas baja\n");
	scanf("%f",&x);
	printf("Dame la temperatura mas alta\n");
	scanf("%f",&y);
	printf("Dame el incremento\n");
	scanf("%f",&z);
	for (x;x<=y;x=x+z){
		printf("C=%.2f\t",x);
		printf("F=%.2f\n",1.8*x+32);
	}
}
