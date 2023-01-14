#include<stdio.h>
int main(){
	int x;
	printf("Dame la cantidad de litros\n");
	scanf("%d",&x);
	if(x<=150){
		printf("El gasto es de 1000$");
	}
	else if(x<=200){
		printf("El gasto es de %d",(x-50)*10);
	}
	else{
		printf("El gasto es de %d",(x-200)*30+1500);
	}
}
