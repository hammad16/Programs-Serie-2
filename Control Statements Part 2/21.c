#include<stdio.h>
#include<math.h>
int main (){
	int x=0,z,y=1;
	printf("Dame un numero\n");
	scanf("%d",&z);
	for(int i=1;i<=z;i++){
		x=x+i;
		y=y*i;
	}
	printf("La suma es de %d\n",x);
	printf("La multiplicacion es de %d",y);
}
