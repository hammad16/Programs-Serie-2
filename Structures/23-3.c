#include <stdio.h>
#include <math.h>

struct complejos{
	float real;
	float imaginaria;
};
 
int main(){
	int operacion;
	struct complejos n,m,op;
	printf("Dame la parte real de tu primer numero: ");
	scanf("%f",&n.real);
	printf("Dame la parte imaginaria de tu primer numero: ");
	scanf("%f",&n.imaginaria);
	printf("Dame la parte real de tu segundo numero: ");
	scanf("%f",&m.real);
	printf("Dame la parte imaginaria de tu segundo numero: ");
	scanf("%f",&m.imaginaria);
	printf("Que operacion deseas realizar con tus 2 numeros complejos?\n");
	printf("1.- Sumar\n");
	printf("2.- Restar\n");
	printf("3.- Multiplicar\n");
	printf("4.- Dividir\n");
	scanf("%d",&operacion);
	
	switch(operacion){
		case 1:
			op.real = n.real + m.real;
			op.imaginaria = n.imaginaria + m.imaginaria;
			 
			printf("El resultado de (%.2f",n.real);
			
			if(n.imaginaria>=0){
				printf("+%.2fi",n.imaginaria);
			}else{
				printf("%.2fi",n.imaginaria);
			}
			printf(")+(%.2f",m.real);
			if(m.imaginaria>=0){
				printf("+%.2fi",m.imaginaria);
			}else{
				printf("%.2fi",m.imaginaria);
			}
			printf(")=%.2f",op.real);
			if(op.imaginaria>=0){
				printf("+%.2fi",op.imaginaria);
			}else{
				printf("%.2fi",op.imaginaria);
			}
			 
		break;
		case 2: 
			op.real = n.real - m.real;
			op.imaginaria = n.imaginaria - m.imaginaria;
			 
			printf("El resultado de (%.2f",n.real);
			
			if(n.imaginaria>=0){
				printf("+%.2fi",n.imaginaria);
			}else{
				printf("%.2fi",n.imaginaria);
			}
			printf(")-(%.2f",m.real);
			if(m.imaginaria>=0){
				printf("+%.2fi",m.imaginaria);
			}else{
				printf("%.2fi",m.imaginaria);
			}
			printf(")=%.2f",op.real);
			if(op.imaginaria>=0){
				printf("+%.2fi",op.imaginaria);
			}else{
				printf("%.2fi",op.imaginaria);
			}
			
		break;
		case 3:
			op.real = (n.real*m.real)-(n.imaginaria*m.imaginaria);
			op.imaginaria = (n.real*m.imaginaria)+(n.imaginaria*m.real);
			 
			printf("El resultado de (%.2f",n.real);
			
			if(n.imaginaria>=0){
				printf("+%.2fi",n.imaginaria);
			}else{
				printf("%.2fi",n.imaginaria);
			}
			printf(")*(%.2f",m.real);
			if(m.imaginaria>=0){
				printf("+%.2fi",m.imaginaria);
			}else{
				printf("%.2fi",m.imaginaria);
			}
			printf(")=%.2f",op.real);
			if(op.imaginaria>=0){
				printf("+%.2fi",op.imaginaria);
			}else{
				printf("%.2fi",op.imaginaria);
			} 
		break;
		case 4:
			
			op.real = ((n.real*m.real)+(n.imaginaria*m.imaginaria))/((m.real*m.real)+(m.imaginaria*m.imaginaria));
			op.imaginaria = ((n.imaginaria*m.real)+(n.imaginaria*m.imaginaria))/((m.real*m.real)+(m.imaginaria*m.imaginaria));
			
			
			printf("El resultado de (%.2f",n.real);
			
			if(n.imaginaria>=0){
				printf("+%.2fi",n.imaginaria);
			}else{
				printf("%.2fi",n.imaginaria);
			}
			printf(")/(%.2f",m.real);
			if(m.imaginaria>=0){
				printf("+%.2fi",m.imaginaria);
			}else{
				printf("%.2fi",m.imaginaria);
			}
			printf(")=%.2f",op.real);
			if(op.imaginaria>=0){
				printf("+%.2fi",op.imaginaria);
			}else{
				printf("%.2fi",op.imaginaria);
			}
		break;
		default: 
			printf("Opcion no valida");
		break;
	}
	
}
