#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); //Funcion para generar numeros aleatorios cuando se abra el programa

    int i, x, y, filas, suma, col;
    int matriz[100][100][100], mayor1[100], total[100];
	int cant = 2; //Declaramos la cantidad de matrices que necesitamos.

    printf("\nPrograma para sumar el numero mayor de dos matrices. ");
    printf("\n\nIngresa el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingresa el numero de columnas: ");
    scanf("%d", &col);

	//Se generan los valores de las matrices
	for ( i = 0; i < cant; i++)
	{
		for ( x = 0; x < filas; x++)
		{
			for ( y = 0; y < col; y++)
			{
				matriz[i][x][y] = 10 + rand()%(100-10); //numeros aleatorios entre 10 y 100
			}
		}
	}

	//Se imprime las n matrices.
	for ( i = 0; i < cant; i++)
	{
		printf("\nLa matriz %d es: \n\n", i+1);
		for ( x = 0; x < filas; x++)
		{
			for ( y = 0; y < col; y++)
			{
				printf("|%d| ", matriz[i][x][y]); 
			}
			printf("\n");
		}
	}
	
    printf("\n");

	mayor1[0] = matriz[0][0][0]; //Inicializamos en ceros ambas variables para poder almacenar el numero mayor.

	for ( i = 0; i < cant; i++)
	{
		mayor1[0] = 0; //Se inicializa en 0 cada que se repita el ciclo.
		for ( x = 0; x < filas; x++)
		{
			for ( y = 0; y < col; y++)
			{
				if (mayor1[0] < matriz[i][x][y]) {
				mayor1[0] = matriz[i][x][y]; 
				}
			}
		}
		total[i] = mayor1[0]; //Almacenamos los numeros mayores de cada matriz para poder realizar la suma.
		printf("\nEl numero mayor de la matriz %d es %d: ", i+1, mayor1[0]);
	}

	suma = 0;

	for ( i = 0; i < cant; i++)
		suma += total[i]; //Suma de todos los numeros mayores.

    printf("\nLa suma de los numeros mayores de las matrices es: %d.", suma);
    printf("\n\n");

    return 0;
}