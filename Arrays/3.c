#include <stdio.h>

int main(){

    //Declaramos las variables de operacion
    int i, resta, mult;
    float suma, div;
    int n[10];
    printf("\nLeer 10 numeros e imprimir la suma, resta, multiplicacion y division de todos.\n\n");

    suma = 0;
    resta = 0;
    mult = 1;
    div = 1;

    for ( i = 0; i < 10; i++) //En este for se le solicitan los 10 numeros al usuario y se realizan las operaciones
    {
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &n[i]);
        suma += n[i];
        resta -= n[i];
        mult = mult * n[i];
        div = suma / 2 ;
    }
    //Se imprimen los resultados
    printf("La suma de sus digitos es: %.2f ", suma);
    printf("\nLa resta de sus digitos es: %d ", resta);
    printf("\nLa multiplicacion de sus digitos es: %d ", mult);
    printf("\nLa division entre dos de la suma de sus digitos es: %.2f ", div);

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
}


