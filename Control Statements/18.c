#include<stdio.h>

main(){
	
	int b1,b2,b3,b4,b5;
	int c1,c2,c3,c4,c5,c0=0;
	int aca;	
	
	printf("Dame un numero en binario te dare su complemento a dos\n");
	scanf("%d %d %d %d %d",&b1,&b2,&b3,&b4,&b5);
	
	if(b1==0)
	b1=1;
	else
	b1=0;
	
	if(b2==0)
	b2=1;
	else
	b2=0;
	
	if(b3==0)
	b3=1;
	else
	b3=0;
	
	if(b4==0)
	b4=1;
	else
	b4=0;
	
	if(b5==0)
	b5=1;
	else
	b5=0;
	
	if(b5==1){
	aca=1;
	c5=0;
	}
	else{
	c5=1;
	aca=0;
	}
	
	if(b4==1 && aca==1){
	aca=1;
	c4=0;
	}
	else if(b4==0 && aca==1){
	c4=1;
	aca=0;
	}
	else if(b4==1 && aca==0)
	c4=1;
	else if(b4==0 && aca==0)
	c4=0;
	
	if(b3==1 && aca==1){
	aca=1;
	c3=0;
	}
	else if(b3==0 && aca==1){
	c3=1;
	aca=0;
	}
	else if(b3==1 && aca==0)
	c3=1;
	else if(b3==0 && aca==0)
	c3=0;
	
	if(b2==1 && aca==1){
	aca=1;
	c2=0;
	}
	else if(b2==0 && aca==1){
	c2=1;
	aca=0;
	}
	else if(b2==1 && aca==0)
	c2=1;
	else if(b2==0 && aca==0)
	c2=0;
	
	if(b1==1 && aca==1){
	aca=1;
	c1=0;
	c0=1;
	}
	else if(b1==0 && aca==1){
	c1=1;
	aca=0;
	}
	else if(b1==1 && aca==0)
	c1=1;
	else if(b1==0 && aca==0)
	c1=0;
	
	printf("%d%d%d%d%d%d",c0,c1,c2,c3,c4,c5);
		
}
