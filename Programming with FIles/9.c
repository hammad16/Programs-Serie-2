#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){	
	char* s[10];
	char* s2[10];
	  int c = 0;
  FILE *file;
  file = fopen("archivodoble1.txt", "r");

	for (int i = 0; i < 10; i++) {
    	s[i] =(char*) malloc(20 * sizeof(char)); /* allocates 100 bytes */
	}

  while (!feof(file))
  {
	for (int i = 0; i < 10; i++)
    {
      if (fscanf(file, "%s",s[i]) == EOF)
        break;
    	c++;
    }
   } 
  fclose(file);
  file = fopen("archivodoble2.txt", "r");

	for (int i = 0; i < 10; i++) {
    	s2[i] =(char*) malloc(20 * sizeof(char)); /* allocates 100 bytes */
	}

  while (!feof(file))
  {
	for (int i = 0; i < 10; i++)
    {
      if (fscanf(file, "%s",s2[i]) == EOF)
        break;
    }
   } 
  fclose(file);
  file = fopen("archivodoblefinal.txt", "w+");
  for (int i = 0; i < c; i++) {
		fprintf(file,"%s\n",s[i]);
		fprintf(file,"%s\n",s2[i]);
	}
  fclose(file);
}
