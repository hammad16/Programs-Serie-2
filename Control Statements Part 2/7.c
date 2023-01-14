#include<stdio.h>
int main(){
	double x=1;
	printf("Casilla\tArroz\n");
	for(int i=1;i<=64;i++){
		for(int z=1;z<=i;z++){
			x=x*2;
		}
		printf("  %d\t%.0f\n",i,x);
		x=1;
	}
}

