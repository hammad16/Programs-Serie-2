#include <stdio.h>

int main(){

    int i, num, num1[5], num2[10], num3[10]; //Declaramos las variables para los tres arrays.
    float suma, prom;

    printf("\nLeer 5 numeros, copiar los datos en otro array multiplicado por dos. Imprimir el tercer array.\n\n");
    printf("Cuantos numeros quieres promediar?: "); //Solicitamos cuantos numeros se van a multiplicar.
    scanf("%d", &num);
    printf("\n");
    suma = 0;
    prom = 0;

    for ( i = 0; i < num; i++)
    {
        printf("Ingresa el numero %d: ", i+1); //Solicitamos los n numeros.
        scanf("%d", &num1[i]);
        suma += num1[i]; //Multiplicamos la variable principal por dos y la asignamos en otro array.
    }

    prom = suma/num;

    printf("El promedio es: %.2f\n", prom); //Imprimimos los resultados.
        
    printf("\n");

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}