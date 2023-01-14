#include <stdio.h>
#include <stdlib.h>

   int empresa[18][10]; //Declaramos el array de 18x10
   //Declaramos las funciones
   void ingresos_vendedor();
   void revisar_vendedor();
   void ingreso_total();
   void clear();


   int menu();
   int vendedor, producto, ingreso;
   int suma, opcion, i, j;

   void main() //Menu
   {
      opcion = menu();

      while(opcion != 4) //Cuando el usuario presione 4, se cerrara el programa
      {
        switch(opcion)
        {
            case 1:
            ingresos_vendedor();
            break;

            case 2:
            revisar_vendedor();
            break;
            
            case 3:
            ingreso_total();
            break;
        }
      opcion=menu();
      }
   }

    int menu() //Inicio del menu
    {
      printf("\n\nPrograma para mostrar las ventas de 10 productos de 18 vendedores y las ventas totales.");
      printf("\n\n    [xx]Seleccione una opcion: [xx]\n\n");
      printf("\n  [1]. Almacenar ingresos por cada vendedor.\n");
      printf("\n  [2]. Revisar el total de ingresos por cada vendedor.\n");
      printf("\n  [3]. Obtener los ingresos totales.\n");
        printf("\n  [4]. Salir.\n");
        printf("\n\n    [xx] Introduzca una opcion. [xx]\n\n");
        scanf("%d",&opcion);
        return opcion;
    }

    void ingresos_vendedor() //Se almacenan los ingresos por cada vendedor

    {
        clear();
        printf("\nHas seleccionado: [1]. Almacenar ingresos por cada vendedor..\n\n");
        printf("Ingresa el ID del vendedor: ");
        scanf("%d",&vendedor);
        printf("Ingresa el ID de producto: ");
        scanf("%d",&producto);
        printf("Ingresa la cantidad total de venta: ");
        scanf("%d",&ingreso);

        empresa[vendedor][producto] = ingreso;

        printf("\nSe han actualizado los valores con exito.\n\n"); 
    }

   void revisar_vendedor() //Se revisan e imprimen los ingresos individuales de los vendedores
    {  
        clear();
        printf("\nHas seleccionado: [2]. Revisar el total de ingresos por cada vendedor.\n\n");
        printf("Ingresa el ID de vendedor: ");
        scanf("%d",&vendedor);
        suma=0;
        
        for(i=0;i<10;i++){
            suma = suma+empresa[vendedor][i];
            } 

        printf("\nEl total de ingresos del vendedor %d es de: $%d", vendedor, suma);
        printf("\n\n");
    }

   void ingreso_total() // Se imprime la suma de todos los ingresos individuales

    {
        clear();
        printf("\nHas seleccionado: [3]. Obtener los ingresos totales.\n\n");
        suma=0;

        for(i=0;i<18;i++){
            for(j=0;j<10;j++){
            suma = suma + empresa[i][j]; 
            }
        }

        printf("La cantidad total vendida es de: $%d",suma);
        printf("\n\n");
        
    }

    void clear() // Funcion para borrar las lineas anteriores del programa
    {
        getchar();
        system("clear");
    }