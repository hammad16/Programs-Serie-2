#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int temp, num, i, cant, arreglo[100];
    cant = 10;

    for ( i = 0; i < cant; i++)
    {
        arreglo[i] = rand()%100;//10 + rand()%(100-10); //numeros aleatorios entre 10 y 100
    }

    for ( i = 0; i < cant; i++)
    {
        printf("%d\n", arreglo[i]);
    }
    

    return 0;
}