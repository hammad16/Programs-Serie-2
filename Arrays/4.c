#include <stdio.h>

int main(){

    int x[100];
    int i, n, d, c; 

    printf("\nIngreasar 10 numeros y ordenarlos en forma ascendente. \n");
    printf("\nIngresa cuantos numeros quieres ordenar: ");
    scanf("%d", &n);
    printf("\n");
    
    for ( i = 0; i < n; i++) //Solicitamos los n numeros.
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &x[i]);
    }
    for ( i = 0; i < n; i++) //Ordenamos nuestro arreglo en orden ascendente.
        for ( c = 0, d = 1; d < n; c++, d++) //La variable C es nuestro primer numero y d el segundo
            if (x[c]>x[d])
            {
                int temp = x[d];
                x[d]= x[c];
                x[c] = temp;
            }

    printf("\nLos numeros ordenados en forma ascendente son: \n");

    for ( i = 0; i < n; i++) //Imprimimos nuestro arreglo.
        printf("\n %d", x[i]);

        printf("\n\n");
    
    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
}
