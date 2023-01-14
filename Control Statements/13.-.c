#include<stdio.h>
int main (){
	int n1;
	printf("Dame un numero\n");
	scanf(" %d", &n1);
	if(n1%2==0){
		printf("Es par");
	}
	else{
		printf("Es impar");
	}
}
