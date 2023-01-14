#include <stdio.h>

int main(){

    int i, j, num[10], num2[10], num3[30];

    printf("\nLeer 10 numeros; 5 numeros pertenecen a un array y los restantes a otro. Imprimir los numeros con un solo array.\n\n");

    printf("\nIngresa los valores del primer arreglo: \n");
    for ( i = 0; i < 5; i++) //Solicitamos los primeros 5 numeros.
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("\nIngresa los valores del segundo arreglo: \n");

    for ( i = 0; i < 5; i++) //Solicitamos los  5 numeros del segundo array.
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &num2[i]);
    }

    for ( i = 0, j = 0;  i < 5; i++, j += 2)
    {
        num3[j] = num[i];
    }

    for ( i = 0, j = 1;  i < 5; i++, j += 2)
    {
        num3[j] = num2[i];
    }

    printf("\nLos numeros intercalados son: \n\n");

    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", num3[i]); //Imprimimos los numeros intercalados
    }

    printf("\n");

    //Nos permite salir del programa.
    getchar();
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
}