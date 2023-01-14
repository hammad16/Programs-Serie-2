#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, x, y, matriz[10][10][10];
    int cant = 2; //Valor de la cantidad de matrices
    int fila = 3; //Valor de la cantidad de filas
    int col = 3; //Valor de la cantidad de columnas 

    srand(time(NULL)); //instrucción para generar numeros aleatorios diferentes al ejecutar el programa

    printf("\nMatriz 3x3 con numeros aleatorios mostrando su traspuesta.\n");
    printf("\n*** Matriz Original ***\n");
    
    for ( i = 0; i < cant; i++)
    {
        for ( x = 0; x < fila; x++)
        {
            for ( y = 0; y < col; y++)
            {
                matriz[i][x][y] = rand()%100+1; //Generamos la matriz con numeros aleatorios
            }
        }
    }

    for ( i = 0; i < cant; i++)
    {
        for ( x = 0; x < fila; x++)
        {
            for ( y = 0; y < col; y++)
            {
                printf("|%d|\t", matriz[i][x][y]);  //Imprimimos la matriz original
            }
            printf("\n"); 
        }
    }
    printf("\n");
    printf("\n*** Matriz Traspuesta ***\n");

    for ( i = 0; i < cant; i++)
    {
        for ( y = 0; y < col; y++) //Intercambiamos la fila y columna para poder aplicar la regla de matriz traspuesta
        { 
            for ( x = 0; x < fila; x++)
            {
                printf("|%d|\t", matriz[i][x][y]); //Imprimimos la matriz traspuesta.
            }
            printf("\n"); 
        }
    }

    printf("\n"); 
    
    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}