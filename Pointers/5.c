#include<stdio.h>
#include<string.h>
#include <cmath>
int main (){
	int x,z=0;
	bool palindromo=true;
	printf("De cuantas letras es la palabra\n");
	scanf("%d",&x);
	char s[x],sa[x];
	char *ps= s;
	char *psa= sa;
	printf("Escribe la palabra\n");
	scanf("%s", s);
	for (int i =sizeof(s) - 1; i >= 0; i--){
	sa[z]=s[i];
	z++;
	}
	for (int i =0; i <= x; i++){
	printf("%c",*(ps+i));
	}
	printf("\n");
	for (int i =0; i <= x; i++){
	printf("%c",*(psa+i));
	}
	printf("\n");
	for (int i =0; i <= x; i++){
	if (s[i]!=sa[i])palindromo=false ;	
	}
	if (palindromo==false)printf("No es un palindromo") ;
	if (palindromo==true)printf("Es un palindromo") ;
}
