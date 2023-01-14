#include<stdio.h>
#include<stdlib.h>
int main(){	
	char s[100];
	  int c = 0;
  FILE *palabra;
  palabra = fopen("palabraalrevez.txt", "r");

  while (!feof(palabra))
  {
	for (int i = 0; i < 1; i++)
    {
      if (fscanf(palabra, "%s",s) == EOF)
        break;
    }
   } 
  fclose(palabra);
  	int z=0;
	bool palindromo=true;
	char sa[100];
	while (s[c] != '\0') {
		c++;
	}
	for (int i =c-1; i >= 0; i--){
	sa[z]=s[i];
	z++;
	}
	for (int i =0; i <= c; i++){
	printf("%c",s[i]);
	}
	printf("\n");
	for (int i =0; i <= c; i++){
	printf("%c",sa[i]);
	}
	printf("\n");
}

