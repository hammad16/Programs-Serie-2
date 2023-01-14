#include <stdio.h>

int main(){

    char word[1000];
    int x=0, i=0;

    printf("\nLeer una cadena e imprimir cuantas letras mayusculas hay.\n");
    printf("Ingresa una frase: ");
    fgets(word, 1000, stdin);

    while (word[x] != '\0')
    {
        if (word[x] >= 'A' && word[x] <= 'Z')
        {
            i++; //contador que nos permite contar todas las mayusculas declaradas en el "if" en el string.
        }
        x++;
    }
    
    printf("El numero de letras mayusculas en la cadena es: %d", i); //Imprimimos el numero de mayusculas


    //Nos permite salir del programa.
    printf("\n\nPresiona enter para continuar...\n\n"); 
    getchar();

    return 0;
}