#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void impMatriz(float **X, int n, int m) { // Imprime matrices.
    for (int i=0; i<n; i++) { // Itera sobre filas.
        for (int j=0; j<m; j++) { // Itera sobre columnas.
            printf("%    .2f", X[i][j]);
        } 
        printf("\n");
    }
}

void llenaMatriz(float **X, int n, int m, char nombre) { // Llena matriz con datos del usuario.
    float valor;
    char nMin=tolower(nombre);
    printf("\n");
    for (int i=0; i<n; i++) { // Itera sobre filas.
        for (int j=0; j<m; j++) { // Itera sobre columnas.
            printf("Introduce el elemento %c%i%i de la matriz: ", nMin, i+1, j+1);
            scanf("%f", &valor);
            X[i][j]=valor;
        } 
    }

    // Imprime la matriz al terminar.
    printf("\nLa matriz %c es:\n", nombre);
    impMatriz(X, n, m);
}

float** creaMatriz(int n, int m, char nombre) { // Crea matrices de nxm con memoria dinámica.
    float **X;
    X=(float**)malloc(n*sizeof(float*)); // Filas de X. 
    if (X == NULL) {
        printf("No se ha podido asignar la memoria a %c", nombre);
    }
    
    for (int i=0; i<n; i++) {
        X[i]=(float*)malloc(m*sizeof(float)); // Columnas de X.
        if (X[i] == NULL) {
            printf("No se ha podido asignar la memoria a %c", nombre);
        }
    }

    return X; // Devuelve el doble apuntador de la matriz.
}

float** suma(float **A, float **B, int n, int m) { // Realiza la suma de A+B.
    float **C;
    C=creaMatriz(n, m, 'C');
    for (int i=0; i<n; i++) { // Itera sobre filas.
        for (int j=0; j<m; j++) { //Itera sobre columnas.
            C[i][j]=A[i][j]+B[i][j];
        } 
    }
    return C; // Devuelve el doble apuntador de la matriz.
}

float** resta(float **A, float **B, int n, int m) { // Realiza la resta de A-B.
    float **C;
    C=creaMatriz(n, m, 'C');
    for (int i=0; i<n; i++) { // Itera sobre filas.
        for (int j=0; j<m; j++) { // Itera sobre filas.
            C[i][j]=A[i][j]-B[i][j];
        } 
    }
    return C; // Devuelve el doble apuntador de la matriz.
}

float** multi(float **A, float **B, int n, int m, int p) { // Multiplica A*B.
    float **C, sum=0;
    C=creaMatriz(n, p, 'C'); // nxp es el nuevo orden de la matriz.
    
    for (int i=0; i<n; i++) { // Itera filas de C.
        for (int j=0; j<p; j++) { // Itera columnas de C.
            for (int k=0; k<m; k++) // Recorre las columnas de A y las filas de B. 
                sum+=A[i][k]*B[k][j];
            C[i][j]=sum; 
            sum=0;
        }
    }

    return C;
}

void freeMulti(float **X, int filas) { // Libera la memoria de matrices.
    for (int j=0; j<filas; j++)
        free(X[j]); // Libera las columnas.
    free(X); //Libera las filas.
}

int repetir() { // Lee una variable y devuelve un entero booleano.
    char op;
    int rep;

    printf("\n¿Deseas realizar otro cálculo? [Y] Si , [Cualquier otra tecla] No : ");
    scanf("\n%c", &op);
    rep=(op=='Y')? 1:0;

    return rep;
}

int main(void){
    // Matrices
    float **A;
    float **B; 
    float **R;
    int n, m, mb, p; // Tamaño de las matrices.
    int rep, op; // Booleano que permite repetir o salir.

    do {
        // Inicializacion de variables.
        n=0;
        m=0;
        mb=0;
        p=0;
        op=0;
        
        system("clear");

        printf("---- CALCULADORA DE MATRICES ----\n");
        printf("Selecciona la operacion que deseas.\n\n");
        printf("1. Suma\n2. Resta\n3. Multiplicación\n4.Salir\n\nOpcion: ");
        scanf("%i", &op);

        switch(op) {
            case 1:
                printf("\n---- SUMA ----\n\n");
                printf("Introduce el tamaño de las matrices: ");
                scanf("%ix%i", &n, &m);
                A=creaMatriz(n, m, 'A');
                llenaMatriz(A, n, m, 'A');
                B=creaMatriz(n, m, 'B');
                llenaMatriz(B, n, m, 'B');
                R=creaMatriz(n, m, 'R');
                R=suma(A, B, n, m);
                printf("\nEl resultado de A+B es:\n");
                impMatriz(R, n, m);
                freeMulti(A, n);
                freeMulti(B, n);
                freeMulti(R, n);
                rep=repetir();
                break;
            case 2:
                printf("\n---- RESTA ----\n\n");
                printf("Introduce el tamaño de la matrices: ");
                scanf("%ix%i", &n, &m);
                A=creaMatriz(n, m, 'A');
                llenaMatriz(A, n, m, 'A');
                B=creaMatriz(n, m, 'B');
                llenaMatriz(B, n, m, 'B');
                R=creaMatriz(n, m, 'R');
                R=resta(A, B, n, m);
                printf("\nEl resultado de A-B es:\n");
                impMatriz(R, n, m);
                freeMulti(A, n);
                freeMulti(B, n);
                freeMulti(R, n);
                rep=repetir();
                break;
            case 3:
                printf("\n---- MULTIPLICACIÓN ----\n\n"); 
                do {
                    if(m!=mb) {
                        printf("\nLas matrices no son conformables en la multiplicación\n");
                        printf("Intentalo de nuevo\n\n");
                    }
                    printf("Introduce el tamaño de la matriz A: ");
                    scanf("%ix%i", &n, &m);
                    printf("Introduce el tamaño de la matriz B: ");
                    scanf("%ix%i", &mb, &p);
                }
                while(m!=mb);
                A=creaMatriz(n, m, 'A');
                llenaMatriz(A, n, m, 'A');
                B=creaMatriz(m, p, 'B');
                llenaMatriz(B, m, p, 'B');
                R=creaMatriz(n, m, 'R');
                R=multi(A, B, n, m, p);
                printf("\nEl resultado de A*B es:\n");
                impMatriz(R, n, m);
                freeMulti(A, n);
                freeMulti(B, m);
                freeMulti(R, n);
                rep=repetir();
                break;
            case 4:
                rep=0;
                break;
            default:
                printf("\nSelecciona una opcion válida\n");
                rep=1;
                break; 
        }
    } while(rep);
    
    printf("\n---- CACULADORA TERMINADA ----\n"); 

    return 0;
}
