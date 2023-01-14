#include<stdio.h>
int main(){
	int a[3]={1,3,5};
	int b[3]={2,4,6};
	int c[6];
	int *pa= a;
	int *pb= b,z=0;
	for(int i=0;i<6;i=i+2){
		c[i]=*(pa+z);
		c[i+1]=*(pb+z);
		z++;
	}
	for(int i=0;i<6;i++){
		printf("%d ",c[i]);
	}
}
