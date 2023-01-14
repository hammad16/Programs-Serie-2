#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){	
	int* matriz[10];
	int matriz2[10];
	  int c = 0,x=1;
  FILE *file;
  file = fopen("matriz.txt", "r");

	for (int i = 0; i < 10; i++) {
    	matriz[i] =(int*) malloc(20 * sizeof(int)); 
	}

  while (!feof(file))
  {
	for (int i = 0; i < 9; i++)
    {
      	if (fscanf(file, "%d",matriz[i]) == EOF)
        break;
    }
   } 
  fclose(file);
  for (int i = 0; i < 9; i++) {
  	printf("dame el numero %d de la matriz",i+1 );
  	scanf("%d",&matriz2[i]);
  }
    file = fopen("matrizfinal.txt", "w+");
  for (int i = 0; i < 9; i=i+3) {
		fprintf(file,"%d %d %d\n",(*(matriz[i])+matriz2[i]),(*(matriz[i])+matriz2[i+1]),(*(matriz[i+2])+matriz2[i+2]));
	}
  fclose(file);
}
