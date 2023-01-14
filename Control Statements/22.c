#include<stdio.h>
#include<string.h>
int main (){
	int num;
	char s[15];
	printf("Dame el numero del mes o el nombre del mes\n y te dare la cantidad de dias\n");
	scanf("%s", s);
	printf("El ano es bisiesto?\n 1.-si 2.-no\n");
	scanf("%d", &num);
	if(strcmp(s, "1")==0||strcmp(s, "3")==0||strcmp(s, "5")==0||strcmp(s, "7")==0
	||strcmp(s, "8")==0||strcmp(s, "10")==0||strcmp(s, "12")==0
	||strcmp(s, "Enero")==0||strcmp(s, "Marzo")==0||strcmp(s, "Mayo")==0
	||strcmp(s, "Julio")==0||strcmp(s, "Agosto")==0||strcmp(s, "Octubre")==0
	||strcmp(s, "Diciembre")==0){
		printf("Tiene 30 dias");
	}
	else if(strcmp(s, "4")==0||strcmp(s, "6")==0||strcmp(s, "9")==0||strcmp(s, "11")==0
	||strcmp(s, "Abril")==0||strcmp(s, "Junio")==0||strcmp(s, "Septiembre")==0||strcmp(s, "Noviembre")==0){
		printf("Tiene 31 dias");
	}
	else if (num==1){
		printf("Tiene 29 dias");
	}
	else{
		printf("Tiene 28 dias");
	}
}
