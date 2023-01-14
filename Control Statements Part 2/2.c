#include<stdio.h>
int main()
{
float b,x;
int p, i;
x=1;
    printf("Dame la base\n");
    scanf("%f",&b) ;
    printf("Dame la potencia\n" );
    scanf("%d",&p) ;
    for(i=1;i<p+1;i++) {
    x=x*b;
    }
    printf("%.2f", x);
}