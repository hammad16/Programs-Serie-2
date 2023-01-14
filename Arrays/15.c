#include <stdio.h>

int main(){

    char word[1000];
    int x=0, i=0;

    printf("\nLeer una cadena e imprimir cuantas vocales hay.\n");
    printf("Ingresa una frase: ");
    fgets(word, 1000, stdin);

    while (word[x] != '\0')
    {
        if (word[x] == 'a' || //Declaramos las vocales
            word[x] == 'e' ||
            word[x] == 'i' ||
            word[x] == 'o' ||
            word[x] == 'u' ||
            word[x] == 'A' ||
            word[x] == 'E' ||
            word[x] == 'I' ||
            word[x] == 'O' ||
            word[x] == 'U' )
        {
            i++; //contador que nos permite contar todas las letras declaradas en el "if" en el string.
        }
        x++;
    }
    
    printf("El numero de vocales en la cadena es: %d", i); //Imprimimos el numero de vocales


    //Nos permite salir del programa.
    printf("\n\nPresiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}