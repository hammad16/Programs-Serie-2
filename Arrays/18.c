#include <stdio.h>
#include <stdlib.h>

int fila, columna, opcion, i, j, asiento[25][4]; //Declaramos el array de 25x4

    int menu();
        //Declaramos las funciones
        void inicio_matriz();
        void reservar_asientos();
        void cancelar_asientos();
        void asientos_disponibles();
        void asientos_ocupados();
        void clear();

   int main() //Menu que contiene las opciones
    {
     
        printf("\n\nPrograma para reservar y cancelar boletos de avion, asi como mostrar los asientos disponibles y ocupados..");

        do
        {
            
            opcion = menu();

            inicio_matriz();
            switch(opcion)
            {
                case 1:
                reservar_asientos();
                break;

                case 2:
                cancelar_asientos();
                break;
                
                case 3:
                asientos_disponibles();
                break;

                case 4:
                asientos_ocupados();
                break;
            }

      }while(opcion != 5); //Cuando el usuario presione 5, se cerrara el programa

      return 0;
    }

    int menu() //Inicio del menu

    {
        do
        {
            printf("\n\n    [xx]Seleccione una opcion: [xx]\n\n");
            printf("\n  [1]. Reservar asientos de avion.\n");
            printf("\n  [2]. Cancelar asientos de avion.\n");
            printf("\n  [3]. Mostrar asientos disponibles.\n");
            printf("\n  [4]. Mostrar asientos ocupados.\n");
            printf("\n  [5]. Salir.\n");
            printf("\n\n    [xx] Introduzca una opcion. [xx]\n\n");
            scanf("%d",&opcion);

        } while (opcion <= 0 || opcion > 5);
        return opcion;
    }

    void inicio_matriz() //Funcion para inicializar las variables de fila y columna en 0
    
    { 

        for ( i = 1; i <= 25; i++){
            for ( j = 1; j <= 4; j++){
                asiento[i][j] == 0;
            }
        }
    }

    void reservar_asientos() //Funcion para almacenar los asientos

    {   

        do
        {
            clear();
            printf("\nHas seleccionado: [1]. Reservar asientos de avion.\n\n");
            printf("Ingresa la fila del asiento a reservar (1-25): ");
            scanf("%d",&fila);

        } while (fila <= 0 || fila > 25);
        
        do
        {
            clear();
            printf("\nHas seleccionado: [1]. Reservar asientos de avion.\n\n");
            printf("Ingresa la fila del asiento a reservar (1-25): %d", fila);
            printf("\nIngresa el numero de asiento de la fila (1-4): ");
            scanf("%d",&columna);

        } while (columna <= 0 || columna > 4);
        
        if (asiento[fila][columna] == 0)
        {
            asiento[fila][columna] = 1;

            printf("\nEl asiento (%d,%d) se ha reservado con exito", fila, columna);
            printf("\n\nSe han actualizado los valores con exito.\n");
        }
        else
            printf("\nERROR: el asiento (%d,%d) ya ha sido reservado, intenta reservando otro.", fila, columna);

    }

   void cancelar_asientos() //Se cancelan los asientos

    {  

        do
        {
            clear();
            printf("\nHas seleccionado: [2]. Cancelar asientos de avion..\n\n");
            printf("Ingresa la fila del asiento a cancelar (1-25): ");
            scanf("%d",&fila);

        } while (fila <= 0 || fila > 25);
        
        do
        {
            clear();
            printf("\nHas seleccionado: [2]. Cancelar asientos de avion.\n\n");
            printf("Ingresa la fila del asiento a cancelar (1-25): %d", fila);
            printf("\nIngresa el numero de asiento de la fila (1-4): ");
            scanf("%d",&columna);

        } while (columna <= 0 || columna > 4);
        
        if (asiento[fila][columna] == 1)
        {
            asiento[fila][columna] = 0;

            printf("\nEl asiento (%d,%d) se ha cancelado con exito", fila, columna);
            printf("\n\nLos datos se han actualizado con exito!.\n");
        }
        else
            printf("\nERROR: el asiento (%d,%d) no se encuentra reservado, intenta cancelando otro.", fila, columna);

    }

   void asientos_disponibles() // Se imprimen los asientos disponibles

    {

        int total = 0;
        clear();
        printf("\nHas seleccionado: [3]. Mostrar asientos disponibles.\n\n");
        printf("Los asientos disponibles son: \n\n");
        for(i=1;i<=25;i++){
            for(j=1;j<=4;j++){
                if (asiento[i][j] != 1)
                {
                    printf("(%d, %d), ",i,j);
                    total++;
                }
                
            }
            printf("\n");
        }
        printf("\n\nHay %d asientos libres.", total);
        printf("\n\n"); 

    }

    void asientos_ocupados() // Se imprimen los asientos ocupados

    {
        
        clear();
        int total = 0;
        printf("\nHas seleccionado: [4]. Mostrar asientos ocupados.\n\n");
        printf("Los asientos ocupados son: \n\n");
        for(i=1;i<=25;i++){
            
            for(j=1;j<=4;j++){
                if (asiento[i][j] == 1){
                    //total = 1;
                    printf("(%d, %d), ",i,j);
                    total ++;
                }
            }
        }

        printf("\n\nHay %d asientos ocupados.", total);
        printf("\n\n"); 

    }

    void clear() // Funcion para borrar las lineas anteriores del programa

    {
        getchar();
        system("clear");
    }