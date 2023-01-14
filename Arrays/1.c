// Programa que llene un arreglo con los 100 primeros números enteros 
//y los muestre en pantalla en orden descendente.
#include <stdio.h>

int main(){

    int i, num[100];

    printf("\n***Imprimir en orden descendente los primeros 100 numeros enteros***\n\n");

    for ( i = 1; i <= 100; i++)
    {
        num[i]=i;
    }
    for ( i = 100; i >= 1; i--)
    {
        printf("%d, ", num[i]);
    }
    printf("\n\n");
    
    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
}   