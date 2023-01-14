#include <stdio.h>

int main(){

    int i, j, num[10][10]; //Declaramos el array de dos dimensiones

     printf("\nImprimir numeros pares y despues mediante coordenadas X y Y buscar un numero en el array de doble dimension..\n\n");

    // con i y j estamos almacenando los valores del array
    // declaramos i y j en 10, ya que al multiplicar por 10 nos dara 100 numeros
    for ( int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            num[i][j]= ((i*10)+j)*2; //Al multiplicar por 2 estamos aplicando la formula de numero par ( n* 2)
        }
    }

    for ( int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d, ", num[i][j]);
        }
        printf("\n"); //El salto de linea es para ordenar los valores de 10 en 10
    }
    
    printf("\nEscriba la posicion X del numero a buscar: ");
    scanf("%d",&i );
    printf("\nEscriba la posicion Y del numero a buscar: ");
    scanf("%d",&j );
    printf("\nEl numero en la posicion (%d,%d) es %d.\n\n", i, j, num[i][j]);
    
    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();
    
    return 0;
}