#include<stdio.h>
int main(){
char nombre[20];
char numero[100];
FILE *contacto;
contacto=fopen("contactos.txt","a+");
if(contacto==NULL)
printf("No se puede abrir el archivo\n");
else{
printf("\tIntroduce el nombre\n\t");
fflush(stdin);
gets(nombre);
fprintf(contacto,"%s\n",nombre);
printf("\tIntroduce el numero\n\t");
fflush(stdin);
gets(numero);
fprintf(contacto,"%s\n",numero);
}	
}

