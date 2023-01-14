#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct trabajador{
    char nombre[20];
    int edad;
    float salario;
};

int main(){
    int n;
    
    printf("Ingrese el numero de trabajadores: ");
    scanf("%d",&n);
    struct trabajador trabajadores[n];

    
    for(int i=0;i<n;i++){
        printf("Ingrese el nombre del trabajador %d: ",i+1);
        scanf("%s",trabajadores[i].nombre);
        printf("Ingrese la edad del trabajador %d: ",i+1);
        scanf("%d",&trabajadores[i].edad);
        printf("Ingrese el salario del trabajador %d: ",i+1);
        scanf("%f",&trabajadores[i].salario);
    }
    
	for(int i=0;i<n;i++){
        printf("Nombre: %s\n",trabajadores[i].nombre);
        printf("\tEdad: %d",trabajadores[i].edad);
        printf("\tSalario: %.2f\n",trabajadores[i].salario);
    }
}
