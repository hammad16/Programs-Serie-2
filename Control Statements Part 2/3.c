#include<stdio.h>
int main()
{
	int n, i, x, y, z, v;
x=1,y=1,z=1,v=1;
	printf("hasta que posicion deseas calcular la serie de fibonacci\n");
	scanf("%d",&n);
	printf("1");
  for(i=2;i<n+1;i++){
	printf("+%d",z);
  v=z+x+y-1;
  z=x+y;
  x=y;
  y=z;
  
  
}
printf("=%d",v);
}
