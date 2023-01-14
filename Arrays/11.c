#include <stdio.h>

int main(){

    int num[11][10]; //Declaramos el array de dos dimensiones
    int suma;

    printf("\nImprimir 100 numeros de izquierda a derecha, la ultima fila imprime la suma de sus respectivas columnas.\n\n");

    // con i y j estamos almacenando los valores del array
    // declaramos i y j en 10, ya que al multiplicar por 10 nos dara 100 nuemeros
    for ( int j = 0; j < 10; j++){
        suma = 0; //Declaramos en 0 la variable suma, para que la operacion inicie en cero.
        for (int i = 0; i < 10; i++){
            num[i][j]= (i*10)+1+j; 
            suma = suma += num[i][j]; //Sumamos todos las columnas
        }
        num[10][j]=suma; //declaramos la variable suma como el arreglo con valor 10 en i, ya que es lo que contiene la operacion.
    }

    for ( int i = 0; i < 11; i++){ //Se vuelve de 11 para i, ya que se agrega la columna de la suma total
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