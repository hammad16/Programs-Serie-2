#include<stdio.h>
#include<string.h>
#include <cmath>
void operacion (int &b);
int menor = 0,mayor=0,sum=0;
int main (){
	int a[5]={1,2,3,4,5};
	menor = a[0];
	for(int i=0;i<5;i++){
	operacion(a[i]);	
	}
	printf("el numero menor es %d\n",menor);
	printf("el numero mayor es %d\n",mayor);
	printf("la media es %d\n",sum/5);
}
void operacion (int &b){
		if (b<menor){
			menor=b;
		}
		if (b>mayor){
			mayor=b;
		}
			sum=sum+b;
}
