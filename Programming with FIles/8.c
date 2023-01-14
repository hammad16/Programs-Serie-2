#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){	
	char* s[10];
	char palabra[100];
	  int c = 0;
  FILE *file;
  file = fopen("palabrarepetida.txt", "r");

	for (int i = 0; i < 10; i++) {
    	s[i] =(char*) malloc(20 * sizeof(char)); /* allocates 100 bytes */
	}

  while (!feof(file))
  {
	for (int i = 0; i < 10; i++)
    {
      if (fscanf(file, "%s",s[i]) == EOF)
        break;
    }
   } 
  fclose(file);
  	printf("Escribe la palabra\n");
	scanf("%s", palabra);
	for (int i=0;i<10;i++){
	if(!strcmp(palabra,s[i])){
			c++;
	}
	}
file = fopen("palabrarepetida.txt", "a+");
	  	if (c==0){
		fprintf(file,"%s\n",palabra);
			printf("guardando palabra");
	}
	else{
		printf("palabra repetida");
	}
  fclose(file);

}
