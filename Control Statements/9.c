#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int Numero1=0;
    int Numero2=0;
    int Numero3=0;
    
    printf("\nIngresa No. 1 : ");
    scanf(" %d",&Numero1);
    printf("Ingresa No. 2 : ");
    scanf(" %d",&Numero2);
    printf("Ingresa No. 3 : ");
    scanf(" %d",&Numero3);
    
    
    if (Numero1=Numero2=Numero3) {
       printf("\nLos numeros son iguales");
    } else {
       printf("No son iguales");
    }
    
  return 0;
  
}