#include <stdio.h>
#include <math.h>
int main(){
	int x,sum=0,y;
	printf("De que grado es tu polinomio?\n");
	scanf("%d",&x);
	printf("Que numero quieres evaluar?\n");
	scanf("%d",&y);
	int poli[x+1];
	for(int i=0;i<x+1;i++){
		printf("Dame el coeficiente de tu x de grado %d\n",i);
		scanf("%d",&poli[i]);
	}
	for(int i=0;i<x+1;i++){
		sum=sum+poli[i]*pow(y,i);
	}
	printf("La evaluacion es %d",sum);
}
