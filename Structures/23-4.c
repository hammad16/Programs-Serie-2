#include <stdio.h>
#include <math.h>

struct recta{
	float x1;
	float y1;
	float x2;
	float y2;
	float dist;
	float m;
};

int main(){
	struct recta r1,r2;
	printf("Dame el punto incial de tu primera recta\n");
	printf("x1: ");
	scanf("%f",&r1.x1);
	printf("y1: ");
	scanf("%f",&r1.y1);
	printf("Dame el punto final de tu primera recta\n");
	printf("x2: ");
	scanf("%f",&r1.x2);
	printf("y2: ");
	scanf("%f",&r1.y2);
	
	r1.dist = sqrt(((r1.x2-r1.x1)*(r1.x2-r1.x1))+((r1.y2-r1.y1)*(r1.y2-r1.y1)));
	r1.m = (r1.y2-r1.y1)/(r1.x2-r1.x1);
	printf("%f , %f\n",r1.dist,r1.m);
 	
	printf("Dame el punto incial de tu segunda recta\n");
	printf("x1: ");
	scanf("%f",&r2.x1);
	printf("y1: ");
	scanf("%f",&r2.y1);
	printf("Dame el punto final de tu segunda recta\n");
	printf("x2: ");
	scanf("%f",&r2.x2);
	printf("y2: ");
	scanf("%f",&r2.y2);
	
	r2.dist = sqrt(((r2.x2-r2.x1)*(r2.x2-r2.x1))+((r2.y2-r2.y1)*(r2.y2-r2.y1)));
	r2.m = (r2.y2-r2.y1)/(r2.x2-r2.x1);
	printf("%f , %f\n",r2.dist,r2.m);
	
	if(r1.m==-(1/r2.m)){
		printf("Las rectas son perpendiculares\n");
	}else{
		printf("Las rectas no son perpendiculares\n");
	}
	
	
	
	
}
