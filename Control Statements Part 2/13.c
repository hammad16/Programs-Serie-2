#include<stdio.h>
#include<math.h>
int main (){
	float x,y,z;
	printf("Dame el valor inicial\n");
	scanf("%f",&x);
	printf("Dame el valor final\n");
	scanf("%f",&y);
	printf("Dame el incremento\n");
	scanf("%f",&z);
	printf("x\tln\n");
	for (x;x<=y;x=x+z){
		printf("%.0f\t%f\n",x,log(x));
	}
}
