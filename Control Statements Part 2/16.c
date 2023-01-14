#include<stdio.h>
#include<math.h>
int main (){
	int x,z=1;
	printf("Dame un numero y te dire su factorial\n");
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		z=z*i;
	}
	printf("El factorial es %d",z);
}
