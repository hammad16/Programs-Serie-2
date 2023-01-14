#include <stdio.h>

int main()
{
    //Declaramos las variables de operacion
    int n, x, contador = 0;

    printf("\nNúmeros primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.\n\n");

    //Operaciones para obtener los numeros primos
    for ( n = 2; n <= 100; n++) //Se contabliza en dos por que el primer numero primo es dos.
    {
        for ( x = 2; x <= n ; x++)
            if (n%x==0)
                contador++;      
            if (contador==1)
                printf("%d, ", n);
                contador=0;
    }

    printf("\n\n");
    
    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
}



