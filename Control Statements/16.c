#include<stdio.h>
#include<cmath>
int main (){
	int cateto,hipotenusa;
	printf("Este programa te ayudara a calcular un cateto\n");
	printf("Dame la medida del cateto\n");
	scanf("%d", &cateto);
	printf("Dame la medida de la hipotenusa\n");
	scanf("%d", &hipotenusa);
	if (cateto< hipotenusa){
		printf("La medida del cateto es %2f\n",sqrt((hipotenusa*hipotenusa)-(cateto*cateto)));
	}
}
