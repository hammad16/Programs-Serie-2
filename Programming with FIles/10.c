#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){	
	char* s[10];
	int* precio[10];
	  int c = 0,x=1;
  FILE *file;
  file = fopen("precios.txt", "r");

	for (int i = 0; i < 10; i++) {
    	s[i] =(char*) malloc(20 * sizeof(char)); 
	}
	for (int i = 0; i < 10; i++) {
    	precio[i] =(int*) malloc(20 * sizeof(int)); 
	}

  while (!feof(file))
  {
	for (int i = 0; i < 10; i++)
    {
      	if (fscanf(file, "%s %d",s[i],precio[i]) == EOF)
        break;
        c++;
    }
   } 
  fclose(file);

    file = fopen("preciofinal.txt", "w+");
  for (int i = 0; i < c; i++) {
		fprintf(file,"%s %.2f\n",s[i],(*(precio[i])*1.15));
	}
  fclose(file);
  printf("impresion realizada");
}
