#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	FILE *melate;
	melate=fopen("melate.txt","a+");
    srand(time(NULL));
    int B[12];
    int i,z,x;
    for (x=0;x<100;x++){
    for (i=0;i<13;i++){
        B[i]=rand()%56+1;
        for(z=i-1;z>0;z--){
            while (B[i]==B[z]){
               B[i]=rand()%56+1;
			   z=i-1; 
            }
        }
    }
    for (i=1;i<12;i++){
        fprintf(melate,"%d , ",B[i]);
        }
    fprintf(melate,"%d \n",B[i]);
    }
    fclose(melate);
}
