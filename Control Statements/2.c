
#include <stdio.h>

int main()
{
    float nota;

    printf( "\nIngresa la calificacion: " );
    scanf( "%f", &nota );

    if ( nota >= 9 )
        printf( "\n   EXCELENTE\n" );
    else
        if ( nota >= 7 )
            printf( "\n   SOBRESALIENTE\n" );
        else
            if ( nota >= 6 )
                printf ( "\n   NOTABLE\n" );
            else
                if ( nota >= 5 )
                    printf ( "\n   APROBADO\n" );
                else
                    if ( nota >= 3 )
                        printf ( "\n   NO APROBADO\n" );
                    else
                        printf ( "\n   MUY DEFICIENTE\n" );

    return 0;
}