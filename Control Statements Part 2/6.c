#include<stdio.h>
int main(){
	int x,y=0;
	printf("Dame un numero y te dire si es primo o no\n");
	scanf("%d",&x);
	for(int i=2;i<x;i++){
	if(x%i==0){
		y++;
	}
	}
	if(y==0){
		printf("Si es primo\n");
	}
	else{
		printf("No es primo\n");
	}
}
