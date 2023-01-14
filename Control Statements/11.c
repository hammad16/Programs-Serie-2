#include<stdio.h>
int main(){
	int h,t;
	printf("Te dire que tipo de ropa usar dependiendo de los siguentes valores de temperatura y humedad\n");
	printf("Temperatura	Humedad\n25		90\n10		50\n2		45\n30		85\n");
	printf("Ingresa el valor de la temperatura\n");
	scanf("%d",&t);
	printf("Ingresa el valor de la humedad\n");
	scanf("%d",&h);
	switch(t){
		case(25):{
			switch(h){
				case(90):printf("La ropa sugerida es pantalon largo y camisa");break;
				default:printf("Lo siento no tengo sugerencias");
			}
			break;
		}
		case(10):{
			switch(h){
				case(50):printf("La ropa sugerida es pantalon de pana y chaleco");break;
				default:printf("Lo siento no tengo sugerencias");
			}
			break;
		}
		case(2):{
			switch(h){
				case(45):printf("La ropa sugerida es pantalon,chaleco y abrigo");break;
				default:printf("Lo siento no tengo sugerencias");
			}
			break;
		}
		case(30):{
			switch(h){
				case(85):printf("La ropa sugerida es pantalon corto y camisa");break;
				default:printf("Lo siento no tengo sugerencias");
			}
			break;
		}
		default:printf("Lo siento no tengo sugerencias");
		}
	}
		
	

