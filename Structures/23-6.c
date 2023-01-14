#include <stdio.h>
#include <stdlib.h>

struct trabajador{
	char nombre[30];
	int horas;
	float salario;
};

int main(){
	struct trabajador trabajador1;
	float pago;
	
	printf("Nombre del trabajador: ");
	fflush(stdin);
	gets(trabajador1.nombre);
	
	printf("Horas trabajadas: ");
	scanf("%d", &trabajador1.horas);
	
	printf("Salario por hora: ");
	scanf("%f", &trabajador1.salario);
	
	if(trabajador1.horas <= 40){
		pago = trabajador1.horas * trabajador1.salario;
	}else if(trabajador1.horas > 40 && trabajador1.horas <= 48){
		pago = (40 * trabajador1.salario) + ((trabajador1.horas - 40) * trabajador1.salario * 2);
	}else{
		pago = (40 * trabajador1.salario) + (8 * trabajador1.salario * 2) + ((trabajador1.horas - 48) * trabajador1.salario * 3);
	}
	
	printf("\nEl pago del trabajador %s es de: %.2f", trabajador1.nombre, pago);
	
}
