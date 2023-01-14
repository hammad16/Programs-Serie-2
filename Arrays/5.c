#include <stdio.h>

int main(){

    int i, num[10], num2[10], num3[30];

    printf("\nLeer 10 numeros; 5 numeros pertenecen a un array y los restantes a otro. Imprimir los numeros con un solo array.\n\n");
    for ( i = 0; i < 5; i++) //Solicitamos los primeros 5 numeros.
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &num[i]);
        num3[i]=num[i]; //Se almacenan los datos del primer array en el array final.
    }

    for ( i = 5; i < 10; i++) //Solicitamos los 5 numeros restantes.
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &num2[i]);
        num3[i]=num2[i]; //Se almacenan los datos del segundo array en el array final.
    }
    
    printf("\nLos numeros son: \n\n");

    for ( i = 0; i < 10; i++) //Imprimimos los numeros en un solo array.
        printf("%d\n", num3[i]);

    printf("\n");

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
}