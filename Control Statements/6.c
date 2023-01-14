
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i;
    float mayor, menor, un_numero;
    mayor = 0;
    menor = 0;
    for (i=1; i<=3; i++)
    {
        printf ("PROCESO %d\n", i);
        printf ("Ingresa el valor de un numero: ");
        scanf ("%f", &un_numero);
        (void) getchar ();
        if(i==1||mayor<un_numero)
            mayor=un_numero;
        if(i==1||menor>un_numero)
            menor=un_numero;
        putchar ('\n');
    }
    printf ("El numero mayor es: %.2f\n", mayor);
    printf ("El numero menor es: %.2f\n", menor);

}
