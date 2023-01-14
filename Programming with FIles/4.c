#include<stdio.h>
#include<stdlib.h>
int main(){	
	char s[100];
	  int c = 0, x = 0;
  FILE *palabra;
  palabra = fopen("palabra.txt", "r");

  while (!feof(palabra))
  {
	for (int i = 0; i < 1; i++)
    {
      if (fscanf(palabra, "%s",s) == EOF)
        break;
    }
   } 
  fclose(palabra);
  bool a=false,e=false,i=false,o=false,u=false,fallo=false;
  printf("%s\n", s);
	while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' ){
    a=true;
	}
	if( s[c] == 'e' || s[c] == 'E' ){
	e=true;
	if(a==false)fallo=true;
	}	
	if(s[c] == 'i' || s[c] == 'I' ){
	i=true;
	if(a==false||e==false)fallo=true;
	}	
	if( s[c] =='o' || s[c]=='O' ){
	o=true;
	if(a==false||e==false||i==false)fallo=true;
	}	
	if( s[c] == 'u' || s[c] == 'U'){
	u=true;
	if(a==false||e==false||i==false||o==false)fallo=true;
	}
	c++;	
  }
	if (fallo==true){
	printf("No estan en orden las vocales");
	}
	else{
		printf("Estan en orden las vocales");
	}
}
