#include <stdio.h>
#include <string.h>

#define TAM 40
            
         
char palin[TAM];
int longitud;
int inicio=0,fin;
         
int main()
{
       
    printf("\nIngrese una palabra:\n\n");
    fgets(palin,100,stdin);

    longitud=strlen(palin);

    for(fin=longitud-1; palin[fin]==palin[inicio] && fin>=0; inicio++,fin--);

    if(inicio==longitud){
        printf("\nEs un palindromo");
      }else{
        printf ("\nNo es palindromo");
    } 
    return 0;
}