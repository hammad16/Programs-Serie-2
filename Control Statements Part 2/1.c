#include<stdio.h>
#include<cmath>

int main()
{
float y, a, n, t;
y=0, t=0;
    printf ("Escribe el capital invertido\n");
    scanf("%f", &a);
    printf ("Escribe la tasa de interes\n");
    scanf("%f", &n);
    for(t=1;t<31;t++) {
    y=(a*pow(1+n/100,t)); 
    printf("El interes compuesto anual del año %.0f es de %.2f\n" ,t, y);
    } 
}