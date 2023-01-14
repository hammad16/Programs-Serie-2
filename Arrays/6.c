#include <stdio.h>

int main(){

    int i, num1[5], num2[10]; //Declaramos las variables para los dos arrays.

    printf("\nLeer 5 numeros, copiar los datos en otro array multiplicado por dos. Imprimir el segundo array.\n\n");

    for ( i = 0; i < 5; i++)
    {
        printf("Ingresa el numero %d: ", i+1); //Solicitamos los 5 numeros
        scanf("%d", &num1[i]);
        num2[i] = num1[i] * 2; //Multiplicamos la variable principal por dos y la asignamos en otro array/
    }

    printf("\nEl array multiplicado por dos es: \n\n");

    for ( i = 0; i < 5; i++)
        printf("El numero %d es: %d\n",i+1, num2[i]); //Imprimimos los resultados.
        
    printf("\n");

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}