#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int x;
	srand(time(NULL));
	printf("De cuantos elementos quieres tu arreglo?");
	scanf("%d",&x);
	int A[x];
	int* B[x];
	int *pa;
	pa=&A[0];
	for(int i=0;i<x;i++){
		A[i]=rand()%10;
		B[i]=pa+i;
	}
	for(int i=0;i<x;i++){
		printf("%d ",A[i]);
		printf("%d ",B[i]);
	}

}
