#include<stdio.h>
int main(){
	int a[3]={1,3,5};
	int b[3]={2,4,6};
	int *pa= a;
	int *pb= b,z=0,y;
	for(int i=0;i<3;i++){
		y=*(pa+z);
		a[i]=*(pb+z);
		b[i]=y;
		z++;
	}
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	for(int i=0;i<3;i++){
		printf("%d ",b[i]);
	}
}
