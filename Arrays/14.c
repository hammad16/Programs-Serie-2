#include <stdio.h>
#include <string.h>

int main()
{
    char string1[1000], string2[1000], word[1000];
    int inicio, fin, i = 0;

    printf("\nLee una cadena de caracteres e imprimela al reves\n");
    printf("\nIngresa una frase: \n");
    fgets(string1,100,stdin); //Leemos la cadena ingresada.

    //Calculando la longitud de la cadena
    while (string1[i] != '\0')
        i++;

    fin = i - 1;

    for (inicio = 0; inicio < i; inicio++) {
        string2[inicio] = string1[fin];
        fin--; }

    string2[inicio] = '\0';
   
    printf("\nLa cadena al reves es: %s\n\n", string2);

    //Nos permite salir del programa.
    printf("Presiona enter para continuar...\n"); 
    getchar();

    return 0;
    
}