#include <stdio.h>

int main()
{
    int n1, n2;

    printf( "\n   Introduzca el primer numero 1: " );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo numero: " );
    scanf( "%d", &n2 );

    if ( n1 > n2 )
        printf( "\n   El %d es mayor.", n1 );
    else

        if ( n1 < n2 )
            printf( "\n   El %d es mayor.", n2 );
        else
            printf( "\n   LOS NUMEROS SON IGUALES" );
 
    return 0;
}