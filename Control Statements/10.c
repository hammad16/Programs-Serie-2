#include <stdio.h>

int main()

{

    char a,b,c;
    
    printf("\nIngresa tres letras: ");
    scanf(" %c",&a);
    scanf(" %c",&b);
    scanf(" %c",&c);
    
    
    if ((a==b) || (a==c) || (b==c)) {
       printf("\nExisten dos letras iguales\n");
    } else {
       printf("No hay ninguna letra igual\n");
    }
    
  return 0;
  
}