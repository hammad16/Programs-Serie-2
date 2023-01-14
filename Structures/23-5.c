#include <stdio.h>
#include <string.h>

struct alumno{
    char nombre[20];
    float calificacion;
};

int main(){
    int n, i, j, k;
    float promedio, mayor;
    printf("Cuantos alumnos desea ingresar?\n");
    scanf("%i", &n);
    struct alumno alumnos[n];
    for(i=0; i<n; i++){
        printf("Ingrese el nombre del alumno %i\n", i+1);
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese la calificacion del alumno %i\n", i+1);
        scanf("%f", &alumnos[i].calificacion);
    }
    promedio=0;
    for(i=0; i<n; i++){
        promedio+=alumnos[i].calificacion;
    }
    promedio/=n;
    printf("El promedio de las calificaciones es: %.2f\n", promedio);
    mayor=alumnos[0].calificacion;
    for(i=1; i<n; i++){
        if(alumnos[i].calificacion>mayor){
            mayor=alumnos[i].calificacion;
        }
    }
    printf("Los alumnos con la calificacion mas alta son:\n");
    for(i=0; i<n; i++){
        if(alumnos[i].calificacion==mayor){
            printf("%s\n", alumnos[i].nombre);
        }
    }
    return 0;
}
