#include <stdio.h>

int main(){

    int num[10][10]; //Declaramos el array de dos dimensiones

     printf("\nImprimir 100 numeros de izquierda a derecha.\n\n");

    // con i y j estamos almacenando los valores del array
    // declaramos i y j en 10, ya que al multiplicar por 10 nos dara 100 nuemeros
    for ( int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            num[i][j]= (i*10)+1+j; 
        }
    }

    for ( int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d, ", num[i][j]);
        }
        printf("\n"); //El salto de linea es para ordenar los valores de 10 en 10
    }

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}