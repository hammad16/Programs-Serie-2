#include<stdio.h>
#include<stdlib.h>
int main(){
char* registros[40];
int c;
printf ("Cuantas palabras son\n");
scanf("%d",&c);
  	for (int i = 0; i < 40; i++) {
    	registros[i] =(char*) malloc(20 * sizeof(char)); /* allocates 100 bytes */
	}

	for (int i = 0; i < c; i++)
    {
    	printf ("Dame la primera palabra\n");
     scanf("%s",registros[i]); 
    }
	for (int i = 0; i < c; i++)
    {
     printf("%s\n",registros[i]); 
    } 
}
