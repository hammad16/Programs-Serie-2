#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función que busca el elemento más grande en una matriz.
int elemMayor(int **matriz, int filas, int cols) { 
    int mayor=0; 

    for (int i=0; i<filas; i++) 
        for (int j=0; j<cols; j++)
            if (mayor < *(*(matriz + i) + j))
				mayor=*(*(matriz + i) + j);

    return mayor;
}

// Función que libera la memoria de las matrices.
void freeMulti(int **X, int filas) {
    for (int j=0; j<filas; j++)
        free(X[j]); // Libera las columnas.
    free(X); //Libera las filas.
}

int main(void) {
    // Semilla para numeros pseudoaleatorios. 
    srand(time(NULL));

    // Apuntadores que serán matrices con memoria dinámica.
    int **A, mayorA;    
    int **B, mayorB;
    
    // Variables que indican el tamaño de las matrices.
    int n[2],m[2];
    char x;

    // Apuntador para el archivo resultado.txt.
    FILE *fres;

    printf("Programa que suma el numero mayor de dos matrices.\n");
    
    // Creando matrices con memoria dinámica.
    for (int i=0; i<2; i++) {
        printf("Introduce el tamaño de la matriz %i: ", i+1);
        scanf("%i%c%i", &n[i], &x, &m[i]);

        if (!i) { // Si i==0 (matriz 1)
            A=(int**)malloc(n[i]*sizeof(int*)); // Filas de A. 
            for (int j=0; j<n[i]; j++)
                A[j]=(int*)malloc(m[i]*sizeof(int)); // Columnas de A.
        } else { //(matriz 2)
            B=(int**)malloc(n[i]*sizeof(int*)); // Filas de B. 
            for (int j=0; j<n[i]; j++)
                B[j]=(int*)malloc(m[i]*sizeof(int)); // Columnas de B.
        }
    }
    
    // Llenando matrices con valores random e imprimiendo.
    for (int k=0; k<2; k++) { // Dos veces para llenar e imprimir ambas matrices.
        printf("\nMatriz %i:\n", k+1);
        for (int i=0; i<n[k]; i++) { // Itera sobre columnas.
            for (int j=0; j<m[k]; j++) { // Itera sobre filas.
                if (!k) { // si k==0 (matriz 1)
                    A[i][j]=rand()%100;
                    printf("%5i", A[i][j]);
                } else { // (matriz 2) 
                    B[i][j]=rand()%100;
                    printf("%5i", B[i][j]);
                }
            } 
            printf("\n");
        }
    }
    
    // Obteniendo el numero mayor de cada matriz.
    mayorA=elemMayor(A, n[0], m[0]);   
    mayorB=elemMayor(B, n[1], m[1]);   
   
    printf("\nElemento mayor de A: %i\n", mayorA);
    printf("Elemento mayor de B: %i\n", mayorB);

    // Liberando las matrices.
    freeMulti(A, n[0]);
    freeMulti(B, n[1]);

    // Escribiendo el resultado en el archivo.
    fres=fopen("resultado.txt", "w");
    fprintf(fres, "%i", mayorA+mayorB);
    fclose(fres);

    printf("El resultado se encuentra en el archivo \"resultado.txt\".\n");

    return 0;
}
