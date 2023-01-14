#include<stdio.h>
#include<math.h>
int main (){
	char x,t;
	printf("Dame un caracter y te hare un marco\n");
	scanf("%c",&x);
	for(int i=0;i<11;i++){
		printf("%c",x);
	}
	printf("\n",x);
	for(int z=0;z<11;z++){
		printf("%c",x);
	for(int i=0;i<9;i++){
		printf(" ");
	}
		printf("%c",x);
		printf("\n",x);
	}
	for(int i=0;i<11;i++){
		printf("%c",x);
	}
}
