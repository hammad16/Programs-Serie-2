#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846


struct complejo{
    float real;
    float imaginario;
};

struct polar{
    float modulo;
    float argumento;
};

int main(){
    struct complejo c;
    struct polar p;
    printf("Ingrese la parte real: ");
    scanf("%f", &c.real);
    printf("Ingrese la parte imaginaria: ");
    scanf("%f", &c.imaginario);
    p.modulo = sqrt(pow(c.real, 2) + pow(c.imaginario, 2));
    p.argumento = (atan(c.imaginario/c.real))*180/PI;
    printf("El numero complejo %.2f + %.2fi en forma polar es: %.2f cis %.2f ° \n", c.real, c.imaginario, p.modulo, p.argumento);
}
