#include<stdio.h>
main(){

int n=6;

for(int j=1;j<n;j++){


printf("\n");
for(int k=n;k>j;k--)
printf("  ");


for(int i=j;i<2*j;i++)
printf("%d ",i);	


for(int i=2*(j-1);i>j-1;i--)
printf("%d ",i);	


}
}
