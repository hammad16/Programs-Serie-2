#include <stdio.h>
#include <stdlib.h>


struct producto{
	char nombre[20];
	int cantidad;
};

int main(){
	int n,i,j,menor;
	printf("Cuantos productos hay?\n");
	scanf("%d",&n);
	struct producto productos[n];
	for(i=0;i<n;i++){
		printf("Ingrese el nombre del producto %d\n",i+1);
		scanf("%s",productos[i].nombre);
		printf("Ingrese la cantidad del producto %d\n",i+1);
		scanf("%d",&productos[i].cantidad);
	}
	menor=productos[0].cantidad;
	for(i=0;i<n;i++){
		if(productos[i].cantidad<menor){
			menor=productos[i].cantidad;
		}
	}
	printf("Los productos con menor cantidad son:\n");
	for(i=0;i<n;i++){
		if(productos[i].cantidad==menor){
			printf("%s\n",productos[i].nombre);
		}
	}
	return 0;
}
