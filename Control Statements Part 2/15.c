#include<stdio.h>
#include<math.h>
int main (){
	float x=M_PI;
	printf("Potencia\tRaiz cuadrada\n");
	for(int i=2;i<11;i++){
	x=x*M_PI;
	printf("%f\t%f\n",x,sqrt(x));
}
}
