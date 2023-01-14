#include <stdio.h>

int main(){

    int x[100];
    int i, n, d, c; 

    printf("\nIngreasar n numeros positivos y negaivos y ordenarlos. \n");
    printf("\nIngresa cuantos numeros quieres ordenar (positivos y negativos): ");
    scanf("%d", &n);
    printf("\n");
    
    for ( i = 0; i < n; i++) //Solicitamos los n numeros.
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &x[i]);
    }
    for ( i = 0; i < n; i++) //Ordenamos nuestro arreglo de menor a mayor.
        for ( c = 0, d = 1; d < n; c++, d++) //La variable C es nuestro primer numero y d el segundo
            if (x[c]>x[d])
            {
                int temp = x[d];
                x[d]= x[c];
                x[c] = temp;
            }

    printf("\nLos numeros ordenados de menor a mayor son: \n");

    for ( i = 0; i < n; i++) //Imprimimos nuestro arreglo.
        printf("\nEl numero %d es: %d",i+1, x[i]);

        printf("\n\n");

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();
    
    return 0;
}