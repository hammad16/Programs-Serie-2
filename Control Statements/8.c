#include <stdio.h>
#include <stdlib.h>


int main()
{
   int a,b;
   printf("Ingresa un numero\n");
   scanf("%d",&a);
   printf("Ingresa otro numero\n");
   scanf("%d",&b);
      if(a>b){
          printf("%d, %d Estan en orden Decreciente",a,b);
      }else{
          printf("%d, %d Estan en orden Creciente",a,b);
      }
      
   return 0;
}
