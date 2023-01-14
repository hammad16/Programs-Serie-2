#include <stdio.h>
#include <math.h>


int main()
{
    double x, resultado = 0, factorial = 1;
    int i, limite = 7;

    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    for (i = 1; i <= limite; i += 2) {
        factorial *= i;
        factorial *= (i + 1);
        resultado += pow(x, i) / factorial;
        resultado = -resultado;
    }

    printf("sen(%lf) = %lf\n", x, resultado);

    return 0;
}
