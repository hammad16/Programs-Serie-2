#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); //Funcion para generar numeros aleatorios cuando se abra el programa
    
    int arreglo[100]; //Declaramos el array de 100 numeros
    int i, num = 100, cont = 0;;

    printf("\nPrograma para imnprimir 100 numeros random(1-1000) en un arreglo separando numeros pares e impares.\n");
    printf("\nLos numeros generados aleatoriamente son: ");
    printf("\n\n");

    for ( i = 1; i <= num; i++){
        arreglo[i]= rand()%(1000)+1; //Generamos los numeros aleatorios entre 1 y 1000
        printf("%d, ", arreglo[i]);
    }

    printf("\n\nLos numeros organizados son: \n\n");

    for ( i = 1; i <= num; i++){
        if (arreglo[i]%2 == 0){ //Operacion para determinar numeros pares
            printf("%d, ", arreglo[i]); 
        }
    }

    printf(" ||||  "); //Marca para delimitar la separacion de los numeros pares de los impares

    for ( i = 1; i <= num; i++){
        if (arreglo[i]%2 != 0){ //Operacion para determinar numeros impares
            printf("%d, ", arreglo[i]);
        }
    }
    
    printf("\n\n");
    return 0;
}