#include <stdio.h>

void copiarArreglo(); //Llamamos a la funcion

int i, n1;
int arreglo1[100], arreglo2[100]; //Declaramos los dos arreglos

int main(){

    printf("\nPrograma que recibe numeros de dos arreglos del mismo tamaño, el arreglo 1 se copia en el arreglo 2 y se imprime el total de numeros.\n");
    printf("\nIngresa el tamaño del arreglo: ");
    scanf("%d",&n1);
    printf("\nIngresa los numeros del arreglo 1: ");
    printf("\n\n");

    for ( i = 0; i < n1; i++)
        {
        printf("Ingresa el valor del numero %d: ", i+1); //Ingresamos los numeros a copiar
        scanf("%d", &arreglo1[i]);
        }

    copiarArreglo(); //Llamamos a la funcion 

    printf("\nEl arreglo 1 copiado en el arreglo 2 es: ");
    printf("\n");

    for ( i = 0; i < n1; i++)
        {
            printf("\nEl numero %d es: %d", i+1, arreglo2[i]); //Imprimimos el segundo arreglo
        }
        printf("\n\n");

    //Nos permite salir del programa.
    getchar();
    printf("Presiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}


        
void copiarArreglo() //Funcion para copiar el arreglo 1 en el 2

    {
        for ( i = 0; i < n1; i++)
        {
            arreglo2[i] = arreglo1[i];
        }  
    }


