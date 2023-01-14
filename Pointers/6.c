#include<stdio.h>

int k=0;

void dezpla(int *ap,int tam,int numdes);

main(){
	int n,d;
	
	printf("Programa que dezplaza un arreglo hacia la derecha.\n");
	
	do{
		printf("\nDe que tama%co quieres el arreglo: ",164);
		scanf("%d",&n);
		if(n<=0){
			printf("\nLo siento, pero debes ingresar un valor mayor a 0.\n");
		}
	}while(n<=0);
	
	int A[n];
	
	printf("\n");
	for(int i=0;i<n;i++){
		printf("Por favor ingresa el valor %d del arreglo: ",i+1);
		scanf("%d",A+i);
	}
	
	do{
		printf("\nCu%cntas posiciones quieres desplazar el arreglo: ",160);
		scanf("%d",&d);
		if(d<=0){
			printf("\nLo siento, pero debes ingresar un valor mayor a 0.\n");
		}
	}while(d<=0);
	
	dezpla(A,n,d); //Le paso el arreglo, tamaño y posiciones a desplazar a la función
	
	printf("\nDespu%cs de desplazar el arreglo %d posiciones queda asi:\n\n",130,d);
	for(int i=0;i<n;i++){
		printf("%d\t",*(A+i));
	}
	printf("\n");
}

void dezpla(int *ap,int tam,int numdes){ //Aquí la función recibe el arreglo como apuntador
	int aux;
	
	for(int i=0;i<numdes;i++){
		aux=ap[tam-1]; //Variable auxiliar para no perder el último valor
		for(int j=tam-1;j>0;j--){ //Porque no queremos ocupar la posición 0
			ap[j]=ap[j-1]; //La última posición toma el valor de la penúltima posición y asi sucesivamente
		}
		ap[0]=aux; //Se le asigna el valor de la variable auxiliar a la primera posición
	}
}
