#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i;
    float mayor, un_numero;
    mayor = 0;
    for (i=1; i<=4; i++)
    {
        printf ("PROCESO %d\n", i);
        printf ("Ingresa el valor de un numero: ");
        scanf ("%f", &un_numero);
        (void) getchar ();
        if(i==1||mayor<un_numero)
            mayor=un_numero;
        putchar ('\n');
    }
    printf ("Valor de mayor: %.2f\n", mayor);
 
    return 0;
}
