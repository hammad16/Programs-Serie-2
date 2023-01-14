#include<stdio.h>
#include<math.h>

int main() {

    float x=0;
    float potencia = 1.0, factorial = 1.0, e_x = 1.0;
    printf("Calculo la potencia de e a la potencia dada por formula de Taylor\n");
    printf("Dame la potencia.\n");
    scanf("%f", &x);

    for (int i = 1; i < 31; i++)
    {
        potencia = 1;
        factorial = 1;
        for(int j = 1; j < i; j++){
            potencia = potencia * x;
        }

        for(int j = i; j > 0; j--){
            factorial *= j;
        }
        
        e_x += (potencia/factorial);
    }
    
    printf("El resultado es: %f", e_x);

}