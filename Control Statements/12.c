#include<stdio.h>
int main(){
	int h,t;
	printf("Te dire que tipo de ropa usar dependiendo de los siguentes valores de temperatura y humedad\n");
	printf("Temperatura	Humedad\n25		90\n10		50\n2		45\n30		85\n");
	printf("Ingresa el valor de la temperatura\n");
	scanf("%d",&t);
	printf("Ingresa el valor de la humedad\n");
	scanf("%d",&h);
	if(t==25 && h==90){
		printf("La ropa sugerida es pantalon largo y camisa");
	}
	else if(t==10 && h==50){
		printf("La ropa sugerida es pantalon de pana y chaleco");
	}
	else if(t==2 && h==45){
		printf("La ropa sugerida es pantalon,chaleco y abrigo");
	}
	else if(t==30 && h==85){
		printf("La ropa sugerida es pantalon corto y camisa");
	}
	else{
		printf("Lo siento no tengo sugerencias");
	}
	}
		
	
