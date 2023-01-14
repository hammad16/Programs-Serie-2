#include <stdio.h>

int main(){

    int i, num, num1[5], num2[10]; //Declaramos las variables para los tres arrays.

    printf("\nLeer 5 numeros, copiar los datos en otro array multiplicado por dos. Imprimir el tercer array.\n\n");
    printf("Cuantos numeros quieres multiplicar?: "); //Solicitamos cuantos numeros se van a multiplicar.
    scanf("%d", &num);
    printf("\n");

    for ( i = 0; i < num; i++)
    {
        printf("Ingresa el numero %d: ", i+1); //Solicitamos los n numeros.
        scanf("%d", &num1[i]);
        num2[i] = num1[i] * 2; //Multiplicamos la variable principal por dos y la asignamos en otro array.
    }

    printf("\nEl array multiplicado por dos es: \n\n");

    for ( i = 0; i < num; i++)
        printf("El numero %d es: %d\n",i+1, num2[i]); //Imprimimos los resultados.
        
    printf("\n");

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}